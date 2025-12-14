/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94677
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((_Bool) arr_1 [i_0]));
                var_16 |= ((/* implicit */unsigned int) (unsigned char)176);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_2);
    var_18 = ((/* implicit */int) min((var_18), (max((((/* implicit */int) ((unsigned short) var_6))), (((((((/* implicit */int) (signed char)-88)) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned char)64)) ? (3977283428296643160ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) - (3977283428296643139ULL)))))))));
}
