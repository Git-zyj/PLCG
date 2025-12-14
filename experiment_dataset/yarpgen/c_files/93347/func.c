/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93347
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
    var_14 = ((/* implicit */unsigned short) ((unsigned int) (unsigned char)174));
    var_15 = ((/* implicit */short) (+(((int) var_7))));
    var_16 = ((/* implicit */_Bool) 2911331295596528304LL);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2911331295596528304LL))));
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (-(arr_3 [i_0]))))))))));
            }
        } 
    } 
}
