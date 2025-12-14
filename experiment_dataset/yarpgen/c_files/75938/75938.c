/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    var_19 = var_17;
    var_20 -= ((!((min((min(var_9, var_1)), var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [1] [i_1 + 1] [i_1] [1] = var_0;
                    var_21 = -1;

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_22 = (((((((min(3008391994, var_10))) ? (arr_5 [i_0 - 1] [i_1 + 1] [6]) : var_3))) ? (min(1, (max(16479850278636301395, 1)))) : 1));

                        for (int i_4 = 2; i_4 < 11;i_4 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [0] = (((min(10738454990017715840, ((min(0, (-2147483647 - 1)))))) << (((((arr_8 [i_0] [i_0] [6]) ? ((~(arr_12 [i_0 + 1] [i_1 + 4]))) : (var_9 / 1))) + 52))));
                            arr_17 [i_2] [1] [i_2] [i_1 - 1] [i_0] = ((((((((arr_2 [i_0 + 1]) ? var_0 : 1665607820)) != 95))) ^ (((!(((-1665607812 ? 49575 : var_10))))))));
                        }
                        for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            arr_20 [11] [i_3 + 1] [i_1 - 4] [i_1 - 4] [9] [i_0] [i_0] = (((((~((1 ? 59107 : (arr_19 [i_3])))))) ? (max(474056020, -var_12)) : (!17078025939273213703)));
                            var_23 = var_5;
                            arr_21 [i_3] [i_5] |= ((((!(arr_13 [i_0] [i_1 - 3] [i_1 - 3] [i_3 + 1] [i_5]))) ? -1665607820 : (1 >= 1381350001)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
