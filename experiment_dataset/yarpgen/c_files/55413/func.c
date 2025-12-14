/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55413
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((unsigned char) 0ULL))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0]))) : (((((/* implicit */int) (unsigned char)16)) + (((/* implicit */int) (unsigned short)62156))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)55079))))) ? (((/* implicit */int) ((unsigned char) var_1))) : ((+(((/* implicit */int) (unsigned char)242))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3388))))))))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)175))))) ? (((/* implicit */int) (unsigned short)62148)) : (((/* implicit */int) (unsigned char)239)))));
        var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) (unsigned char)229)))) > (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)151)))) >= ((+(((/* implicit */int) (unsigned char)17)))))))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (unsigned char)0))));
        arr_10 [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_9 [i_2 - 1])))) ? (min((((/* implicit */int) min(((unsigned short)6), (((/* implicit */unsigned short) (unsigned char)0))))), ((+(((/* implicit */int) (unsigned char)16)))))) : (((((/* implicit */_Bool) (unsigned short)20)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)65516)))) : (((/* implicit */int) var_7))))));
        arr_11 [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)3388))));
        var_14 |= max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))), (((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 + 1]))))));
    }
    for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 4) /* same iter space */
    {
        arr_16 [(unsigned char)6] [i_3] = arr_12 [i_3 + 1];
        var_15 *= ((/* implicit */unsigned char) ((arr_0 [i_3] [i_3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)155)))));
        var_16 = (unsigned char)80;
        var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_3 + 1])) || (((/* implicit */_Bool) arr_12 [i_3 - 2]))))), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)62155))))) ^ (arr_14 [i_3])))));
    }
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 27ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)155)) && (((/* implicit */_Bool) (unsigned char)80))))) : (((/* implicit */int) (unsigned short)31))))) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (unsigned short)20))));
}
