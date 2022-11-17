
/*
 * Auto-generated file
 */

#ifndef TOKEN_H
#define TOKEN_H

#include "TokenId.h"

class Token {
private:
	typedef std::map <int, std::string> TokenMap;
	TokenMap token_name;
	TokenMap token_symbol;

public:
	enum TokenNum {
		FIRST = TokenId::OTHER_TOKEN,
		AND_EQUAL,
		ARROW,
		AT_EQUAL,
		BLOCK_COMMENT,
		BOOLEAN_AND,
		BOOLEAN_OR,
		CHAR_LITERAL,
		CONCAT_EQUALS,
		DIV_EQUAL,
		DIV_FLOOR,
		DIV_FLOOR_EQUAL,
		DOC_COMMENT,
		ELIPSIS,
		EQUAL,
		GREATER_EQUAL,
		HERE_DOCUMENT,
		IDENTICAL,
		JAVADOC_COMMENT,
		LAMBDA,
		LESS_EQUAL,
		LINE_COMMENT,
		LSHIFT,
		LSHIFT_EQUAL,
		MEMBER_FROM_OBJECT_PTR,
		MEMBER_PTR,
		MEMBER_PTR_FROM_OBJECT,
		MEMBER_PTR_FROM_OBJECT_PTR,
		MINUS_EQUAL,
		MINUS_MINUS,
		MOD_EQUAL,
		NOT_EQUAL,
		NOT_IDENTICAL,
		NULL_COALESCE,
		NULL_CONDITIONAL,
		OR_EQUAL,
		PLUS_EQUAL,
		PLUS_PLUS,
		RAISE,
		RAISE_EQUAL,
		RSHIFT,
		RSHIFT_ARITHMETIC,
		RSHIFT_ARITHMETIC_EQUAL,
		RSHIFT_EQUAL,
		RSHIFT_LOGICAL,
		RSHIFT_LOGICAL_EQUAL,
		SCOPE,
		SPACESHIP,
		STRING_LITERAL,
		TIMES_EQUAL,
		TOKEN_PASTE,
		XOR_EQUAL,

	};

	Token() {
		token_name = {
			{NULL_CONDITIONAL, "NULL_CONDITIONAL" },
			{DIV_FLOOR_EQUAL, "DIV_FLOOR_EQUAL" },
			{BOOLEAN_OR, "BOOLEAN_OR" },
			{MEMBER_PTR_FROM_OBJECT_PTR, "MEMBER_PTR_FROM_OBJECT_PTR" },
			{RSHIFT, "RSHIFT" },
			{MOD_EQUAL, "MOD_EQUAL" },
			{ARROW, "ARROW" },
			{PLUS_PLUS, "PLUS_PLUS" },
			{RAISE_EQUAL, "RAISE_EQUAL" },
			{RAISE, "RAISE" },
			{BLOCK_COMMENT, "BLOCK_COMMENT" },
			{MEMBER_PTR_FROM_OBJECT, "MEMBER_PTR_FROM_OBJECT" },
			{NULL_COALESCE, "NULL_COALESCE" },
			{LSHIFT, "LSHIFT" },
			{LAMBDA, "LAMBDA" },
			{LSHIFT_EQUAL, "LSHIFT_EQUAL" },
			{CHAR_LITERAL, "CHAR_LITERAL" },
			{BOOLEAN_AND, "BOOLEAN_AND" },
			{MEMBER_PTR, "MEMBER_PTR" },
			{RSHIFT_EQUAL, "RSHIFT_EQUAL" },
			{CONCAT_EQUALS, "CONCAT_EQUALS" },
			{RSHIFT_LOGICAL, "RSHIFT_LOGICAL" },
			{RSHIFT_LOGICAL_EQUAL, "RSHIFT_LOGICAL_EQUAL" },
			{ELIPSIS, "ELIPSIS" },
			{NOT_EQUAL, "NOT_EQUAL" },
			{RSHIFT_ARITHMETIC, "RSHIFT_ARITHMETIC" },
			{HERE_DOCUMENT, "HERE_DOCUMENT" },
			{DOC_COMMENT, "DOC_COMMENT" },
			{DIV_EQUAL, "DIV_EQUAL" },
			{SPACESHIP, "SPACESHIP" },
			{STRING_LITERAL, "STRING_LITERAL" },
			{LINE_COMMENT, "LINE_COMMENT" },
			{TOKEN_PASTE, "TOKEN_PASTE" },
			{EQUAL, "EQUAL" },
			{LESS_EQUAL, "LESS_EQUAL" },
			{RSHIFT_ARITHMETIC_EQUAL, "RSHIFT_ARITHMETIC_EQUAL" },
			{XOR_EQUAL, "XOR_EQUAL" },
			{OR_EQUAL, "OR_EQUAL" },
			{AT_EQUAL, "AT_EQUAL" },
			{AND_EQUAL, "AND_EQUAL" },
			{PLUS_EQUAL, "PLUS_EQUAL" },
			{SCOPE, "SCOPE" },
			{MEMBER_FROM_OBJECT_PTR, "MEMBER_FROM_OBJECT_PTR" },
			{MINUS_MINUS, "MINUS_MINUS" },
			{IDENTICAL, "IDENTICAL" },
			{TIMES_EQUAL, "TIMES_EQUAL" },
			{GREATER_EQUAL, "GREATER_EQUAL" },
			{DIV_FLOOR, "DIV_FLOOR" },
			{MINUS_EQUAL, "MINUS_EQUAL" },
			{NOT_IDENTICAL, "NOT_IDENTICAL" },
			{JAVADOC_COMMENT, "JAVADOC_COMMENT" },

		};

		token_symbol = {
			{BOOLEAN_OR, "||" },
			{EQUAL, "==" },
			{PLUS_PLUS, "++" },
			{RAISE, "**" },
			{TOKEN_PASTE, "##" },
			{RSHIFT_EQUAL, ">>=" },
			{IDENTICAL, "===" },
			{MEMBER_FROM_OBJECT_PTR, "->" },
			{SPACESHIP, "<=>" },
			{BLOCK_COMMENT, "/*...*/" },
			{RAISE_EQUAL, "**=" },
			{RSHIFT_LOGICAL, ">>>" },
			{GREATER_EQUAL, ">=" },
			{MEMBER_PTR_FROM_OBJECT_PTR, "->*" },
			{DIV_FLOOR, "//" },
			{DIV_FLOOR_EQUAL, "//=" },
			{PLUS_EQUAL, "+=" },
			{TIMES_EQUAL, "*=" },
			{MINUS_EQUAL, "-=" },
			{DIV_EQUAL, "/=" },
			{STRING_LITERAL, "\"...\"" },
			{LAMBDA, "=>" },
			{CONCAT_EQUALS, ".=" },
			{RSHIFT_LOGICAL_EQUAL, ">>>=" },
			{MOD_EQUAL, "%=" },
			{LSHIFT_EQUAL, "<<=" },
			{MEMBER_PTR, "->" },
			{RSHIFT, ">>" },
			{OR_EQUAL, "|=" },
			{NULL_COALESCE, "??" },
			{NOT_EQUAL, "!=" },
			{BOOLEAN_AND, "&&" },
			{LINE_COMMENT, "#..." },
			{XOR_EQUAL, "^=" },
			{NOT_IDENTICAL, "!==" },
			{DOC_COMMENT, "///" },
			{AT_EQUAL, "@=" },
			{AND_EQUAL, "&=" },
			{ELIPSIS, "..." },
			{CHAR_LITERAL, "'.'" },
			{ARROW, "->" },
			{MEMBER_PTR_FROM_OBJECT, ".*" },
			{NULL_CONDITIONAL, "?." },
			{RSHIFT_ARITHMETIC, ">>" },
			{JAVADOC_COMMENT, "/**...*/" },
			{MINUS_MINUS, "--" },
			{LESS_EQUAL, "<=" },
			{LSHIFT, "<<" },
			{HERE_DOCUMENT, "<<<..." },
			{RSHIFT_ARITHMETIC_EQUAL, ">>=" },
			{SCOPE, "::" },

		};
	}

	const std::string & to_string(int k) const {
		static const std::string UNKNOWN("???");

		auto t = token_name.find(k);
		return t == token_name.end() ? UNKNOWN : t->second;
	}

	const std::string & to_symbol(int k) const {
		static const std::string UNKNOWN("???");

		auto t = token_symbol.find(k);
		return t == token_symbol.end() ? UNKNOWN : t->second;
	}
};
#endif /* TOKEN_H */
