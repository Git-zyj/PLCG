/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59850
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
    var_13 = ((/* implicit */unsigned long long int) (unsigned char)220);
    var_14 = ((/* implicit */int) (unsigned char)51);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((long long int) min((((/* implicit */long long int) -497145561)), (-1LL))));
                var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (signed char)-1)))))) ? (((unsigned long long int) arr_3 [0ULL])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (1ULL)))))));
            }
        } 
    } 
}
