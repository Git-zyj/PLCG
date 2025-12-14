/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = 2147483647;
                                arr_11 [i_0] [i_2] [0] [i_2] = var_7;
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] = 1334822321;
                                var_15 = (max(var_15, ((min((min(var_3, (min(4294967295, 255)))), var_4)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_2] [0] [i_2] = 1660288956;
                                arr_19 [i_0] [i_1] [i_2] [i_5] [11] = ((((min(4294967295, 1334822321))) || -14));
                            }
                        }
                    }
                    arr_20 [10] = (min((((2147483647 >= 13) ? (907426972 * var_9) : (max(169207581, -1660288956)))), (max(((min(7, -24))), 2656906648))));
                    var_16 = (max(var_16, ((min((-1334822321 / 157), ((3155174612 ? 1334822321 : var_7)))))));
                }
            }
        }
    }
    #pragma endscop
}
