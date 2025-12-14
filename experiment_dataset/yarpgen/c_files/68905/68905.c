/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [15] [i_1] [11] = ((3261857552 < (((8139227199666977577 <= 0) / 18446726481523507200))));
                            arr_14 [i_1] = (min(32747, (max(1033109743, 0))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_20 *= var_6;
                                var_21 = (max(1033109770, 1));
                                var_22 = (max(var_22, ((min((((!0) ? 2305843009213693952 : 1033109744)), (max(125, 7)))))));
                                var_23 = 0;
                                arr_24 [4] [5] [i_4] [i_1] = (max(3261857552, (1 <= 205762544638559516)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 7;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_24 = (min(125, var_3));
                            var_25 = (max(1, 125));
                        }
                    }
                }
                var_26 = (min(var_26, 0));
                var_27 = (max(1, 6137964619341387040));
            }
        }
    }
    #pragma endscop
}
