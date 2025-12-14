/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [3] = (max((max(((max(var_12, var_6))), (max(-6345655348474756288, 8)))), ((max(var_6, -var_10)))));
        arr_3 [i_0] = var_7;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_9;

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_9 [i_1] = ((max(var_8, var_2)));

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_17 [i_1] [6] [i_2] [i_2] [15] [i_1] [i_5] = (max((((!((max(var_10, var_8)))))), (max(2291, 4294967295))));
                            var_15 = (min(var_15, ((min((((max(var_9, var_10)))), (min(var_11, -2291)))))));
                        }
                    }
                }
                arr_18 [i_1] [i_1] [i_1] = (min(((min(var_7, var_5))), (min((max(var_6, 6345655348474756291)), ((max(63238, 65534)))))));
            }
            var_16 += 62;
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            var_17 |= 51452;
            var_18 = (max(var_18, var_11));
        }
        for (int i_7 = 3; i_7 < 17;i_7 += 1)
        {
            var_19 &= min((min(var_14, (min(3599416426, 4294967290)))), (((~(!var_12)))));
            var_20 = (max(var_20, ((max((((!((max(var_14, var_5)))))), (max((max(7510985430987407957, -19)), var_13)))))));
            arr_26 [i_1] = ((-(max((min(var_14, -6311616731495039539)), 0))));
        }
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            var_21 = (min(var_21, ((max((min(3442698092111844064, 4294967272)), (((!(~var_12)))))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    {
                        arr_36 [i_8] [i_1] [i_1] [i_1] = (max((~4294967267), var_0));
                        arr_37 [i_1] [i_1] [i_9] [i_1] = 2999682613;
                        var_22 = (min(var_7, -658542475));
                    }
                }
            }
            arr_38 [i_1] = (max((((~((max(var_2, var_14)))))), (max(var_11, ((max(var_3, var_4)))))));
        }
    }
    var_23 = var_13;
    #pragma endscop
}
