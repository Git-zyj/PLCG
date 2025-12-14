/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91937
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
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) | (((/* implicit */int) var_15)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_20 ^= ((/* implicit */unsigned int) var_1);
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */int) max((((/* implicit */short) (signed char)-1)), ((short)-8694)));
                        var_22 = ((/* implicit */signed char) max((var_22), (arr_1 [i_0 + 3] [i_3 + 2])));
                        var_23 *= ((/* implicit */short) arr_2 [i_0 + 2]);
                        var_24 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_10 [i_2] [i_1] [(signed char)0] [i_3 + 1])), (((var_13) + (((/* implicit */long long int) var_10))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) var_9);
                        var_26 = var_0;
                    }
                    var_27 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) var_4)), (var_7))), (((/* implicit */unsigned long long int) arr_13 [i_0 + 3] [i_1] [i_2] [i_0 - 1] [i_2]))));
                    var_28 += ((/* implicit */short) arr_12 [i_0] [(short)17] [(short)17] [i_0 + 3] [i_0] [i_0 - 1]);
                    arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0 + 3])), (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 + 1] [(unsigned char)7] [(unsigned char)2] [i_1] [i_2] [i_2]))) / (var_18))))), (var_18)));
                }
                for (short i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
                {
                    arr_18 [i_0 + 1] [i_5] [i_5] = ((/* implicit */_Bool) var_12);
                    var_29 &= ((/* implicit */short) min((var_10), (((/* implicit */unsigned int) max((((((/* implicit */int) var_16)) >> (((arr_4 [i_0 - 1] [(signed char)11] [i_0]) + (8754433387944898147LL))))), (arr_6 [i_5] [i_1] [i_0 + 2]))))));
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) max((min((((/* implicit */int) arr_13 [i_0] [16U] [i_5] [i_5] [(unsigned char)16])), (arr_0 [i_1]))), (((/* implicit */int) min((arr_7 [i_0 + 2] [i_0 + 1] [i_0 + 2]), (arr_7 [i_0 + 2] [i_0 + 1] [i_0 + 2])))))))));
                }
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned char) max((min((var_9), (var_17))), (((/* implicit */short) var_16))));
    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) var_14))));
    var_33 = ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (var_10));
}
