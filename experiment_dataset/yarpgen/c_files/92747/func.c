/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92747
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
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) var_10))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    var_12 = ((unsigned int) ((unsigned long long int) (unsigned short)42703));
                    var_13 = ((/* implicit */short) (+((-(arr_7 [i_1])))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) ((2242345629948416732LL) / (2242345629948416732LL)))) ? (var_0) : (((/* implicit */long long int) 3167972832U))))));
}
