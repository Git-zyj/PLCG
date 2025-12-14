/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81034
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
    var_17 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_16)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) 2708214804U)) ? (((/* implicit */int) (_Bool)1)) : (var_8)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) var_9);
        var_18 = ((/* implicit */unsigned char) (unsigned short)51973);
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) ((int) arr_7 [i_1]));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_20 -= ((/* implicit */long long int) (short)-971);
            var_21 = ((/* implicit */signed char) arr_8 [i_1]);
            var_22 = ((/* implicit */long long int) var_0);
        }
        for (int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 20; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        {
                            var_23 ^= ((/* implicit */short) ((unsigned short) (-(var_15))));
                            var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_21 [20ULL] [i_5] [i_4] [i_3] [i_3] [2ULL])))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_12 [i_4 - 2]))));
                            var_25 = ((((/* implicit */long long int) var_13)) / (((arr_21 [i_6] [i_5] [i_4] [i_3] [i_3] [i_1]) ^ (((/* implicit */long long int) arr_14 [13] [i_3] [i_6])))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_14)) + (2147483647))) << ((((+(arr_20 [i_1] [i_1] [0LL] [i_3] [20LL]))) - (1305483023)))));
            var_27 *= ((((/* implicit */int) arr_18 [i_1])) / (((/* implicit */int) arr_18 [i_1])));
            arr_22 [(unsigned char)13] [i_3] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_19 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16))))));
        }
        var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(short)8])))))));
    }
    var_29 = ((/* implicit */unsigned char) min((var_29), (min(((unsigned char)246), (((/* implicit */unsigned char) (_Bool)1))))));
}
