/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83868
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min(((~(min((arr_2 [i_0] [i_0 + 1]), (((/* implicit */unsigned long long int) (short)-30232)))))), (((((/* implicit */_Bool) (-(130816U)))) ? (arr_2 [i_0] [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2] [i_1]))))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1832550817171167840ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1]))) : (arr_1 [i_0 + 3])));
                    var_22 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_2]))) : (arr_1 [i_0 + 1])))) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) ((4860547248329632634LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)220)))))));
                }
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) 552472346U))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) -8836711393628492923LL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_5 [6U] [(unsigned char)16] [i_3]))))) / (((((/* implicit */_Bool) 4294836488U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (var_0))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_8 [12LL] [i_0] [i_0] [i_0])))) : (((/* implicit */int) (signed char)14))));
                }
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 4; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_26 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)85))) + (arr_1 [i_1])))) ? (((((/* implicit */int) arr_9 [i_0 - 1] [(_Bool)1] [(unsigned short)11])) - (((/* implicit */int) arr_5 [i_0] [i_1] [i_4])))) : (((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_6])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1)))))) * (min((max((262143), (((/* implicit */int) (unsigned char)192)))), (((/* implicit */int) arr_16 [i_4] [i_1] [i_4] [i_5]))))));
                                var_27 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (max((((((/* implicit */_Bool) 593792223U)) ? (arr_13 [i_0] [i_1] [(signed char)18] [i_5]) : (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_9 [i_0 - 1] [i_5] [i_6])), (arr_16 [i_4] [(short)6] [i_5] [i_6]))))) == (arr_1 [i_0])))))));
                                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((-1179083058) - (min(((-(1179083057))), (((((/* implicit */_Bool) arr_7 [i_0 + 2] [(signed char)19] [i_0])) ? (((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_5])) : (((/* implicit */int) arr_0 [i_0 + 3] [i_1])))))))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */long long int) max((((((arr_15 [(unsigned char)10] [(unsigned char)10] [i_4]) ? (4294836495U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4] [i_0 - 1] [i_0 + 2] [i_0 + 2]))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)14909)) ? (-619811910) : (((/* implicit */int) (short)-9530))))))), (((min((1406656678U), (((/* implicit */unsigned int) 7340032)))) ^ (((arr_17 [i_0 - 1] [(short)10] [i_4] [i_0 + 1] [i_0]) << (((/* implicit */int) (_Bool)1))))))));
                }
            }
        } 
    } 
    var_30 = ((/* implicit */int) var_6);
    var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)17)))))));
    var_32 = ((/* implicit */signed char) min((((3676140330631302857LL) >> (3LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-352574459410046522LL)))))))));
}
