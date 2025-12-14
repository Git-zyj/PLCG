/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_10 << (20293 - 67)))) ? (((~((64 << (7943346422390934794 - 7943346422390934776)))))) : var_16));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((((arr_1 [i_0 + 1] [i_0]) == -7943346422390934786)) ? ((((((-(arr_3 [i_0]))) + 2147483647)) << (var_16 - 14357515196369553333))) : 3))));
                var_20 = 2272;
            }
        }
    }
    var_21 = ((-20294 ? 9045925856828650711 : 20298));
    #pragma endscop
}
