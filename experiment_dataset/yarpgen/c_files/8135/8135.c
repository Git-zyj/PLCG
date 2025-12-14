/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_13 += ((-(((arr_1 [i_2]) | (arr_1 [i_2])))));
                            arr_13 [i_0] [6] [i_1] [i_0] = var_0;
                            var_14 = (arr_7 [i_0]);
                            var_15 = var_3;
                        }
                    }
                }
                arr_14 [i_0] [i_0] = ((((((max((arr_6 [i_0] [i_1]), 11393))) ? (((11393 ? 86 : 97))) : (min(-3475850077122779457, (arr_3 [i_0 - 2] [i_1]))))) & 255));
                var_16 = (max(54142, 6077033273632278250));
            }
        }
    }
    var_17 = ((!((!(-10 ^ 0)))));
    var_18 = (max((-1729224092 * 0), ((((var_7 ? 15370548348745582952 : 1415996546698145714)) / var_11))));
    var_19 -= (((!31) ? ((~(var_10 & var_2))) : (!var_2)));
    #pragma endscop
}
