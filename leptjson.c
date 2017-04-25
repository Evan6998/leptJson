#include "leptjson.h"
#include <assert.h> /*assert()*/
#include <stdlib.h> /*null*/

#define EXPECT(c, char) do {assert(*(c -> json) == (char)); c -> json++;} while(0)

typedef struct {
    const char* json;
} lept_context;

static void lept_parse_whitespace(lept_context* c) {
    const char *p = c -> json;
    while(p == ' ' || p == '\t' || p == '\n' || p == '\r')
        p++;
    c -> json = p;
}