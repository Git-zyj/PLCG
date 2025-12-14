/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_12 = (min(var_12, ((min(0, 4294967295)))));
        var_13 = ((!((min(var_3, (max(1770, (arr_1 [i_0]))))))));
        arr_3 [12] &= ((((min(-231864446, -7087896740839518017))) || 1));
        var_14 = ((-(((arr_1 [i_0]) - (arr_0 [i_0 - 1])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = var_0;
        var_15 = (max(((min((arr_0 [i_1]), (arr_0 [i_1])))), var_0));
    }
    var_16 = ((((((31764 >> (var_8 + 5285))))) / var_10));

    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = (max(((var_3 + (arr_10 [i_2] [i_2]))), (min(var_10, (arr_10 [11] [i_2])))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 18;i_5 += 1)
                {
                    {

                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            arr_20 [i_3] [i_3] = ((!(((((8191 - (arr_15 [i_2] [1] [i_2] [i_3]))) >> (-1761 + 1775))))));
                            var_17 = (((max(-817784226, -2319197564891953771)) + ((max((arr_14 [i_3]), (arr_14 [i_3]))))));
                            arr_21 [i_2] [i_3] [i_2] [i_5 - 2] [1] &= (!((min(var_10, var_4))));
                        }
                        for (int i_7 = 2; i_7 < 18;i_7 += 1)
                        {
                            var_18 ^= (max(((var_0 << (((arr_0 [i_2]) - 1924739901)))), 167));
                            arr_25 [i_2] [i_2] [i_3] [i_4 - 1] [1] [i_7 - 2] [i_3] = (min(1761, -2054746092));
                        }

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            arr_28 [i_8] [i_5] [i_3] [i_3] [i_2] = (((arr_13 [i_2] [18]) && 0));
                            var_19 = (1 ^ 1);
                            arr_29 [i_3] = var_11;
                        }
                        for (int i_9 = 4; i_9 < 18;i_9 += 1)
                        {
                            var_20 ^= 2;
                            arr_32 [i_2] [i_3] [i_5 - 3] [i_5 + 1] [i_3] = -20;
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_21 *= (min(((~(min((arr_14 [i_10]), (arr_27 [i_2] [i_3] [i_4 - 1] [i_5 - 3] [i_5] [i_10] [i_10]))))), (((~(84 / 16368))))));
                            var_22 = var_4;
                        }
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            var_23 ^= 1;
                            var_24 = (max(var_24, 7826844510973959124));
                        }
                        var_25 = (min(var_25, 1));
                    }
                }
            }
        }
        var_26 += var_7;
    }
    for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
    {
        var_27 ^= (arr_14 [i_12]);
        arr_39 [i_12] [i_12] = ((((1 && (2147483648 && var_7))) || ((min(1, 4292664277)))));
    }
    #pragma endscop
}
