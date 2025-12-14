/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_11 ? var_11 : var_5)) * (((!(((-99 ? 103 : -99))))))));
    var_16 = (((((15497 % ((min(1, 36191)))))) ? var_6 : var_7));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0 + 1] [i_1] = var_14;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_17 -= ((((((min(1, var_7))))) ? (((8039088912663243553 ? (arr_4 [i_0 - 1] [i_0 - 1]) : var_11))) : (min(-99, -8039088912663243570))));
                            var_18 = var_8;
                        }
                    }
                }
                arr_13 [i_0 - 1] [i_0 - 1] [i_1] = (((min(4389, 64))));
                var_19 -= (min((63791 * -91), (2845916561387405227 || 5871838855524928623)));
            }
        }
    }
    #pragma endscop
}
