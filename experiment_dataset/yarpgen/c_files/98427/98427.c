/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((8061 - (4294967281 > 1)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 + 3] = ((((!((max((arr_4 [i_0] [i_1 - 2] [i_1 + 1]), (arr_3 [i_0 - 1])))))) ? (arr_0 [i_0] [i_1]) : var_13));
                arr_6 [i_0] [i_0 + 2] [i_0] = ((+(max((min((arr_3 [i_0]), var_9)), ((var_13 ? var_12 : 8056))))));
            }
        }
    }
    var_17 = (~var_14);
    #pragma endscop
}
