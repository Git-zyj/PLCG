/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/562
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) (+((+(var_15)))));
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_3])))))));
                            arr_13 [i_0] [i_0] = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_8 [i_2] [i_2 + 1] [i_2 - 2] [i_3]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_13);
}
