/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~58966870267276693);
    var_11 += var_6;

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_12 = ((((((arr_1 [i_0 - 1] [i_0 - 2]) ? var_6 : (arr_1 [4] [i_0 - 3])))) ? var_3 : (min(var_3, var_2))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 += (((~36873) ? var_8 : (((((var_0 ? -70 : var_8))) ? 9092106409620785114 : 28644))));
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_14 += (arr_0 [i_0 - 4]);
                            var_15 = (max((102 || 1), 4398));
                            arr_10 [i_3] [1] [12] [i_2] [i_2] = (((arr_1 [i_0] [i_1]) ? ((max(((min((arr_7 [i_2] [i_3] [i_2] [i_1] [i_0] [i_2]), (arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_2] [i_2] [i_2])))), (106 - var_6)))) : ((var_1 ? 9092106409620785104 : (((max((arr_8 [i_1] [i_2] [i_1]), (arr_8 [12] [4] [i_3 - 4])))))))));
                            arr_11 [i_4 + 1] [i_2] [i_2 - 2] [i_2] [i_0 - 3] = ((((((arr_0 [i_0 - 2]) ^ 9092106409620785127))) ? (max(((var_9 ? 1 : -6886825444307402916)), var_2)) : 1));
                            arr_12 [i_2] [i_1] [i_2] [i_3] [i_4 + 2] = 36867;
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    {
                        var_16 += ((0 ? ((9092106409620785109 << (4294967295 - 4294967295))) : (!var_5)));
                        arr_20 [i_0] = ((29 ? 25 : -84));
                        var_17 = (max(var_17, -15501));
                    }
                }
            }
            var_18 = (max(var_18, 110));
        }
        var_19 = arr_14 [i_0 - 2] [i_0];
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                {
                    var_20 &= var_1;
                    var_21 = -6177368354505021202;
                    var_22 = (min(var_22, (((!(((-((48 ? (arr_25 [i_8]) : 2513359013))))))))));
                }
            }
        }
        var_23 -= var_3;
    }
    var_24 = ((61133 ? 3190796589563979227 : 3172719670314689403));
    #pragma endscop
}
