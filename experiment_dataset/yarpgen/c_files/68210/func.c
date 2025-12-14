/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68210
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
    var_13 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) var_5)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 20; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((-1) != (((/* implicit */int) ((1884314200U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((int) -1180558368)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_4 = 3; i_4 < 19; i_4 += 4) 
                {
                    var_15 = ((/* implicit */unsigned short) var_9);
                    var_16 = ((/* implicit */int) var_3);
                }
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    arr_18 [i_5] = (((-(2750637042U))) - ((-(1544330254U))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            {
                                arr_23 [i_5] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_3))))) ? ((+(arr_0 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [(signed char)6] [i_6])))));
                                arr_24 [i_7] [i_7] [i_5] [i_7] [i_7] = ((/* implicit */unsigned short) var_11);
                                var_17 -= ((/* implicit */signed char) var_5);
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (signed char i_8 = 3; i_8 < 21; i_8 += 2) 
                {
                    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        {
                            var_18 += ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_21 [i_9])) ? (3248177047349118688ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_8 - 2] [i_8 + 1]))))));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_6 [i_8 - 1] [i_8 - 3] [i_8 + 1]))))));
                            /* LoopSeq 2 */
                            for (signed char i_10 = 0; i_10 < 22; i_10 += 4) 
                            {
                                arr_33 [(_Bool)1] [i_9] [13LL] [i_8] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned char)144)))), (((/* implicit */int) ((3ULL) < ((+(1032864737936543176ULL)))))))))));
                            }
                            /* vectorizable */
                            for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
                            {
                                arr_36 [i_11] [(signed char)21] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_22 [(unsigned short)10] [(unsigned short)10] [i_9]);
                                var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) -34431359)) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_8 - 2] [i_8 + 1])) : (((/* implicit */int) arr_6 [i_1] [i_8] [i_8 - 2]))));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */int) (short)-22130)) * (((((/* implicit */int) var_5)) / (((/* implicit */int) arr_14 [i_0] [i_0] [(unsigned short)13] [(signed char)15]))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 3; i_12 < 19; i_12 += 2) 
                {
                    for (int i_13 = 3; i_13 < 19; i_13 += 4) 
                    {
                        {
                            arr_42 [i_13] [9] [i_13] [i_13 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -34431352)) ? (1180558364) : (((/* implicit */int) (_Bool)1))));
                            arr_43 [i_1] [i_1] [i_12] [i_1] [i_13] |= ((/* implicit */_Bool) var_11);
                        }
                    } 
                } 
            }
        } 
    } 
}
