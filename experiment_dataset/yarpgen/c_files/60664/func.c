/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60664
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_2] = (+(((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_2 - 1] [i_1])) : (((/* implicit */int) (signed char)2)))) * (((((/* implicit */_Bool) -3093780303401553246LL)) ? (((/* implicit */int) arr_7 [i_2 + 2] [i_1] [i_2 + 1] [i_3])) : (var_7))))));
                            arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((unsigned char) ((arr_8 [i_2 - 1] [i_2 + 1] [i_2]) / (arr_5 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 - 1]))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) arr_2 [i_0]);
                var_18 -= ((/* implicit */int) var_3);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_16)))))) ? (((((((/* implicit */_Bool) var_7)) ? (var_14) : (((/* implicit */unsigned long long int) var_7)))) | (var_14))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-20002)), (1496214045))))));
}
