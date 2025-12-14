/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56460
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
    var_12 = ((((/* implicit */_Bool) max((((unsigned int) var_0)), (((/* implicit */unsigned int) ((unsigned char) var_6)))))) ? ((~(((long long int) (_Bool)0)))) : (((/* implicit */long long int) (-(16128)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        var_13 = (+(((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1)))));
                        arr_12 [i_3] [i_0 - 1] [i_3] [i_0 - 1] |= ((/* implicit */_Bool) (short)-31826);
                        var_14 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_3 + 1] [i_3]))));
                        var_15 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2] [i_2])) ? (arr_0 [i_2] [i_3 + 1]) : ((~(((/* implicit */int) arr_1 [i_3]))))));
                    }
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        var_16 -= ((/* implicit */_Bool) (-(arr_14 [i_0] [i_0 - 1] [i_2] [i_0] [(unsigned char)10])));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_0])) ? (arr_6 [i_0] [i_1] [i_2] [i_4]) : (-9223372036854775801LL))) != (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) (short)-22511))))))))));
                            var_18 = arr_14 [i_2] [i_2] [i_0] [i_2] [i_0 - 1];
                        }
                        for (long long int i_6 = 2; i_6 < 12; i_6 += 2) 
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) -7449902980407686883LL)) ? ((~(2913222374U))) : ((-(2799769736U)))));
                            var_20 += ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0 - 1])) < ((+(-1)))));
                            var_21 = ((/* implicit */unsigned char) 1073725440U);
                        }
                        arr_21 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) ((unsigned int) (short)-31842)));
                    }
                    for (unsigned char i_7 = 1; i_7 < 11; i_7 += 4) 
                    {
                        arr_25 [i_7] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_0 - 1] [i_0] [i_0 - 1] [7LL] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_7 + 1] [i_0 - 1] [i_0]))));
                        var_22 *= (~(((unsigned int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])));
                    }
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_20 [i_2] [i_2] [i_2] [(signed char)6] [i_1] [i_1] [i_0])) + (arr_13 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((int) arr_23 [i_0] [i_0] [i_0] [(unsigned short)5] [i_0]))) : ((~(2853090866U)))));
                    var_24 += ((/* implicit */long long int) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            {
                                var_25 = (+(arr_18 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]));
                                arr_32 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [12U] = ((/* implicit */unsigned int) var_5);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_33 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */long long int) 1694609812U)) < (arr_7 [i_0]))))));
    }
    var_26 = ((/* implicit */unsigned long long int) var_10);
}
