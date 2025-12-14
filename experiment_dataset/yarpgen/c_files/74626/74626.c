/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_17 = 32253;
                            arr_13 [i_1] = (~-28546);
                        }
                    }
                }
                arr_14 [i_1] = (!1048575);
            }
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 13;i_7 += 1)
                    {
                        {
                            arr_22 [i_6] [i_1] [i_6] [i_6 - 2] [i_6] [i_6] = -1;
                            var_18 = 127;
                            arr_23 [i_5] [i_5] [i_6] [i_6] [2] [4] [i_1] = 0;
                            arr_24 [i_5] [i_6] [i_0] [i_5] [i_6] [i_0] &= 0;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 15;i_9 += 1)
                {
                    {
                        arr_30 [i_1] [i_1] [i_8] [5] [2] [i_1] = ((11800 ? (72386086924810003 != 1255112886) : 2399));
                        arr_31 [i_1] [i_8] [i_1] [i_1] = ((0 ? -1289073877 : 2426271380028838761));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 14;i_12 += 1)
                {
                    {
                        arr_38 [i_12] = 2815529336750621021;
                        arr_39 [i_0] [10] [12] [i_0] = ((-1 ? 18446744073709551615 : 0));
                    }
                }
            }
        }
        arr_40 [i_0] = 1;
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 1;i_13 += 1)
    {
        arr_44 [i_13 - 1] = (3916778247 > 2949670211068022958);
        var_19 = ((48 << (51154 - 51145)));
    }
    var_20 = (min((max(((max(79, 65535))), ((234 ? 1 : 1)))), var_4));
    #pragma endscop
}
