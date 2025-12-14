/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 &= 1099066473;
                    var_14 = -120;
                    var_15 = 999;
                    arr_9 [i_1] [i_1] [i_1] = 2540316051258265861;
                    var_16 -= 127;
                }
            }
        }
    }
    var_17 = -115;
    var_18 = 8485489213782843553;
    var_19 |= -4922737939998965969;
    var_20 = (min(var_20, -3387883377357591270));
    #pragma endscop
}
