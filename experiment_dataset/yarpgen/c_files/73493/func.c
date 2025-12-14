/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73493
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
    var_20 *= ((/* implicit */_Bool) max(((-2147483647 - 1)), (var_9)));
    var_21 -= ((/* implicit */unsigned int) var_7);
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)27748)) + (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14))))))) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (short)10152)) : (((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */int) var_1)))))) : (var_9)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_2 [i_2 - 1] [i_1] [i_0]))) >= (((int) arr_6 [i_0] [i_0] [i_0]))));
                    var_23 = ((int) ((unsigned int) arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1]));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) -1))));
}
