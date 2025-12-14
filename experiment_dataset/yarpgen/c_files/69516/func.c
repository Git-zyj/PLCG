/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69516
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
    var_11 = ((/* implicit */int) (short)-1);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                var_12 *= ((/* implicit */unsigned short) max((arr_0 [i_0]), (((/* implicit */unsigned int) (-(arr_1 [i_0] [(_Bool)1]))))));
                arr_4 [i_0] [6] [6] = ((/* implicit */unsigned long long int) arr_2 [i_1]);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (+(var_8)))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))) : (((int) var_6)))), ((+(((/* implicit */int) var_9))))));
}
