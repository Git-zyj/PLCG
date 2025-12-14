/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    var_20 = (-2147483647 - 1);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = 9223372036854775807;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_22 = (--1136155488);
                                arr_11 [i_4] [i_3 - 2] [i_2] [13] [i_0] = ((+((((((((arr_0 [i_0 + 2]) && 8797267320588316957)))) <= ((~(arr_9 [i_3] [i_1 - 1] [i_2]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [9] [i_0] [i_0] = -1;
                                arr_17 [i_0 + 2] [i_1 - 2] [i_2] [1] = ((~((~(~-1475432002003518097)))));
                                var_23 &= (((arr_1 [12]) ? (((arr_7 [i_0 + 2] [i_1] [i_2]) << (1011786829 - 1011786829))) : (((var_9 ? (arr_6 [i_1] [i_0]) : -2147483624)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
