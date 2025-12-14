/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (34357641216ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) * (((/* implicit */int) (unsigned char)0))))) : (2179896283U))));
                    var_10 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)247))));
                }
                for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    arr_12 [i_0] [i_0] [i_3] [9LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_0])) ? (((((/* implicit */_Bool) 1974604420)) ? (34357641216ULL) : (((/* implicit */unsigned long long int) 2179896283U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) && (((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0]))));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 1) 
                        {
                            var_11 = ((/* implicit */unsigned char) arr_16 [i_0] [i_1] [i_3] [i_4] [15]);
                            arr_20 [i_1] [i_1] [i_0] [i_4] [i_1] = ((/* implicit */unsigned short) ((arr_19 [i_0] [i_5 + 1]) / (arr_19 [i_0] [i_5 - 1])));
                            var_12 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_0)) >= (var_9)))) >> (4U)));
                            arr_21 [i_0] [i_4] [i_5 - 2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)34281))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 2; i_6 < 13; i_6 += 1) 
                        {
                            var_13 -= ((/* implicit */unsigned int) ((short) arr_10 [i_4] [i_3] [i_1] [i_0]));
                            var_14 = ((/* implicit */int) ((unsigned int) arr_16 [i_6] [i_6] [i_6] [i_6 + 3] [i_6 + 3]));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_4])))))) : (((unsigned long long int) var_3))));
                            var_16 = ((/* implicit */int) var_0);
                            var_17 += ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [(unsigned char)14] [i_6])) ? ((~(arr_22 [i_1] [(unsigned char)1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
                        }
                        var_18 |= ((/* implicit */signed char) var_7);
                        var_19 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                    }
                    var_20 += ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [(short)5] [i_3])) ? (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) (unsigned short)34267))))) : (((/* implicit */int) var_1)))), (2147483647)));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    for (unsigned short i_8 = 3; i_8 < 14; i_8 += 3) 
                    {
                        {
                            arr_31 [i_0] = ((/* implicit */short) arr_19 [i_0] [i_0]);
                            var_21 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), (arr_1 [2U])))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)24234)) / (var_4)))) | (((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */unsigned int) var_4)) : (var_5))))))));
                        }
                    } 
                } 
                arr_32 [i_0] = ((/* implicit */signed char) max((((arr_6 [i_0] [i_1] [i_1] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) min((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) var_0)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((unsigned int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)59027)) : (var_9))) - (((((/* implicit */int) var_3)) - (var_4))))));
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_3))));
    var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (6048092141214124379LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229)))));
}
