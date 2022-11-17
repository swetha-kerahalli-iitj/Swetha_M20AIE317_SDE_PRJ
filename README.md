# Detecting smells using deep learning

## Requirements
We generated the DesginSmells result  using pycharm for the repo.

We executed for different smells using 4 different algorithms.
rq1_cnn_1d.py
rq1_cnn_2d.py
rq1_rnn_emb_lstm.py
rq2_rnn_emb_lstm.py


Any smell execution and parameters and different smells can be updated in the subroutine run_final in their respective algorithm execution file.
Execution the above algorithm python files using command `python <algorithm.py>` will generate the result under /data/learning_smells/<desgniatedresults>/raw

## Implementation:

The method we followed as follows:
Download repositories:
We used the following protocol to identify and download our subject systems. We download repositories containing C# and Java code from GitHub. We use RepoReapers to filter out low-quality repositories. RepoReapers analyzes GitHub repositories and provides scores for nine dimensions of quality. These dimensions are architecture, community, continuous integration, documentation, history, license, issues, and unit tests.

## Splitting code fragments: 
                               
CodeSplit are utilities to split the methods or classes written in C# and Java source code into individual files. The utilities can parse the code correctly (using Roslyn for C# and Eclipse JDT for Java), and emit the individual methods or classes fragments into separate files following hierarchical structure (i.e., namespaces/packages become folders). CodeSplit for Java is an open-source project that can be found on GitHub. CodeSplit for C# can be downloaded freely online.

## Smells detection:

We use Designite to detect smells in C# code. Designite is a software design quality assessment tool for projects written in C#. It supports detection of eleven implementations, 19 designs, and seven architecture smells. It also provides commonly used code metrics and other features such as trend analysis, code clones detection, and dependency structure matrix to help us assess the software quality. A free academic license can be requested for all the academic purposes. Similar to the C# version, we have developed DesigniteJava which is an open-source tool to analyze Java code. We use DesigniteJava to detect smells in the Java codebase. The tool supports detection of 17 design and ten implementation smells.
We use console version of Designite (version 2.5.10) and DesigniteJava (version 1.1.0) to analyze C# and Java code respectively and detect design and implementation smells in each of the downloaded repositories.

## Generating learning data:

The learning data generator requires information from two sources:
A list of detected smells for each analyzed repository and the path to the folder where code fragments are stored corresponding to the repository.
The program takes a method (or class in case of design smell) at a time and checks whether the given smell has been detected in the method (or class). If yes, the program puts the code fragment into the positive folder corresponding to the smell, otherwise into the negative folder.
all_smells_files is a collection of files containing information about detected smells. 
For implementation smells, it is a list of projectN_implSmells.csv; similarly, for design smells, it is a list of projectN_designSmells.csv.
Implementation_smell_name | Namespace_name | Class_name | File_path | Method_name | Description |
Each project1_designSmells.csv has the following columns:
Design_smell_name | Namespace_name | Class_name | File_path | Description |

## Tokenizing learning data:

Machine learning algorithms including neural networks take vectors of numbers as input. Hence, we need to convert source code into vectors of numbers honoring the language keywords and other semantics. Tokenizer is an open-source tool to tokenize source code into integer vectors, symbols, or discrete tokens. It supports six programming languages currently including C# and Java.
```
Data format:
For 1D format, each sample is stored in a line.
For 2D format, two samples are separated by one new line
```
## Data preparation:

The stored samples are read into numpy arrays, preprocessed, and filtered. We first perform bare minimum preprocessing to clean the data. For both 1D and 2D samples, we scan all the samples for each smell and remove duplicates if they exist.
We balance the number of samples for training by choosing the smaller number from positive and negative sample count for training. We discard the remaining training samples from the larger side. We figure out the maximum input length (or, maximum input height and width in case of 2-D samples) for an individual sample. To filter out the outliers, we read all the samples into a numpy array and compute mean and standard deviation. We discard all the samples where the length of the sample is greater than mean + standard deviation. This filtering helps us keep the training set in reasonable bounds and avoids waste of memory and processing resources. Finally, we shuffle the array of input samples along with its corresponding labels array.

Note:We fine tuned the hyper parameters for data processing, for 1D and 2D ,but results are based on less number of epoch since it was taking time and my system got crashed multiple times while executing and was not able to capture the results, and we have processed data processing for C# code smell though we got generated data for both C# and Java source code.And we have used only three Code Smell detections which  are to be feature envy, Complex method which is long method and Complex condition which is large class as though we are able to generate the training data, we were unable to process for data processing due to system crash and deadline.

# Reference: 
https://ieeexplore.ieee.org/document/9914414 
https://ieeexplore.ieee.org/document/9761969 
https://ieeexplore.ieee.org/document/9724775 
https://ieeexplore.ieee.org/document/9724436 
https://ieeexplore.ieee.org/document/9596476 
https://dl.acm.org/doi/10.1145/3477535 
https://onlinelibrary.wiley.com/doi/10.1002/smr.2369
https://github.com/tushartushar/DeepLearningSmells
https://link.springer.com/article/10.1007/s11432-019-2830-8 
https://dl.acm.org/doi/10.1145/3387940.3392191 
https://journals.sagepub.com/doi/10.1177/1063293X20958932 
https://link.springer.com/article/10.1007/s13369-020-04365-1 
https://ieeexplore.ieee.org/document/9529815 
https://ieeexplore.ieee.org/document/9392959  
https://link.springer.com/chapter/10.1007/978-981-15-7984-4_37
https://ieeexplore.ieee.org/document/9424815 
https://ieeexplore.ieee.org/document/9359294 
https://ieeexplore.ieee.org/document/9054826  
Nuthan Munaiah, Steven Kroh, Craig Cabrey, and Meiyappan Nagappan. 2017. Curating GitHub for engineered software projects. Empirical Software Engineering 22, 6 (01 Dec 2017), 3219–3253. https://doi.org/10.1007/s10664 - 017- 9512- 6
