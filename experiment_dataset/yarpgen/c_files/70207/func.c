/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70207
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((unsigned short) ((unsigned int) (~(-4319444370233737147LL)))));
                arr_6 [(_Bool)1] = ((/* implicit */unsigned short) var_3);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(var_16))))));
    var_21 = ((/* implicit */signed char) min((var_3), (((/* implicit */int) var_4))));
}
