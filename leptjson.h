#ifndef LEPTJSON_H__
#define LEPTJSON_H__

typedef enum {
    LEPT_NULL,
    LEPT_NUMBER,
    LEPT_STRING,
    LEPT_OBJECT,
    LEPT_FALSE,
    LEPT_TRUE,
    LEPT_ARRAY
} lept_type;

typedef struct {
    lept_type type;
} lept_value;

enum {
    LEPT_PARSE_OK = 0, /*successfully parse*/
    LEPT_PARSE_EXPECT_VALUE, /*type of empty string*/
    LEPT_PARSE_INVALID_VALUE,
    LEPT_PARSE_ROOT_NOT_SINGULAR
};

int lept_parse(lept_value* v, const char* json);
lept_type lept_get_type(const lept_value* v);

#endif