/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67501
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) * (var_1)));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [i_0 + 1] [i_0 + 1])), (((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_4 [i_1] [3ULL])) : (10402875809868889252ULL))))));
                var_22 = ((/* implicit */unsigned long long int) (((+(267720666385287262LL))) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 2])) : (((/* implicit */int) arr_3 [i_1] [i_1])))))));
                /* LoopSeq 2 */
                for (int i_2 = 3; i_2 < 13; i_2 += 1) 
                {
                    var_23 = ((/* implicit */_Bool) 267720666385287254LL);
                    var_24 = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
                    var_25 = ((/* implicit */_Bool) arr_5 [i_1] [i_1]);
                    var_26 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 1])) ? (((((arr_5 [(_Bool)1] [0]) + (2147483647))) >> (((arr_4 [i_0] [i_2 - 1]) - (224579198U))))) : ((~(((/* implicit */int) (unsigned short)33270)))))), (((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) * (arr_2 [i_2 - 1] [i_0]))))));
                }
                for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_0]))))) || ((!(((/* implicit */_Bool) (unsigned short)15058))))));
                                var_28 = ((/* implicit */int) (-(((unsigned long long int) ((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) var_6)))))));
                                arr_16 [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) ((unsigned char) arr_3 [i_0 - 2] [i_0 - 1])))));
                                var_29 = ((/* implicit */int) var_0);
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_11 [i_1] [i_0] [i_0] [i_0 - 1]) & (arr_5 [i_3] [i_1])))) ? (((/* implicit */unsigned long long int) min(((-(3983806023U))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_6 [i_0])), ((unsigned short)560))))))) : (((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_3] [i_3])) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (16348229419585799775ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33538))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))));
                    var_31 = ((/* implicit */unsigned short) arr_6 [i_3]);
                    /* LoopSeq 3 */
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0 - 3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_18 [i_0 - 1] [i_0 + 1] [i_0 - 2])))) : (((((/* implicit */_Bool) max((arr_7 [i_3]), (arr_5 [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)560))) : (((unsigned long long int) var_0))))));
                        var_32 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 2]))) < (arr_15 [i_0] [i_0] [i_0] [i_6] [i_3] [i_3] [i_1])));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        arr_22 [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_3] [i_0 - 2] [i_1] [i_7] [(signed char)4])))) ? ((-(arr_15 [i_0] [i_1] [i_3] [i_0 - 2] [5ULL] [(_Bool)0] [(_Bool)0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1])))));
                        var_33 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 3]))) == (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (4294967295U))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] = (~(arr_24 [(unsigned short)6] [i_3] [(unsigned short)6]));
                        arr_28 [i_0] [i_1] = arr_0 [i_1] [i_8];
                        arr_29 [i_1] [i_1] [i_8] [(signed char)0] [i_3] = ((/* implicit */signed char) arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [i_8]);
                        arr_30 [i_0] [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] [i_8] [i_8] = ((/* implicit */short) ((unsigned long long int) ((arr_4 [i_1] [7ULL]) > (((/* implicit */unsigned int) var_11)))));
                        var_34 = ((/* implicit */int) var_4);
                    }
                    var_35 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_26 [i_3] [i_3] [i_3] [i_1] [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_17 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)65004)))), ((+((-(-2147483636)))))));
                }
            }
        } 
    } 
}
