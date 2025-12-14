/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (((((!(arr_0 [i_1 + 4])))) | ((min((arr_0 [i_1 + 1]), (arr_0 [i_1 + 4]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 11;i_4 += 1)
                            {
                                var_11 ^= (max(0, 72));
                                arr_14 [i_1] = ((-(max((arr_1 [7]), (arr_11 [i_4 - 1] [i_1 + 1])))));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_12 ^= (((((190 + var_8) - 0)) - ((((((6 ? 2147483647 : 1016))) ? 1 : var_10)))));
                                arr_17 [i_0] [2] [i_0] [2] [2] = (max(3019182125271695648, 1));
                            }
                            var_13 ^= ((!(arr_0 [i_2])));
                        }
                    }
                }
            }
        }
    }
    var_14 |= 1012;
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 8;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                arr_25 [i_7] = (~-1009);
                arr_26 [i_6 - 2] [i_6 - 2] [i_7] = ((~(arr_6 [i_6 - 2] [i_7])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                {
                    var_15 &= ((((max(var_0, 143))) * (max(4294967267, 1844183190))));
                    var_16 = ((1 ? (arr_29 [1]) : (~-6939859405035274345)));
                }
            }
        }
    }
    #pragma endscop
}
