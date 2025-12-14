/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8824
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
    var_16 += ((/* implicit */unsigned long long int) 0U);
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (0U) : (((/* implicit */unsigned int) var_12))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (4294967295U)))) : (var_6))))));
        var_19 = arr_1 [i_0];
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_20 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) (-(var_12)))) : (((((/* implicit */_Bool) (short)32512)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_7))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (unsigned char i_3 = 1; i_3 < 16; i_3 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned short) arr_5 [(short)16] [(short)16] [(short)16]);
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 3; i_4 < 16; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_3] [i_3] [i_3] [i_5])))))) != (((unsigned int) arr_12 [i_1])))));
                                arr_16 [i_2] [i_2] [i_2] [(signed char)16] [i_4] [(signed char)16] = ((/* implicit */short) (+(((var_0) >> (((((/* implicit */int) var_5)) - (32)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
