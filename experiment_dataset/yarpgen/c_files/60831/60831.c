/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_20 = ((((((arr_1 [i_0]) ? -1891847925 : (arr_1 [i_0])))) ? (((min((arr_1 [i_0]), (arr_1 [i_0]))))) : (arr_0 [i_0])));
        var_21 *= (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_22 = ((((((arr_1 [i_1]) ? 1 : (arr_3 [i_1] [i_1])))) ? ((max(53071, (arr_3 [i_1] [i_1])))) : (((arr_3 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_3 [3] [i_1])))));
        arr_4 [i_1] [i_1] = (max((max((arr_1 [i_1]), (arr_0 [i_1]))), 478416101));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                arr_12 [i_3] = ((((((arr_6 [i_2] [i_3]) ? (arr_6 [i_2] [i_2]) : (arr_6 [i_3] [i_3])))) ? (((arr_7 [i_2]) ? 2833319362336194264 : ((((arr_8 [i_2] [i_2]) ? 1 : (arr_8 [i_2] [i_3])))))) : ((((arr_10 [i_2] [i_3] [i_2]) ? (arr_8 [i_2] [i_3]) : (arr_5 [2]))))));
                arr_13 [i_2] [3] [7] = (min(((((min(24063, -1265761817))) ? (arr_6 [i_3] [i_2]) : 478416100)), (((1265761817 ? 478416101 : 1)))));
                var_23 = ((((min((arr_8 [i_2] [i_3]), (arr_10 [i_2] [i_3] [i_2])))) ? ((min((arr_11 [i_2] [i_2]), (arr_11 [3] [3])))) : (((arr_9 [i_2]) ? (arr_11 [i_2] [i_3]) : (arr_11 [i_2] [i_3])))));

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_24 -= max((arr_5 [i_2]), 125);
                    var_25 = (max(var_25, (((((((arr_6 [i_4] [8]) ? (arr_6 [i_2] [i_3]) : 3123519089))) ? (arr_6 [i_2] [i_3]) : (min((arr_6 [i_2] [i_2]), (arr_6 [i_3] [i_4]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_26 &= (((arr_18 [0] [6] [i_5 + 1] [2] [i_5] [i_5] [i_5]) ? (((arr_17 [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]) ? (arr_17 [i_5 + 1] [i_5 + 1] [i_5 + 1] [9] [9]) : (arr_17 [i_5 + 1] [i_5] [i_5 + 1] [i_5] [i_5]))) : (((arr_17 [i_5] [i_5] [i_5 + 1] [i_5] [i_5]) ? (arr_17 [i_5] [i_5 + 1] [i_5 + 1] [i_5] [i_5]) : (arr_17 [3] [i_5] [i_5 + 1] [i_5] [i_5])))));
                                arr_20 [i_2] [1] [i_4] [i_4] [i_6] = arr_19 [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1] [i_5] [i_5];
                                arr_21 [6] [6] |= (arr_11 [i_2] [i_5 + 1]);
                                var_27 = (arr_6 [i_2] [i_4]);
                                arr_22 [6] &= arr_19 [i_2] [i_3] [1] [i_5] [i_5 + 1] [i_6];
                            }
                        }
                    }
                }
                for (int i_7 = 3; i_7 < 8;i_7 += 1)
                {
                    arr_27 [i_2] [i_3] [i_7] [i_3] = ((((max(1, 52863))) ? (arr_19 [i_2] [i_2] [i_3] [i_3] [0] [i_7]) : (arr_2 [i_7])));
                    arr_28 [i_3] [i_7] = 1;
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 6;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_34 [i_2] [i_3] [i_7] [i_7] [i_9] = (arr_5 [4]);
                                arr_35 [3] [i_3] [i_7] [i_3] [i_9] = -109;
                                arr_36 [i_7] = arr_3 [19] [i_7];
                                var_28 = arr_5 [i_3];
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
