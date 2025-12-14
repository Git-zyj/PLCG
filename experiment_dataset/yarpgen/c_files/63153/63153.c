/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -13558;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = ((~(!-13616)));
                    arr_7 [8] [i_1] [i_1] [i_2] = 18446744073709551610;
                    var_16 = (min(var_4, (arr_0 [i_0])));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        arr_10 [i_3] = 1;
        var_17 = 74;
        var_18 = (min(var_18, (((-(((!((min(8, 3870743480)))))))))));
    }
    #pragma endscop
}
