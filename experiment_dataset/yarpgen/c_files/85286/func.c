/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85286
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) arr_2 [i_1] [i_0]);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_3] [i_4]))) % (var_5))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_14))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) max((-1625184292), (((/* implicit */int) (signed char)(-127 - 1)))));
                                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) (unsigned short)25950)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        for (unsigned char i_6 = 1; i_6 < 21; i_6 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [i_6 + 1]))) : (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_16)))) : (max((var_16), (((/* implicit */long long int) var_12))))))));
                arr_24 [i_6 + 1] [i_5] = ((/* implicit */unsigned short) ((signed char) arr_1 [i_5]));
                var_20 = ((/* implicit */unsigned long long int) (+((-(arr_1 [i_6 - 1])))));
                arr_25 [i_5] [i_5] [i_5] = ((/* implicit */int) var_7);
            }
        } 
    } 
}
