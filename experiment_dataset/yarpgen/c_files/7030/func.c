/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7030
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (var_12))) <= (((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned int) var_19))))))))) : (var_16)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */signed char) (short)-16);
                    arr_10 [10U] [10U] [i_2] [14LL] &= ((/* implicit */long long int) var_9);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) var_15);
}
