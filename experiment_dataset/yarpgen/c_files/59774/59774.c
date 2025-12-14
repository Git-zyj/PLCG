/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = 4782772268655781118;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_11 -= (max(1, (((1781477949 ? 1 : -15709)))));
                            var_12 -= 1781477949;
                            var_13 = ((!((((var_1 / var_1) ? (((min(var_6, var_7)))) : var_5)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_14 = 15708;
                            arr_20 [i_4] [2] [i_0] [i_5] = var_9;
                            var_15 -= ((((var_1 ? ((4782772268655781125 ? var_5 : 1)) : 1006029605))) ? ((((!((min(6899260700887058, var_2))))))) : (~var_5));
                        }
                    }
                }
            }
        }
    }
    var_16 -= var_1;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            {
                arr_25 [i_6] [0] = ((-(max(((min(-32761, 1))), 6499823636337663168))));
                var_17 = -13663971805053770500;
            }
        }
    }
    #pragma endscop
}
