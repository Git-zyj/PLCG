/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98646
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((((/* implicit */_Bool) -2270192582247845001LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_1)) * (((/* implicit */int) (unsigned short)50227))))))) : (var_6)));
    var_12 = ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) ((unsigned char) 6LL)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((max((var_5), (-64797829))) * (((/* implicit */int) ((arr_0 [i_0]) > (((/* implicit */unsigned long long int) var_5)))))))) % (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (4095U)))) ? ((+(arr_0 [i_0]))) : ((+(arr_0 [i_0])))))));
        arr_5 [i_0] = ((/* implicit */long long int) ((arr_0 [i_0]) <= ((+(arr_0 [i_0 - 1])))));
        arr_6 [i_0] = ((/* implicit */int) 837371029U);
    }
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) var_3);
        var_14 = ((/* implicit */unsigned int) arr_8 [i_1]);
        arr_11 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (signed char)-11)), ((-(2462556029U)))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 21; i_2 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */int) (-(((unsigned long long int) arr_1 [i_2 + 2]))));
        arr_15 [i_2] [i_2] = ((/* implicit */int) arr_0 [i_2 + 2]);
        arr_16 [i_2] = ((/* implicit */unsigned char) ((16005201639371701263ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2 - 1])))));
        var_16 = ((((/* implicit */_Bool) arr_14 [i_2 - 1])) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (unsigned char)17)));
    }
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((8ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (2313275566U) : (2661656989U))))))) ? (2047LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
}
