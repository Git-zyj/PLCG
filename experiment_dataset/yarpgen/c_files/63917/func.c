/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63917
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
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((long long int) var_2)) * (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (_Bool)1))));
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_1 - 1] [i_1 - 2] [i_2 - 1] [i_2 + 2] [i_4 - 2] [i_4 + 1] [i_4 - 1])) || (((/* implicit */_Bool) ((int) ((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_1]))))))))))));
                                var_21 = ((/* implicit */_Bool) (+((+(1006923989)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        for (short i_6 = 2; i_6 < 12; i_6 += 1) 
        {
            {
                arr_22 [i_5] [i_6] = -1006923992;
                var_22 = arr_10 [i_5] [i_6];
                var_23 = ((/* implicit */long long int) ((((/* implicit */long long int) var_16)) < (((((/* implicit */_Bool) (+(var_17)))) ? (max((((/* implicit */long long int) var_13)), (var_12))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5]))) : (arr_5 [i_6] [i_5] [i_5])))))));
                var_24 |= (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))));
            }
        } 
    } 
}
