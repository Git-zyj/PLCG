/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70547
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
    var_16 = 524287;
    var_17 += ((/* implicit */unsigned int) (unsigned short)14901);
    var_18 = ((/* implicit */short) 2074305534);
    var_19 = ((/* implicit */unsigned int) 29360128);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) (short)6201);
                var_20 = ((/* implicit */unsigned int) -29360152);
            }
        } 
    } 
}
