/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_9;
    var_18 = ((var_14 ? var_12 : var_12));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_3] = (max((arr_0 [i_0]), (arr_8 [i_3 + 4] [i_3] [i_0 - 1])));
                        var_19 |= (((((arr_3 [i_0] [i_0]) ? 1767203358 : 4294967295))) ? var_7 : (((arr_1 [i_0 + 1]) ? (arr_6 [i_0 - 1] [i_1] [i_0] [i_3 - 2]) : -var_2)));
                        var_20 = (max(var_20, -1767203361));
                        var_21 = ((arr_9 [i_1] [i_1] [i_2 - 3] [i_0 + 3] [i_3]) > -1767203374);
                    }
                }
            }
        }
        var_22 &= (((((max(1767203358, -7650531609797138252)))) ? (max((~-1767203376), 14050)) : -14051));
        arr_11 [i_0] [i_0 + 3] = (var_12 / 1767203345);
    }
    #pragma endscop
}
