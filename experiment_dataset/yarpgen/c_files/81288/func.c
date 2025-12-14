/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81288
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (min((((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_11))))));
    var_14 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] |= ((/* implicit */signed char) (((+(((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 4])))) * (((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 + 4] [i_2 + 2] [i_2 + 2])) ? (((/* implicit */int) arr_3 [i_2 + 2] [i_2 - 1] [i_2 + 3])) : (((/* implicit */int) arr_5 [i_2 + 4] [i_2 + 2] [i_2 + 1] [i_2 + 4]))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_0] [i_2 + 3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_3 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_1 [i_0] [i_0 + 2]))));
                        arr_10 [20ULL] [i_2] [i_1 - 3] [20ULL] &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_1 - 4] [i_1 - 3])) / (((/* implicit */int) (unsigned short)15))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_13 [i_1 - 4] [i_2] [i_1 - 4] [i_0] = ((/* implicit */signed char) (-(arr_2 [i_0])));
                        /* LoopSeq 1 */
                        for (short i_5 = 1; i_5 < 23; i_5 += 4) 
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) ((((((arr_14 [i_5 - 1] [(short)21] [i_2 + 4] [i_4] [i_2 + 4] [i_0 + 2] [i_0]) + (2147483647))) << (((((/* implicit */int) (unsigned short)15)) - (15))))) & (arr_14 [i_5 + 1] [i_5 + 1] [i_0] [i_4] [i_2 + 4] [i_0 + 2] [i_0])));
                            arr_17 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (min(((+(arr_2 [i_5]))), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                            arr_18 [i_0] [i_0] [i_1] [19ULL] [i_1] [i_0] [i_5 - 1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_14 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 - 1])), (max((var_3), (((/* implicit */unsigned int) arr_3 [i_2 + 4] [i_5] [i_1]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)44))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)44)) : (((/* implicit */int) var_7))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65490))) & (var_10)))))));
                        }
                        arr_19 [i_4] [i_4] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) (unsigned short)65476))))) ? (((((/* implicit */_Bool) arr_4 [i_1 - 4])) ? (((/* implicit */long long int) 4096684904U)) : (arr_4 [i_1 + 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_2) ^ (((/* implicit */int) (unsigned short)15))))) ? (((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_1] [i_2 + 2] [i_4])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) < (arr_4 [i_4])))))))));
                    }
                    for (short i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        arr_24 [i_6] [i_6] [i_6] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_1])))))) ? (arr_2 [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_2 + 4] [i_6])), ((unsigned short)65495))))))) & (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((_Bool) arr_21 [i_0] [i_6]))), (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65500))) : (arr_22 [i_0] [i_6] [i_6] [i_6]))))))));
                        arr_25 [i_0] [i_0] [i_6] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)81)), ((unsigned short)65518))))) == (((((/* implicit */_Bool) -189655034)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65494))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_29 [i_0 + 1] [i_1 - 3] [i_7] [i_1 - 3] = ((/* implicit */long long int) (unsigned short)65535);
                        arr_30 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0 - 1] = ((/* implicit */signed char) (_Bool)1);
                    }
                    arr_31 [i_0 - 1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_5 [i_1 - 4] [i_1 + 1] [i_1 - 1] [i_1 - 4]))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (189655033) : (((/* implicit */int) (unsigned short)64386)))) : (((/* implicit */int) arr_27 [i_0 + 2] [i_0 + 1] [i_0] [i_0] [i_1 - 2] [i_2 + 4]))));
                }
            } 
        } 
    } 
}
