import os
import sys

from DeepLearningSmells.program.data_curation import tokenizer_runner
from DeepLearningSmells.program.dl_models.rq2_cnn_2d import run_cnn_with_best_params
from DeepLearningSmells.program.dl_models.rq2_cnn_2d import get_all_data


def main():
 #    tokenizer_language = 'CSharp'
 #    tokenizer_input_base_path = r"C:\WorkSpace\Swetha_M20AIE317_SDE_PRJ\DeepLearningSmells\data\training_data_cs"

 #    tokenizer_exe_path = r'C:\WorkSpace\Swetha_M20AIE317_SDE_PRJS\tokenizer\src\tokenizer.exe'
 #    # tokenizer_exe_path = r'C:\Users\dell\anaconda3\Lib\tokenize.py'
 # #
 #    tokenizer_runner.tokenize(tokenizer_language, tokenizer_input_base_path, tokenizer_out_base_path, tokenizer_exe_path)
 #     smell_list = ["ComplexConditional", "ComplexMethod", "MultifacetedAbstraction", "FeatureEnvy"]
     # smell_list = {"FeatureEnvy"}


     smell_list = ["ComplexConditional"]
     # for smell in smell_list:
     #     data_path = os.path.join(os.path.join(tokenizer_out_base_path, smell), DIM)
     #     inputs.preprocess_data_2d(data_path)
     #     main(smell, data_path)


     tokenizer_out_base_path = r'tokenizer_cs1'
     smell = "ComplexConditional"
     data_path2 = os.path.join(os.path.join(tokenizer_out_base_path, smell), '2d')
     input_data2 = get_all_data(data_path2, smell)
     run_cnn_with_best_params(smell, input_data=input_data2, conv_layers=2, filter=64, kernel=7, pooling_window=2,
                             epochs=22)
     # The following is the last step to get the final results. hyper parameters seletected from the best performance (f1)
     # run_final()

     # Generate baseline using random classifier
     # measure_random_performance()
     # Let's say what a dummy classifier says
     # measure_performance_dummy_classifier()

if __name__ == '__main__':
    main()
