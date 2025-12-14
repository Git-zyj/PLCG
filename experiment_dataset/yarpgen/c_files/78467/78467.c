/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((var_3 ? (((~var_2) ? (max(var_3, var_18)) : var_13)) : ((-(max(var_16, var_18))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_20 = (3621044708 - var_4);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [1] [i_0] [i_0] = 458784014;
                        arr_10 [14] [i_0] = var_1;
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
        {
            arr_15 [i_0 - 1] [i_0] [7] = ((3621044702 ? 4932348387373258324 : 1023));

            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                arr_19 [i_0] [i_0] [i_0] [i_0] = ((var_18 ? 249 : -1024));
                var_21 ^= ((0 ? 1019164782954349181 : 32767));
            }
            var_22 = (!var_11);
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
        {
            var_23 -= (!var_6);
            arr_22 [i_0] [i_0] [i_6] = var_16;

            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                arr_26 [i_0] = ((-((var_8 ? 13541 : 4932348387373258324))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 0;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_24 ^= var_3;
                            arr_35 [i_0] [i_0] [i_0] [3] [i_0] [i_0] [3] = ((var_1 <= ((97 ? 4932348387373258324 : 2279911981446213217))));
                            arr_36 [4] [12] [4] [i_0] = var_7;
                            var_25 = 2529884074242951362;
                        }
                    }
                }
                var_26 = 1;
            }
        }
        var_27 = (329800006 < 7468711951725981291);
    }
    for (int i_10 = 1; i_10 < 6;i_10 += 1)
    {
        arr_40 [i_10] = 1430199863;
        arr_41 [i_10] [i_10] = (~-1024);
    }
    var_28 = (((((var_12 ? 22979 : var_5)) | var_6)) + ((2529884074242951352 | (max(var_12, var_18)))));
    #pragma endscop
}
