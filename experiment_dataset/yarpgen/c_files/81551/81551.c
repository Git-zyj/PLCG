/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = ((-(max(((min(2140268313, (arr_4 [i_1] [i_2 - 1])))), 6501583687538410402))));
                                var_21 ^= (!18446744073709551609);
                                var_22 = (max(var_22, (min((min((arr_13 [i_0 - 1] [12] [i_2 - 1] [4] [6] [2]), (var_7 - var_4))), (((((2616777406 ? 6904625458327973196 : (arr_11 [i_0] [i_0] [16])))) ? ((-5771940013953799862 ? 1 : 1)) : (1 >= 2616777380)))))));
                            }
                        }
                    }
                }
                var_23 ^= ((1 ? 12514193018105703544 : (((5638992937609088413 & (arr_1 [i_1] [i_1]))))));
                var_24 = ((-((-(arr_0 [i_0])))));
                var_25 += (((-2147483647 - 1) ? 17931767904947659133 : 2616777386));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_26 = -514976168761892469;
                var_27 = (arr_15 [23]);
            }
        }
    }
    var_28 = (((((((var_15 ? var_15 : var_0)) << ((min(var_8, 1)))))) || (((-63 ? var_10 : (6501583687538410390 * var_1))))));
    var_29 -= (min((max(-325435713321100795, 1)), 17931767904947659163));
    #pragma endscop
}
