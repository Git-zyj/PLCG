/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80168
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_4))));
    var_20 = ((/* implicit */long long int) var_9);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 21; i_2 += 2) 
                {
                    arr_10 [i_1] [i_2] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) : (arr_1 [i_0 - 1] [i_1 + 1]));
                    var_21 &= ((((arr_4 [(short)9] [(short)9]) + (9223372036854775807LL))) >> (((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_0] [i_0 + 1])) * (var_11)))) / (((arr_7 [i_0] [i_0] [i_0 - 1] [i_0]) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))));
                    var_22 |= ((/* implicit */int) ((((var_12) | (((/* implicit */long long int) var_2)))) + (((((/* implicit */long long int) var_6)) / (var_8)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_17)) != (((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (((/* implicit */int) arr_7 [i_3 + 3] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_7 [3LL] [i_1 + 1] [i_2] [i_3])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_8)));
                        var_24 = ((/* implicit */_Bool) (((+(((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 + 2] [i_0 + 1]))) + (var_15))))) << (((var_1) - (608130352U)))));
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((arr_1 [i_0 + 1] [i_0 - 1]) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) var_18)) : (var_10)))))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            var_26 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) + (var_10)));
                            var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (arr_4 [i_0 + 1] [i_1 - 1]) : (((/* implicit */long long int) var_10)))) != ((-(arr_4 [i_0 + 1] [i_1 + 1])))));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 1; i_5 < 21; i_5 += 2) 
                        {
                            var_28 ^= ((/* implicit */int) var_4);
                            var_29 = ((/* implicit */int) var_8);
                            var_30 = var_15;
                        }
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            var_31 = ((/* implicit */_Bool) (-((-(arr_13 [i_0] [i_1 - 1] [i_2] [i_3 - 1])))));
                            arr_19 [i_0] [i_1 - 1] [i_3] [i_2 + 1] [i_3] [i_3] [i_6] = ((/* implicit */unsigned int) (-(arr_5 [i_2])));
                        }
                    }
                }
                arr_20 [i_0] [(_Bool)1] [i_1] = var_6;
                /* LoopNest 2 */
                for (long long int i_7 = 2; i_7 < 21; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */short) arr_11 [i_0] [i_1] [i_1 + 1] [i_7] [i_8]);
                            var_33 *= ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
                            arr_26 [i_0] [i_1 + 1] = ((var_9) ? (((var_12) / (((/* implicit */long long int) (+(var_3)))))) : (((/* implicit */long long int) var_6)));
                            var_34 &= ((/* implicit */_Bool) (-(((/* implicit */int) ((arr_4 [i_1 + 1] [i_0 - 1]) <= ((-(arr_4 [i_1] [i_7]))))))));
                            var_35 = ((/* implicit */signed char) (((((~(((((arr_4 [10] [i_1]) + (9223372036854775807LL))) >> (((arr_5 [i_8]) - (1218934287))))))) + (9223372036854775807LL))) << (((((arr_23 [i_0] [i_1] [i_7 + 1]) + (64342691648058217LL))) - (45LL)))));
                        }
                    } 
                } 
                arr_27 [13U] [i_1] [i_1] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_17 [i_0 - 1] [i_1 + 1]))))));
            }
        } 
    } 
}
