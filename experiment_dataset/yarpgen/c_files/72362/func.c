/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72362
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
    for (short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)-12458)) : (((/* implicit */int) (unsigned char)136)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_7);
        arr_5 [2U] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */int) var_1)) >> (((unsigned int) var_12))))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)254)))))))) > (((/* implicit */int) arr_7 [11LL]))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 4) 
        {
            for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
            {
                {
                    var_14 |= ((/* implicit */unsigned short) (~(((unsigned long long int) ((((/* implicit */_Bool) arr_17 [3ULL] [i_2] [i_3] [i_3 + 1])) ? (16213797250531721080ULL) : (1ULL))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 13; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_24 [i_5] [i_4 - 1] [i_3 - 1] [i_2] [i_1] = ((/* implicit */int) min((((((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12457))) : (arr_13 [i_1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_5] [i_3 + 1] [i_3 + 1])) && (((/* implicit */_Bool) var_7)))))))));
                                arr_25 [i_1] [i_1] [(_Bool)1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((8883045209537713314LL) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_1])) ? (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [i_1] [i_1])))))))) ? (((/* implicit */int) var_5)) : ((+((-(1422413500)))))));
                                var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) != (((/* implicit */int) arr_18 [i_4 - 1] [i_2] [(unsigned char)10] [i_4]))))) : ((+(((/* implicit */int) (!((_Bool)1))))))));
                                var_16 = ((/* implicit */unsigned char) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned int) var_9);
}
