/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55146
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
    var_17 = ((/* implicit */long long int) var_4);
    var_18 *= (((-(var_12))) - (((/* implicit */unsigned int) (+(var_7)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) (~((~(var_13)))));
                    var_19 |= ((/* implicit */short) (+(var_0)));
                    arr_10 [6U] [i_0] &= ((/* implicit */unsigned long long int) var_9);
                    arr_11 [i_0] [i_0] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2]))))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (short)-9294))));
                }
            } 
        } 
    } 
}
