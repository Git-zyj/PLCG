/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (((((var_6 ? -157250622 : var_2)))) ? var_0 : (min(var_8, var_0)));
    var_12 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2 + 2] [i_2] [i_2 + 2] = (((max((arr_1 [i_2]), (((arr_4 [i_0] [i_2]) ? (arr_3 [i_0 - 1]) : (arr_1 [i_1])))))) ? 2305843009205305344 : var_5);
                    var_13 = (min(((max((arr_3 [i_2]), (arr_5 [i_2] [i_2] [i_2] [i_2])))), (~13642338513379890207)));
                }
            }
        }
    }
    var_14 = ((var_2 ? (!4804405560329661433) : ((var_10 ? 5577119946563969176 : var_4))));
    #pragma endscop
}
