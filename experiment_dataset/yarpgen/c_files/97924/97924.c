/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] = (min(0, (!32768)));
                            var_10 = (max(var_10, ((((!3651336049) + (min(var_1, var_7)))))));
                            var_11 = (((!var_3) * (((!(((var_2 ? var_8 : var_7))))))));
                            var_12 *= var_9;
                        }
                    }
                }
                var_13 = (min(var_13, (((((!(((32763 ? 32768 : 1))))) && (((max(57344, 32791)))))))));
                var_14 = (min(var_14, ((min(1, 96505554)))));
                arr_11 [i_0] [i_0] = var_8;
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_15 -= (((32791 ? 32787 : 32796)));
                                var_16 += (!4348516354866976652);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            {
                var_17 = (max(var_17, (((var_7 ? (!var_5) : 1)))));
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 16;i_11 += 1)
                        {
                            {
                                arr_31 [i_7] [i_7] [i_7] = (((((var_8 ? var_9 : var_8))) ? (1 < 1681445572) : (min(var_0, var_9))));
                                arr_32 [i_7] [i_8] [i_7] [i_10] [i_11] = max(32768, 0);
                            }
                        }
                    }
                }
                arr_33 [i_7] = (((((-var_7 ? (min(var_7, var_3)) : var_1))) ? var_9 : (max(4198461742, var_8))));
            }
        }
    }
    #pragma endscop
}
