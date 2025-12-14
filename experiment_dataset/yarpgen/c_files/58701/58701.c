/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_8);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (((((arr_1 [i_0]) & (arr_0 [i_0]))) * (((arr_2 [i_0] [i_0]) >> (arr_2 [i_0] [i_0])))));
        arr_4 [i_0] = ((((((0 ? -19716 : var_10)))) & (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (11640709223325925569 >= 18446744073709551615)))));
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        arr_8 [22] [i_1] = (var_5 ? (arr_7 [0] [i_1]) : ((max((max((arr_6 [i_1 - 1]), 255)), (arr_6 [i_1])))));
        arr_9 [i_1] = (2372598899697977839 ^ -15564);
        arr_10 [i_1] = (-118 && var_1);
        arr_11 [i_1] [i_1] = (((min((arr_5 [i_1]), (arr_5 [i_1]))) & (((255 ? 0 : (((max(0, 3286)))))))));
        arr_12 [22] [22] &= (!2372598899697977839);
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_16 [i_2] [i_2] = (((((((max(0, 230))) ? (!32767) : (0 | var_6)))) ? var_1 : (!var_1)));
        arr_17 [i_2] = max(((11841 | ((-6082998843630374039 ? (arr_14 [i_2]) : var_1)))), (((((max(var_1, (arr_0 [i_2])))) ^ (((-32767 - 1) ? var_7 : var_3))))));
    }
    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        arr_22 [i_3] = (3150289492 | 10888461395269046550);
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    arr_28 [3] [i_4] [i_5] [3] = 0;
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_35 [i_3] [i_4] [i_3] [21] [i_3 - 3] [i_3] [21] = (arr_25 [i_7] [i_5] [i_4]);
                                arr_36 [i_3] [i_4] [i_3] [i_6 - 1] [1] = (arr_33 [i_3] [i_3] [i_3] [i_3 + 1] [i_3 + 1]);
                                arr_37 [10] [i_4] [i_5] [i_6] [i_7] &= (max(var_8, var_2));
                            }
                        }
                    }
                }
            }
        }
        arr_38 [i_3] = 255;
    }
    var_12 = (((0 ? 178 : 7126850544501099163)));

    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        arr_41 [i_8] = ((32700 ? 1 : 0));
        arr_42 [6] [i_8] &= (min(((var_5 / (arr_30 [i_8]))), (arr_5 [i_8])));
        arr_43 [i_8] [i_8] = (min(((var_9 ? (min(-4050026944204783532, 1)) : (var_2 & var_5))), var_9));
        arr_44 [i_8] = (arr_30 [i_8]);
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 11;i_11 += 1)
            {
                {
                    arr_54 [i_9] [i_9] [i_9] [2] = (min(((((max(var_0, -9223372036854775796)) != (min(15681, 6082998843630374038))))), (min(var_3, ((var_3 << (var_8 - 8022)))))));
                    arr_55 [i_9] [i_9] [i_11] [i_11] = min(var_2, (max((arr_48 [1] [i_10] [i_9]), -126)));
                    arr_56 [0] [i_10] [8] &= (arr_29 [20] [i_10] [i_10] [i_9] [i_10]);
                    arr_57 [i_9] [6] [i_11] &= ((((7640 + (4063232 + 1))) - (4051188134 - 255)));
                    arr_58 [i_9] = ((((((arr_31 [i_9] [i_10] [i_9]) >> (((var_7 && (arr_18 [i_9]))))))) ? (max(-var_0, 0)) : (arr_52 [i_9] [i_9] [i_9] [1])));
                }
            }
        }
        arr_59 [i_9] [i_9] = var_2;
    }
    #pragma endscop
}
