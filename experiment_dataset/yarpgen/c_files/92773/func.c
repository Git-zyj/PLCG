/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92773
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */int) (((~(min((var_11), (761460550U))))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (min((((/* implicit */long long int) (signed char)27)), (arr_0 [i_1] [i_2]))))))));
                    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (~(((/* implicit */int) max(((short)2556), (((/* implicit */short) arr_3 [i_2 + 3]))))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            arr_12 [i_0] [i_0] [i_2 + 4] [i_3] [i_0] = ((/* implicit */signed char) ((unsigned int) (_Bool)1));
                            arr_13 [i_0] [i_0] [i_3] [i_3] [i_0] = ((/* implicit */long long int) var_8);
                            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((arr_11 [i_2] [i_2 - 1] [i_2] [i_2 + 4] [i_3] [i_2]) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_2 - 1] [i_2 - 2] [i_2 + 1] [i_4] [i_4]))))))));
                            arr_14 [i_4] [i_1] [i_2] [i_2] [i_4] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2 + 3] [i_3]))) : (var_8)));
                        }
                        arr_15 [i_1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) <= (var_9)));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            arr_20 [i_6] [i_5] [i_5] [i_5] [i_2 + 1] [i_1] [i_0] = ((/* implicit */signed char) arr_4 [i_0]);
                            arr_21 [i_6] |= (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))));
                            arr_22 [i_5] [i_0] [i_2] [i_1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)172))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_5] [i_6] [i_6]))) >= (var_2)))) : (((/* implicit */int) arr_19 [i_0] [i_2 + 2] [i_2] [i_2 + 4] [i_5] [i_2]))));
                            var_15 = ((/* implicit */short) ((_Bool) (short)2556));
                        }
                        for (unsigned int i_7 = 2; i_7 < 21; i_7 += 3) 
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)11466))) : (-6031590161716668187LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) : (-6926391167115412605LL)));
                            arr_27 [i_0] [22LL] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2 - 1]))));
                            arr_28 [i_7] [i_7 + 2] [i_5] [i_5] [i_5] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-7)) && (((/* implicit */_Bool) (signed char)64))));
                            var_16 = ((((/* implicit */_Bool) arr_6 [i_7 - 1] [i_5] [i_2] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_7 - 1] [i_7] [i_5] [i_2 + 1]))) : (2821823909U));
                            arr_29 [i_7 + 1] [i_5] [i_2 - 1] [i_5] [i_0] = ((/* implicit */_Bool) ((short) (signed char)10));
                        }
                        var_17 = ((/* implicit */short) arr_17 [i_5] [i_1] [i_1] [i_0]);
                        /* LoopSeq 4 */
                        for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            arr_34 [i_5] [i_0] [i_2] [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_11)) ? (var_7) : (4044004626479566133LL))) : (((((/* implicit */_Bool) var_11)) ? (arr_32 [i_0] [i_1] [i_2] [i_5] [i_5] [i_8]) : (var_3)))));
                            var_18 = ((/* implicit */long long int) var_8);
                        }
                        for (long long int i_9 = 4; i_9 < 20; i_9 += 1) 
                        {
                            arr_38 [i_0] [i_5] [i_2] [i_5] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)172))) < (8121813615874114038LL)))) : (-714449112)));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (((8121813615874114025LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-123)))))));
                            var_20 += ((/* implicit */unsigned int) ((((/* implicit */int) (short)-2568)) ^ (((((/* implicit */int) arr_36 [i_0] [i_1] [i_1] [i_5] [i_1] [i_9 + 3] [i_9 - 3])) & (((/* implicit */int) arr_30 [i_0] [i_0]))))));
                        }
                        for (long long int i_10 = 0; i_10 < 23; i_10 += 4) 
                        {
                            arr_41 [i_0] [i_10] &= ((/* implicit */_Bool) var_12);
                            var_21 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_1] [i_2 + 4] [i_5] [i_10]))) > (((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)97))) : (-7294384124568898520LL)))));
                        }
                        for (short i_11 = 0; i_11 < 23; i_11 += 3) 
                        {
                            arr_46 [i_2] [i_5] [i_11] = ((/* implicit */long long int) ((((arr_1 [i_11] [i_2 + 3]) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_2 + 2] [i_0])) != (((/* implicit */int) var_6))))) - (1)))));
                            var_22 = ((/* implicit */long long int) (((-(var_0))) >= (-8121813615874114026LL)));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_17 [i_1] [i_1] [i_1] [i_1]) - (var_0)))) ? (((/* implicit */int) arr_6 [i_2 + 4] [i_12 - 1] [i_2 + 4] [i_12 - 1])) : (((/* implicit */int) arr_30 [i_0] [i_0]))));
                        var_24 |= ((/* implicit */signed char) arr_47 [i_0] [i_0] [i_2 + 3] [i_2 - 2]);
                    }
                    arr_50 [i_2] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) arr_40 [i_0] [i_0] [i_2 + 4])), (((unsigned int) arr_19 [i_2 - 1] [i_1] [i_2 + 1] [i_0] [10] [i_1]))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)79))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((var_4) + (8466427436435201537LL)))))) ? (((((/* implicit */_Bool) 8121813615874114025LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-121))) : (3462835273251003880LL))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))))));
}
