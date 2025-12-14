/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 230593931;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_1 [i_0 + 1] [i_0 + 1]);
        var_17 = 1;
        arr_5 [11] [i_0] = (arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = -230593932;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_19 ^= (arr_11 [7] [13] [7] [13]);
                        var_20 = (arr_1 [i_0] [9]);
                        var_21 ^= (arr_2 [i_1 + 1]);
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_16 [i_0] [i_1 + 3] [i_0] = -230593932;

                        for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_0] = var_2;
                            var_22 &= (arr_13 [i_0] [i_1] [i_0] [i_4]);
                            var_23 ^= (arr_6 [i_2]);
                            var_24 += -787782886;
                        }
                        for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_25 = 5775297303152910492;
                            arr_23 [7] [i_1] [i_0] [i_0] [i_6] = (arr_8 [i_0] [i_0]);
                            var_26 ^= var_4;
                        }
                        arr_24 [i_0] = var_4;
                    }
                    var_27 = 44;

                    for (int i_7 = 4; i_7 < 13;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            arr_33 [i_0] [7] [8] [i_2] [6] [i_0] = (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]);
                            arr_34 [i_0] [i_0] [i_0] = var_12;
                        }
                        var_28 = var_8;
                        var_29 = 230593932;
                    }
                    for (int i_9 = 4; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        arr_38 [i_0] [i_9] [i_0] [0] [i_0] = 212;

                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_30 = (min(var_30, (arr_32 [i_0] [4] [i_2] [i_10])));
                            var_31 ^= 10385949058971570235;
                            var_32 += 230593930;
                            arr_41 [i_2] [i_1] [i_1] [i_9] [i_10] [i_0] = -89;
                            var_33 = 1878901889;
                        }

                        for (int i_11 = 1; i_11 < 11;i_11 += 1)
                        {
                            arr_44 [i_11] [i_0] [i_2 - 2] [i_0] [i_0] = (arr_35 [11] [i_0] [i_0] [i_0]);
                            var_34 *= 12671446770556641123;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
