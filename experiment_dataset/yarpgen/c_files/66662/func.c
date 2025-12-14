/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66662
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
    var_17 += ((/* implicit */signed char) 2147483647);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */unsigned char) ((((unsigned long long int) arr_1 [i_0])) / (arr_2 [i_0 + 2])));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */unsigned long long int) 697734439U)) : (arr_2 [i_0 + 1])));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
        {
            arr_10 [i_1] [(short)1] = ((/* implicit */short) (_Bool)1);
            var_19 = ((/* implicit */unsigned short) ((unsigned int) (+(1120111033332807084ULL))));
        }
        for (int i_3 = 0; i_3 < 21; i_3 += 4) /* same iter space */
        {
            var_20 &= ((/* implicit */unsigned short) min((((arr_7 [i_1] [i_3] [i_3]) + (arr_7 [i_1] [i_1] [i_3]))), (((/* implicit */unsigned long long int) var_8))));
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((max((((/* implicit */unsigned int) ((-2147483629) ^ (arr_4 [i_3])))), (((8388607U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [8ULL] [(short)6]))))))) - (2212823557U))))))));
                var_22 = max(((short)8064), ((short)32767));
            }
            for (unsigned char i_5 = 3; i_5 < 18; i_5 += 4) 
            {
                var_23 = ((/* implicit */unsigned short) (((!((_Bool)1))) && (((/* implicit */_Bool) ((unsigned short) arr_16 [i_3] [i_5 + 1])))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_5 [i_1])))) : (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((unsigned char) arr_17 [i_5 - 2] [i_5] [i_5 - 1])))));
                /* LoopSeq 2 */
                for (int i_6 = 3; i_6 < 19; i_6 += 4) 
                {
                    arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned short) 67108860ULL);
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)8068)) : (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) arr_12 [i_1])) ? (arr_12 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5] [i_6])))))))) ? (((((/* implicit */_Bool) arr_14 [i_5 - 2] [i_5] [i_5 + 1] [i_5 - 2])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)18230)) / (((/* implicit */int) (_Bool)1))))) : (arr_11 [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)151)) << (((((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [5] [(short)13] [1] [i_6]))))) - (4294967291U)))))))))));
                }
                for (signed char i_7 = 1; i_7 < 20; i_7 += 1) 
                {
                    arr_24 [i_1] [(short)2] [i_7 - 1] [i_3] &= ((/* implicit */short) (unsigned char)255);
                    var_26 += min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) 18446744073709551610ULL))) >= (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (1606839396884195068ULL)))))), (((((/* implicit */_Bool) arr_6 [i_5 - 3] [i_5 - 1] [i_5 + 1])) ? (((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)6)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)138)))))));
                    var_27 = ((/* implicit */short) -2147483619);
                }
                arr_25 [i_5] [(unsigned short)7] [i_5] = ((/* implicit */int) arr_12 [i_1]);
            }
        }
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((arr_22 [i_1]) / (arr_22 [i_1]))))));
        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) ? (-2147483629) : (((/* implicit */int) (unsigned short)32767)))))));
        arr_26 [18U] = ((/* implicit */unsigned char) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_23 [i_1] [i_1] [(unsigned char)18] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_1]))))));
    }
    var_30 = ((/* implicit */short) var_12);
}
