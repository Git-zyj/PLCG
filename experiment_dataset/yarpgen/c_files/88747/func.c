/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88747
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? ((-(((/* implicit */int) var_8)))) : ((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (var_1)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_19 = (+(min((((/* implicit */unsigned long long int) (signed char)124)), (10523243657195098551ULL))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 2; i_2 < 22; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_2]))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) : (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [7ULL])) == (((/* implicit */int) var_9))))))));
                                arr_12 [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 3])))) : (((/* implicit */int) var_15))));
                                arr_13 [10ULL] [i_1] [(short)15] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)21356))))) || (((/* implicit */_Bool) ((3825194655U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51011))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_0 [i_0 + 1]))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 10600106698308192571ULL)) ? (7846637375401359045ULL) : (((/* implicit */unsigned long long int) 108740851))));
                }
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 21; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        {
                            var_23 *= ((/* implicit */unsigned int) ((var_12) ? (((/* implicit */int) ((10600106698308192571ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 + 2]))))));
                            /* LoopSeq 1 */
                            for (short i_7 = 0; i_7 < 25; i_7 += 2) 
                            {
                                var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((min((((/* implicit */int) var_6)), (var_13))) != (((/* implicit */int) arr_9 [i_5 + 2] [i_5] [i_6] [i_7] [i_7]))))), ((+(((/* implicit */int) var_16))))));
                                var_25 ^= ((/* implicit */long long int) var_10);
                                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) min((3825194653U), (3825194657U))))));
                                arr_23 [i_5] [i_5] [i_5] = ((/* implicit */int) var_16);
                            }
                            var_27 -= ((/* implicit */unsigned long long int) min((max((((arr_18 [i_0] [i_1] [i_5] [i_1] [i_5 + 2]) ^ (arr_4 [i_0 + 1] [17LL] [i_6]))), (((/* implicit */long long int) (+(((/* implicit */int) var_6))))))), (min((((/* implicit */long long int) (-(((/* implicit */int) var_3))))), (max((((/* implicit */long long int) var_13)), (arr_18 [(unsigned short)10] [i_6] [(unsigned short)10] [i_6] [i_1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((4194303U), (((/* implicit */unsigned int) ((unsigned char) (short)-18)))))) ? (((((/* implicit */long long int) ((var_12) ? (((/* implicit */int) var_8)) : (var_5)))) - ((-(var_17))))) : (((/* implicit */long long int) max((((/* implicit */int) var_8)), (min((var_1), (((/* implicit */int) var_8)))))))));
}
