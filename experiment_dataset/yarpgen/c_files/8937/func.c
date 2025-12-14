/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8937
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        var_14 &= ((((((/* implicit */int) ((3604016708U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) >> (((((/* implicit */int) arr_2 [i_0])) << (((/* implicit */int) arr_2 [i_0])))))) != (((((/* implicit */int) (short)32420)) + (((/* implicit */int) arr_0 [i_0])))));
        arr_4 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_0 [i_0])) ^ (((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (22626))))))), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-13890))))));
    }
    var_15 = ((signed char) 3137272844U);
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 1) 
    {
        for (unsigned int i_2 = 3; i_2 < 17; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 16; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            {
                                arr_18 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1]))))) ? (((unsigned int) (_Bool)1)) : (min((3604016709U), (((/* implicit */unsigned int) (_Bool)1))))))) == (arr_12 [i_1] [i_1] [i_1])));
                                var_16 = ((/* implicit */short) (~(((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) arr_13 [i_1]))))) ? (4294967287U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                                var_17 = ((/* implicit */unsigned long long int) (-((~(((((/* implicit */int) arr_6 [i_1])) << (((((/* implicit */int) var_5)) - (29400)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            {
                                arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((signed char) ((((((/* implicit */_Bool) 14990370824496551787ULL)) ? (14990370824496551787ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1023))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-64)))))));
                                var_18 ^= ((/* implicit */signed char) ((unsigned short) ((((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_3] [i_3])))) * (((/* implicit */int) ((2889009961U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1])))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2] [i_3])) - (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_9 = 1; i_9 < 14; i_9 += 4) 
                        {
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) ^ (((((/* implicit */_Bool) arr_20 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_9]))) : (137438822400ULL))))))));
                            arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) arr_28 [i_9 + 4] [i_9 + 4] [i_9 + 4] [i_9 + 4] [i_9 + 4] [i_9 + 4] [i_9 + 4]));
                            arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] = arr_12 [i_3] [i_3] [i_1];
                        }
                        for (unsigned short i_10 = 3; i_10 < 15; i_10 += 3) 
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max(((-(arr_26 [i_3] [i_3] [i_3]))), (((/* implicit */unsigned long long int) var_11))))) || (((/* implicit */_Bool) (signed char)15))));
                            var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11422))) != (min((10159833893655581715ULL), (((/* implicit */unsigned long long int) (unsigned short)1023))))));
                        }
                        arr_35 [i_1] = ((/* implicit */signed char) (-((-((~(arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))))));
                        arr_36 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(arr_17 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1])))), (18446744073709551601ULL)));
                        var_23 *= ((/* implicit */short) arr_12 [i_1] [i_1] [i_3]);
                    }
                    for (short i_11 = 4; i_11 < 16; i_11 += 3) 
                    {
                        arr_40 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (short)32763)))) % ((-(((/* implicit */int) (signed char)56)))))), (((/* implicit */int) ((short) arr_20 [i_1] [i_1])))));
                        var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) arr_37 [i_1] [i_1])))));
                        var_25 ^= ((/* implicit */short) arr_16 [i_1] [i_1] [i_1] [i_1] [i_3]);
                    }
                }
            } 
        } 
    } 
}
