/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 -= (min(((!((((arr_2 [i_0] [i_1] [i_0]) ? var_4 : var_1))))), (((arr_2 [i_0] [i_0] [0]) != ((min(var_11, (arr_0 [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, ((-(min(1, -2624489666714563558))))));
                            var_17 = (1 == (max(4294967285, (((4194303 ? 1 : 9))))));
                            var_18 = ((~(((var_4 ? var_7 : var_11)))));
                            arr_11 [i_1] [i_1] = (((arr_0 [i_0]) - ((var_9 & (arr_3 [i_2])))));
                        }
                    }
                }
                arr_12 [i_0] [i_0] [i_0] = -1;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_19 ^= (arr_17 [i_4]);
                                arr_27 [i_4 - 2] [i_5] [i_6] [i_7] = ((+((min((121 == 315957601711743496), (min((arr_0 [i_4 - 1]), (arr_26 [i_4] [i_5] [i_5] [1] [i_7 + 1] [i_8]))))))));
                                arr_28 [i_4 + 1] [i_4 + 1] [i_6 + 2] [i_7] [i_8] [i_6] [i_4] = (!var_12);
                                arr_29 [13] [i_5] [1] [i_7] [6] = var_12;
                            }
                        }
                    }
                }
                var_20 = (max((((arr_25 [i_4 - 2] [i_4 - 3] [i_4] [i_4 - 2] [i_4]) | (arr_8 [i_4 + 1] [i_4 - 3]))), (~11627)));
            }
        }
    }
    #pragma endscop
}
