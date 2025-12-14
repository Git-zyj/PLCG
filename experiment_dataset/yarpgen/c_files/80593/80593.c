/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 |= (arr_0 [i_2] [i_4]);
                                arr_13 [i_3] = (arr_12 [i_3] [i_3]);
                                var_19 = ((2052204779 ? (arr_5 [13] [i_2] [i_2]) : ((((var_10 && (arr_3 [i_0] [i_1] [i_2]))) ? (arr_4 [i_4] [i_2]) : ((max(var_3, 23764)))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_20 = (min(var_20, ((((arr_6 [i_0]) > (!4294967295))))));
                            var_21 = (max(var_21, (arr_15 [i_1 - 1])));
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    var_22 -= var_7;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_23 -= (((~var_7) || ((((arr_8 [i_1 - 1] [2]) ? 14041922270438718827 : (arr_8 [i_1 + 1] [i_1 + 1]))))));
                                var_24 |= ((min((arr_7 [i_8]), (arr_7 [i_7]))));
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        var_25 = ((((-(((arr_6 [i_0]) ? 18161 : var_6))))) ? ((((((4294967280 ? 14041922270438718834 : 224))) ? -2 : (var_14 > 248)))) : (((arr_10 [i_1 - 1] [i_1 - 1] [i_10] [i_1 - 1]) ? (arr_10 [i_1 + 1] [4] [i_7] [i_10]) : var_4)));
                        var_26 = (((arr_16 [i_1 + 1]) >> ((-1 ? (arr_16 [i_1 - 1]) : (arr_1 [i_1 - 1])))));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        var_27 = var_3;
                        var_28 = ((4404821803270832805 ? 6 : 244));
                        arr_33 [i_11] [i_7] [i_1] [i_0] = (((min(988642283, 11)) >> ((249 ? 12 : 1))));
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        var_29 = (max(var_29, ((((max((arr_12 [i_7] [i_1]), var_11))) ^ (min((arr_30 [i_1 + 1] [i_1 + 1]), (arr_12 [i_7] [i_0])))))));
                        arr_36 [i_0] [i_1] = (((((((arr_9 [i_7] [i_7] [i_7] [i_7] [i_12] [i_12]) || (arr_10 [i_12] [i_7] [2] [i_0]))) ? -2936458184881818943 : var_17))) || (arr_28 [i_0] [i_1] [14] [i_7] [i_7] [i_7]));
                        var_30 = (6 ? 4 : 32766);
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 0;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 16;i_15 += 1)
            {
                {
                    arr_45 [i_13] [i_13] [i_13] [i_13] = ((4404821803270832788 ? 121 : 1950571889));

                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        var_31 &= ((+((max((arr_23 [i_13 + 1] [i_13 + 1] [i_13 + 1]), (arr_23 [i_13 + 1] [i_13 + 1] [i_13 + 1]))))));
                        var_32 = -9223372036854775793;
                        var_33 = 247;
                    }
                }
            }
        }
    }
    var_34 ^= var_0;
    #pragma endscop
}
