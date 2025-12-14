/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (max(0, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = 4;
                arr_6 [i_0] [i_0] [i_0] = min(158, (16 >= 3272924496));
                var_15 -= ((~(((!(arr_4 [i_0] [i_1]))))));
                var_16 -= (((arr_0 [i_1]) ? ((229 ? (((min(var_8, 11836)))) : (max(0, -5715167030674483660)))) : (~-175723097)));
            }
        }
    }
    var_17 ^= var_4;
    var_18 -= (((((max(var_0, var_10)))) ? var_11 : (((4247146395476882716 >= 13) - -1318146401))));
    #pragma endscop
}
