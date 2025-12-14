/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 61;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            arr_4 [i_0] [i_1 - 2] = 0;
            arr_5 [i_0] [15] [10] = (((arr_3 [i_1 + 1]) ? (arr_0 [i_1 - 1]) : -18));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_2] = (((arr_2 [i_0]) ? (7 != 4) : ((32742 ? (arr_0 [i_0]) : var_2))));
            arr_9 [i_2] [11] = (11639480934789858993 >= -35);
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] = ((72 != (arr_6 [i_0] [i_2])));
                            arr_18 [i_0] [i_0] [i_3 + 1] [i_4] [i_2] = (((arr_0 [i_3 + 1]) ? (arr_0 [i_3 + 1]) : (arr_0 [i_3 + 1])));
                            arr_19 [i_0] [i_0] [i_2] = 1;
                            arr_20 [2] [i_2] = (((var_4 + 2147483647) << (((arr_3 [i_0]) - 100))));
                        }
                    }
                }
            }
            arr_21 [i_2] [i_2] [i_0] = (var_5 ? (35512 ^ 24) : ((15512 ? var_0 : 978689148)));
        }
        arr_22 [i_0] [i_0] = ((-32762 ? 479524598728498997 : 26140));
        arr_23 [i_0] [i_0] = -30474;
        arr_24 [i_0] = -9161;
    }
    #pragma endscop
}
