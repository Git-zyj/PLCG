/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6249
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
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned char) (short)-1);
                var_18 = ((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)-115))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_0);
}
