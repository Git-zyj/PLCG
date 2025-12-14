/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6166
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
    var_10 = ((/* implicit */unsigned char) ((var_9) >> (((((/* implicit */int) var_2)) + (11098)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_11 |= (~((-(arr_1 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */short) var_9);
        var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) 138572819315013064LL))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 7891979239816201849ULL))));
        var_14 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-6491))));
        var_15 += ((/* implicit */long long int) ((unsigned char) ((unsigned char) var_0)));
        var_16 = ((/* implicit */unsigned long long int) arr_5 [i_1]);
    }
    for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_11 [i_2] [i_2]);
        /* LoopNest 2 */
        for (signed char i_3 = 4; i_3 < 19; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                {
                    arr_19 [i_4] [i_3] [i_3] = ((/* implicit */long long int) 10554764833893349766ULL);
                    arr_20 [i_2] [i_4] [i_2] [i_2] = ((/* implicit */unsigned char) 10554764833893349766ULL);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                    {
                        var_17 = var_9;
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_9 [i_3 + 1]))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (arr_14 [i_3 - 4] [i_3 + 1])));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((long long int) (-(var_5))));
                        var_21 = ((/* implicit */unsigned char) var_3);
                        var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_1))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 4) 
                        {
                            arr_29 [i_2] [i_3] [i_4] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) var_4)) % (((/* implicit */int) (signed char)106)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_3 + 2] [i_3 - 3])) ? (((/* implicit */int) arr_17 [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) arr_17 [i_3 - 1] [i_3 + 2]))))) : ((-(arr_25 [i_2] [i_3 - 1] [i_7] [i_7 + 1] [i_4] [i_7])))));
                            var_23 -= ((/* implicit */short) min(((~(((0ULL) & (18446744073709551615ULL))))), (((unsigned long long int) min((((/* implicit */long long int) var_1)), (arr_26 [i_2] [i_3] [i_4] [i_3] [i_7]))))));
                            arr_30 [i_2] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */long long int) ((signed char) ((short) arr_17 [i_3 + 1] [i_7])));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) arr_11 [i_2] [i_2]))));
                        }
                        for (signed char i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            arr_33 [i_8] [i_6] [i_4] [i_4] [i_2] = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_5 [i_3 - 3]))))));
                            var_25 ^= ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3 - 2] [i_3]))) | (-138572819315013050LL))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_3 - 4] [i_3 - 4] [i_8])) ? (((/* implicit */int) arr_11 [i_3 + 2] [i_3 + 2])) : (((/* implicit */int) arr_11 [i_3 - 4] [i_3])))))));
                            var_26 = ((/* implicit */long long int) ((short) ((((/* implicit */int) arr_23 [i_3 - 4] [i_3 - 2])) & (((/* implicit */int) ((unsigned char) arr_18 [i_8] [i_4] [i_6]))))));
                        }
                        for (unsigned char i_9 = 3; i_9 < 18; i_9 += 4) 
                        {
                            var_27 |= (~(var_0));
                            var_28 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_31 [i_4] [i_3] [i_4] [i_6] [i_4])) >= (((/* implicit */int) arr_31 [i_4] [i_9] [i_2] [i_6] [i_9])))))));
                        }
                    }
                }
            } 
        } 
    }
}
