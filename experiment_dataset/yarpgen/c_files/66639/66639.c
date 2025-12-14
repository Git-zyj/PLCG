/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 *= (arr_10 [i_0]);
                    arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] = (!((min((arr_0 [i_1 - 2]), (arr_0 [i_2])))));
                }
            }
        }
    }

    for (int i_3 = 3; i_3 < 22;i_3 += 1)
    {
        arr_16 [i_3] = ((+(((arr_12 [i_3 + 1]) - 7697902198965437108))));
        arr_17 [i_3 - 3] = arr_12 [i_3 - 3];
        arr_18 [i_3] = ((8 != (((arr_13 [i_3 - 2] [i_3 + 1]) % (arr_14 [i_3])))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 3; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        {
                            arr_27 [i_5] [i_5] = 22193;
                            arr_28 [i_5] [i_7] [i_7] [i_7] [i_7] = (((arr_13 [i_4] [i_3 - 3]) && 32767));
                        }
                    }
                }
            }
            arr_29 [i_3] [1] [i_3] = ((10748841874744114508 ? 0 : 1));
            var_15 -= (((arr_15 [i_4]) && (23306 && 25842)));
            var_16 -= ((((25826 <= (arr_21 [i_4]))) || -22208));
            arr_30 [i_3] [i_4] = ((-((0 ? 5952 : 7292016878829552473))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 20;i_11 += 1)
                    {
                        {
                            var_17 = (max(var_17, ((((arr_33 [i_3] [i_3]) | ((-(arr_34 [16] [16]))))))));
                            arr_43 [i_3 + 1] [i_8] [i_9] [i_8] [i_8] [8] [i_3 + 1] = ((-5 ? (arr_22 [i_8]) : 19349));
                        }
                    }
                }
            }
            arr_44 [i_8] [i_8] [i_8] = ((32761 ? (arr_22 [i_8]) : ((60961 ? 1 : 1))));
        }
        arr_45 [i_3] = (min(((((arr_12 [i_3]) >= (((arr_36 [i_3 - 2] [i_3] [i_3 - 2]) ? (arr_12 [i_3]) : (arr_14 [i_3])))))), 34));
    }
    var_18 = (min(((min((1 >= 8216726319301150066), (1 && var_2)))), 62734));
    var_19 = ((((min(var_11, 21185))) ? (((-127 - 1) ? 8 : -31474)) : var_12));
    #pragma endscop
}
