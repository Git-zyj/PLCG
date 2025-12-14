/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76379
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_13 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) 829527047))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                arr_10 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) (unsigned short)7278)) : (((/* implicit */int) (short)-30788))))) / (((15215430539638784268ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113)))))));
                arr_11 [(signed char)13] [i_0] [i_2] [(signed char)11] = (-(((/* implicit */int) ((short) (signed char)118))));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 1) 
                {
                    arr_15 [i_0 + 2] [(signed char)10] [(unsigned char)17] [i_0] = arr_2 [i_0] [i_1];
                    arr_16 [i_0] [18ULL] [i_2] [i_3] = ((/* implicit */signed char) min((max((arr_12 [i_2 + 1] [i_2 + 2] [i_2 - 1] [i_0] [i_2 + 2] [i_2 - 1]), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) arr_9 [i_0] [i_3 - 1]))));
                    var_14 = ((/* implicit */int) 2752836937U);
                    arr_17 [i_0] [(signed char)13] [(unsigned char)5] [i_3] [(signed char)9] [i_0] = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) var_2)))));
                }
                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)32748))))))))));
            }
        }
        /* vectorizable */
        for (int i_4 = 3; i_4 < 18; i_4 += 1) 
        {
            var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_4 - 1] [i_0]))));
            var_17 = ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_4 + 2]);
            var_18 = ((/* implicit */unsigned int) ((unsigned char) arr_1 [i_0]));
        }
        for (unsigned short i_5 = 1; i_5 < 17; i_5 += 1) 
        {
            arr_24 [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_0] [i_5 + 3]);
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [19U] [i_0 + 2])) ? (2559580113U) : (arr_1 [0ULL]))))));
            arr_25 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_7 [12] [i_0 + 1])))), ((~(var_4)))))), (min((min((((/* implicit */unsigned int) arr_20 [i_0])), (arr_12 [i_0 + 1] [i_0 + 1] [i_5] [i_0] [i_5] [i_5]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1735387182U)))))))));
        }
        var_20 = ((/* implicit */unsigned int) max((var_20), ((-(((((/* implicit */_Bool) arr_19 [(short)0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (4294967284U)))))));
        var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_18 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1735387182U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [14]))))))) : (min((((/* implicit */unsigned int) arr_4 [(unsigned short)2] [i_0] [i_0 + 1])), (arr_22 [i_0] [(signed char)16]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) (signed char)82))))))));
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_4)) : (arr_6 [i_0] [(short)14]))), (((/* implicit */unsigned int) (short)(-32767 - 1)))))))))));
        arr_26 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)32765)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_2)))))) + ((+(arr_1 [i_0])))));
    }
    var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))));
}
