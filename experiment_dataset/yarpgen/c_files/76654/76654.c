/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [12] = (4294967278 / 8554209750332020935);
        arr_3 [i_0] = (max((3203096415117180751 ^ 18243), 295976134));
        arr_4 [i_0] = (min(2065432550, 150915998));
    }
    var_19 = var_4;

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_8 [i_1] = 16;
        arr_9 [i_1] = 16483001567704034220;
        arr_10 [14] = (((min((-150915987 % 1698264807), 1)) >= -17));
        arr_11 [i_1] [i_1] = ((-(~16714151151006169529)));
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_26 [i_3] = (-(min(1698264830, 49483)));
                                arr_27 [i_3] [i_5] [i_4] [i_3] [i_3] = ((min(1732592922703382087, 2596702482)));
                            }
                        }
                    }
                }
                arr_28 [i_2 + 1] [i_2 + 1] [i_3] = max((min((12160 && 16714151151006169529), 68719214592)), 1451006816);
                arr_29 [6] [6] = ((-((3998991162 / (2740619823 / 104)))));
                arr_30 [i_2] [i_2] [i_3] = ((((16672347971776864067 <= 2596702472) >> (65535 >= 9783424537952354368))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            {
                arr_35 [i_7] = (!-1360760359);
                arr_36 [i_8] = (-2104259647 - 64240);
            }
        }
    }
    #pragma endscop
}
