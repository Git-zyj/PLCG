/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67106
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
    var_13 = ((/* implicit */short) (~(max((((/* implicit */long long int) (-(1555821905U)))), ((-(-9082517674344791753LL)))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) min(((signed char)20), ((signed char)40)))) > ((~(((/* implicit */int) (signed char)30)))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) (~(4254749559621290722ULL)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)20))) & (-4666421011109079275LL)));
}
