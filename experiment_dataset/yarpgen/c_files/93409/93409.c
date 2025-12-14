/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= 1299842740;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((((((-(arr_0 [i_0 - 2])))) ? ((((max(-97, 14109094103850776929)) >= (arr_3 [i_1] [1] [i_0])))) : (((((arr_2 [i_0 + 1]) ? var_3 : var_8)) - ((min((arr_3 [i_0] [i_0] [10]), (arr_3 [i_0] [i_1] [i_1])))))))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_13 = (arr_8 [12] [i_1] [0] [6]);
                            var_14 = (min(var_14, (((0 ? (((arr_5 [i_2] [2] [2] [i_1]) ? (((var_0 << (((arr_4 [i_0] [i_1] [i_3]) - 1254996724429751561))))) : (arr_4 [i_3 - 1] [i_2] [i_1 - 3]))) : (arr_1 [i_2]))))));
                            arr_10 [i_0] [i_1] [i_2] [i_1] = (((((7400741144810032724 ? (!var_3) : (arr_1 [i_1])))) - ((4337649969858774686 >> ((((65520 ? (arr_5 [i_1] [9] [i_2] [i_3]) : 1024)) - 123))))));
                        }
                    }
                }
                arr_11 [3] [i_1] [i_1] = (arr_1 [9]);
            }
        }
    }
    var_15 = (-1006 - 255);

    for (int i_4 = 3; i_4 < 17;i_4 += 1)
    {
        var_16 = (min(var_16, ((min(33, 4337649969858774662)))));
        arr_16 [4] |= 4659714821619423955;
    }
    #pragma endscop
}
