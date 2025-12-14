/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (!0);
                    arr_9 [i_0] [i_1] = var_9;
                    arr_10 [i_0] [i_1] [i_0] [0] |= (((max((-8 / 1512957983778235526), (((arr_0 [6]) + (arr_2 [i_0] [i_2]))))) + (-67981982 - -59)));
                }
            }
        }
    }
    var_20 = (((((!var_15) ? var_18 : (max(8170393259806500570, var_9))))) ? var_4 : var_13);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_22 [i_3] [i_5] [i_6] = max(62, 230);
                            arr_23 [5] [i_4] [11] [11] [i_3] [i_6 - 3] = (((!-8170393259806500571) ? 49 : (((-2147483647 - 1) ? 16933786089931316096 : (arr_17 [i_3] [i_4 + 1] [i_3])))));
                        }
                    }
                }
                var_21 = ((((((arr_12 [i_3]) ? 2 : var_17))) ? ((min(-8170393259806500570, -50))) : (16933786089931316089 - 3995104407)));
                var_22 = ((((var_11 ? (arr_17 [i_4] [i_4] [i_3]) : var_18)) + var_15));
            }
        }
    }
    var_23 = (~var_12);
    var_24 = (max((!var_18), 1512957983778235529));
    #pragma endscop
}
