/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79710
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
    var_10 = ((/* implicit */short) max((var_10), (var_4)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) var_0))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_12 ^= ((/* implicit */unsigned short) (-((-(arr_7 [i_0] [i_1] [i_2] [i_4])))));
                                arr_17 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(3167288367U)))) ? (arr_12 [i_3 + 1]) : (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (0U)))));
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)26268))))) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) (_Bool)1))))));
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)5060)) ? (arr_7 [i_4 - 3] [i_2] [i_1] [i_0]) : (((/* implicit */int) var_6))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 16; i_5 += 3) 
                    {
                        for (long long int i_6 = 1; i_6 < 19; i_6 += 4) 
                        {
                            {
                                arr_24 [i_0] [(signed char)7] [i_0] [i_6] [11] = ((/* implicit */unsigned int) ((0U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_6] [(signed char)9] [i_5 + 2] [(signed char)9] [i_1])))));
                                var_15 = ((/* implicit */unsigned long long int) var_2);
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((unsigned int) (signed char)106)))));
                            }
                        } 
                    } 
                    arr_25 [(short)4] [(signed char)1] [i_2] = ((/* implicit */unsigned int) var_5);
                }
            } 
        } 
        var_17 ^= ((/* implicit */_Bool) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (113077343U))));
    }
    for (unsigned short i_7 = 1; i_7 < 23; i_7 += 3) 
    {
        arr_29 [(signed char)4] [(signed char)4] &= ((/* implicit */unsigned long long int) min((min((arr_28 [15U] [i_7 + 1]), (((/* implicit */unsigned short) arr_26 [2U])))), (((/* implicit */unsigned short) arr_26 [(_Bool)1]))));
        var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_28 [i_7] [i_7]))))) - (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_7])) / (((/* implicit */int) var_1))))), (0U)))));
    }
    var_19 += ((/* implicit */int) ((min((((/* implicit */unsigned int) -1645046149)), (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (4294967291U))))) >= (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-148)) : (((/* implicit */int) (unsigned short)39256)))) | (((/* implicit */int) var_4)))))));
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_7))));
}
