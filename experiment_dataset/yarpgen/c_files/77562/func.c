/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77562
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
    var_13 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_14 &= max((((/* implicit */long long int) (-(((/* implicit */int) var_3))))), (((((/* implicit */_Bool) -3713138318183077606LL)) ? (var_5) : (2305842992033824768LL))));
                    var_15 |= ((/* implicit */unsigned char) var_1);
                }
            } 
        } 
    } 
}
