/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(111, -67108863));
    var_17 = (max(var_0, ((((1 ^ -95) && (4398038122496 || 0))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (~-71);
                arr_6 [i_1] = (((((var_4 | ((max(16279, 35386)))))) ? (-73 - 8042866338295529757) : var_2));
                arr_7 [i_0 + 1] [i_1] = (~var_14);
                var_18 = ((((13857066574260230745 << (((var_4 + 114) - 20)))) == ((min((arr_1 [i_0 + 3]), 1)))));
                var_19 = (max(var_19, (1 << 1)));
            }
        }
    }
    var_20 = (max(var_20, 1));
    #pragma endscop
}
