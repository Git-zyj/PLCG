/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 = 255;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_13 [i_1] [i_1] [i_1] = (((((255 >= (arr_11 [i_0] [i_1] [i_0])))) < 7));
                        arr_14 [13] [i_3] [i_2] [10] [i_1] = -27927;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_21 [i_0] [i_2] = (arr_8 [i_1] [i_4] [i_5]);
                                arr_22 [i_5] [i_4] [i_1] [i_1] [i_0] = 0;
                                arr_23 [1] [i_4] [i_1] [i_2] [i_1] [i_1] [6] = arr_6 [i_2];
                            }
                        }
                    }
                    arr_24 [i_1] [i_1] [i_1] = 14644634481277234176;
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_30 [i_0] [i_1] [i_0] [i_6] [i_7] &= 0;
                                arr_31 [i_1] = (arr_4 [i_0] [i_1] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = 248;
    /* LoopNest 2 */
    for (int i_8 = 3; i_8 < 20;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            {
                arr_37 [i_8] [i_8] [6] = arr_34 [i_8];

                for (int i_10 = 1; i_10 < 19;i_10 += 1)
                {
                    arr_41 [i_8] [i_8] = (arr_38 [i_8 - 3]);

                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        arr_44 [i_8] [9] = (2039221649 || 1);
                        arr_45 [i_8] [i_11] = 0;
                        arr_46 [i_8] [i_8] = (arr_32 [i_8]);
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                arr_51 [i_8] [11] [7] [5] [i_8] = (arr_33 [19] [i_10]);
                                arr_52 [i_8] [1] [i_10] [i_12] [i_8] = ((3802109592432317440 >> (65181 / 4515992126012637668)));
                                arr_53 [i_13] [i_8] [17] [i_8] [i_8] = -15777;
                            }
                        }
                    }
                    arr_54 [i_8] = (1 && 47);
                }
                arr_55 [i_9] [i_9] [i_8] = 255;
            }
        }
    }
    #pragma endscop
}
