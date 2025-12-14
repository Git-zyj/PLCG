/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74221
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
    var_17 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))))) ? (var_6) : (((/* implicit */int) var_2))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 17; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                var_18 -= ((/* implicit */unsigned int) (-(((arr_4 [i_0] [i_2] [i_2]) - (((/* implicit */int) var_7))))));
                var_19 = ((/* implicit */int) (unsigned char)234);
            }
            var_20 = arr_2 [i_1 - 1] [i_1];
            var_21 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1])) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)0))))));
            var_22 *= ((/* implicit */short) ((arr_5 [i_1 + 1] [i_1] [i_1 + 1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1 + 1])))));
            var_23 = ((/* implicit */_Bool) ((unsigned char) arr_3 [i_1 + 1] [i_1 - 1] [i_1 - 1]));
        }
        for (short i_3 = 1; i_3 < 17; i_3 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */int) arr_7 [i_0] [i_3])), (var_6))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_3])) ? (((unsigned long long int) arr_5 [i_0] [i_0] [i_3])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((signed char) arr_2 [i_0] [i_3]))) : (((((/* implicit */int) arr_9 [i_0] [i_3] [i_3])) | (((/* implicit */int) arr_1 [i_0]))))))) ? (max((((/* implicit */int) var_15)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_7 [i_3] [i_3])) : (((/* implicit */int) arr_2 [i_0] [i_3])))))) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
            var_26 = ((((((((/* implicit */int) var_0)) + (var_6))) | (((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_0] [i_3] [i_3])), (arr_7 [i_3] [i_3])))))) - (((/* implicit */int) arr_0 [i_3])));
        }
        var_27 = var_12;
    }
}
