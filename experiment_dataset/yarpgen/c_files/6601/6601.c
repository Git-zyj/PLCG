/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (((((1213217738 ? (var_4 < 3081749539) : ((45827 ? 51 : 14485765408222558090)))) ^ (((((arr_3 [i_0] [i_0]) | var_6)))))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_16 = ((((32744 ? (arr_2 [i_1 - 2] [i_2]) : 3081749558))) ? ((((arr_2 [i_1 - 3] [i_1 - 3]) >= var_9))) : (arr_2 [i_1 - 3] [i_2]));
                            var_17 = ((((min(1213217719, (arr_0 [i_3 + 1] [i_2 - 3])))) ? (((arr_0 [i_3 - 2] [i_2 + 1]) ? (arr_0 [i_3 - 2] [i_2 - 2]) : (arr_1 [i_1 + 2]))) : (arr_0 [i_3 + 1] [i_2 - 2])));
                            var_18 = (max((((~(arr_4 [i_2] [i_1] [i_0])))), (min((min(3533589330, 5859450719940745909)), 1))));
                        }
                    }
                }
            }
        }
    }
    var_19 = (~var_9);

    for (int i_4 = 4; i_4 < 11;i_4 += 1)
    {
        var_20 = (((((var_8 ? 1213217743 : ((var_4 ? -6858 : 1213217732))))) ? ((var_11 ? 62 : (arr_11 [i_4] [i_4 + 2]))) : (((((((arr_2 [i_4] [i_4]) ? var_12 : 1213217732))) ? 3081749545 : (arr_10 [i_4]))))));
        var_21 = 1213217737;
        var_22 = (max(var_22, (((max(((((arr_4 [i_4] [i_4] [2]) >= 3081749533))), 3111896590))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_23 |= (var_12 > 18446744073709551613);
        var_24 = (max((((((arr_7 [i_5] [i_5] [i_5]) ? (arr_4 [i_5] [1] [i_5]) : 3081749558)))), (((arr_0 [i_5] [i_5]) ? -1732849805 : (arr_12 [i_5] [i_5])))));
    }
    #pragma endscop
}
