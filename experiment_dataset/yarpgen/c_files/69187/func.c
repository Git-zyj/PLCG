/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69187
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
    var_19 = ((/* implicit */signed char) (+(var_1)));
    var_20 = (+(((/* implicit */int) var_11)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [(_Bool)1] [(_Bool)1] [0ULL] &= ((/* implicit */signed char) var_15);
                var_21 = ((/* implicit */unsigned char) var_3);
            }
        } 
    } 
}
