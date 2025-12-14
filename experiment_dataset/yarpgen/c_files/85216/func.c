/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85216
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0]))));
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned int) var_3);
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] |= ((/* implicit */unsigned long long int) var_12);
                        var_18 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) arr_9 [i_2])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_0]))))) | (((unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((short) arr_2 [i_3]))), (((long long int) 7929125622678351358ULL)))))));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 3) 
                    {
                        arr_18 [i_2] = ((/* implicit */int) arr_17 [i_0] [i_0]);
                        arr_19 [(unsigned short)3] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 13301317320582083981ULL)) ? (15548984099140601461ULL) : (((/* implicit */unsigned long long int) 3353850315U)))) << (((min((1682451573U), (((/* implicit */unsigned int) (unsigned short)15927)))) - (15884U)))))) ? (max((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned short) var_8))))), (arr_10 [i_2] [i_2] [i_4 - 1] [i_4]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)24760)) + (arr_15 [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) 3219912811U)) && (((/* implicit */_Bool) 2U)))))));
                        arr_22 [6] [i_5] [i_1] [8ULL] [i_1] |= ((/* implicit */short) -1545001442);
                        arr_23 [i_2] = ((/* implicit */long long int) arr_3 [i_0] [(unsigned short)12]);
                    }
                    for (unsigned int i_6 = 1; i_6 < 18; i_6 += 3) 
                    {
                        arr_26 [i_6] [i_6 + 1] [i_2] [i_2] [i_1] [(signed char)3] = ((((/* implicit */_Bool) ((((arr_4 [i_2 - 1] [1LL] [i_0]) == (((/* implicit */unsigned long long int) var_5)))) ? (((2147483647) + (arr_11 [i_0] [i_1] [i_2] [i_2]))) : (((/* implicit */int) (unsigned short)63))))) ? (((/* implicit */int) arr_5 [i_6 - 1] [i_2 + 3])) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_6] [i_2] [i_2] [i_2 + 2])) == (((/* implicit */int) ((var_3) == (((/* implicit */unsigned long long int) arr_11 [2ULL] [i_1] [i_2] [i_2])))))))));
                        arr_27 [i_2] [i_0] = ((unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_11 [i_1] [15] [i_1] [i_2]))) & (((/* implicit */int) var_14))));
                    }
                    arr_28 [i_2] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58707)) ? (4294967293U) : (2612515706U)))) ? (((((/* implicit */int) (unsigned short)65452)) / (484742963))) : (((/* implicit */int) (unsigned short)58040))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) ^ (((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) 4058719705U)) : (arr_1 [i_0] [i_0])))))));
                }
            } 
        } 
        arr_29 [2] = ((/* implicit */unsigned short) max((1734987480), (0)));
    }
    for (int i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((15971271936404600050ULL), (((/* implicit */unsigned long long int) 2U)))))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((short) arr_31 [i_7])))));
    }
    var_22 = ((/* implicit */unsigned long long int) var_8);
}
