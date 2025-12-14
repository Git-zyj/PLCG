/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (((((-392865615 ? 1817999096 : -56))) ? ((-72 ? 14433435885286170266 : 1)) : (((16805832150038016246 ? 60 : -54)))));
                var_19 *= ((-109 ? ((max((-1743126326 | -61), (min(var_13, 31))))) : 17821543482139418857));
                var_20 ^= (max((min(0, (min(67553994410557440, 68)))), ((min(-1743126326, 1)))));
            }
        }
    }
    var_21 = (min(var_21, (var_1 && var_6)));
    #pragma endscop
}
