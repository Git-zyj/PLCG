/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 = 65533;
                                arr_11 [2] [i_1] [i_1] [i_3] [i_4] = (min(((-65521 - ((var_4 ^ (arr_4 [i_0] [i_1]))))), ((min(-23521, (arr_2 [i_2 - 1] [i_2 - 1]))))));
                                var_14 ^= (((min((min(2085994531, 2)), (var_5 || 5))) < (arr_3 [i_0])));
                                var_15 += (arr_9 [i_0] [i_0] [i_2] [i_3] [i_3]);
                                arr_12 [i_0] [7] [i_1] [18] [i_0] = ((~(arr_2 [20] [i_1])));
                            }
                        }
                    }
                    var_16 = (8192 % 185);
                    arr_13 [i_0] [i_0] [6] [i_1] = (((((-(min(-5657573045938065621, (arr_9 [22] [i_0] [i_1] [22] [i_2 + 1])))))) ? ((max((-21480 ^ 1), -5657573045938065625))) : var_3));
                    var_17 = ((arr_2 [i_0] [i_0]) ? (max(4274061497365048745, 4501400604114944)) : (((((min((arr_3 [i_0]), 2228))) | 139611588448485376))));
                }
                var_18 = ((-((55 ? 108 : (arr_2 [i_0] [i_1])))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_16 [i_5] [i_5] = (min(((((arr_5 [i_5] [i_5] [i_5]) & (arr_1 [i_5])))), var_5));
        arr_17 [i_5] = (min(1, (min(var_8, (arr_15 [i_5])))));
        var_19 = 255;
        var_20 = ((((!(arr_9 [10] [i_5] [i_5] [i_5] [i_5]))) ? (((!(arr_7 [i_5] [i_5])))) : (((!(1 <= -32758))))));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 8;i_6 += 1) /* same iter space */
    {
        var_21 = (((arr_10 [2] [i_6 + 1] [i_6 + 1] [22] [20] [i_6]) ? 9223372036854775807 : (arr_10 [16] [i_6] [i_6 + 1] [16] [i_6] [i_6 + 1])));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    arr_25 [i_6 + 1] [i_7] [i_6 + 1] |= (arr_1 [i_8]);
                    var_22 = (252 || 61);
                }
            }
        }
    }
    for (int i_9 = 1; i_9 < 8;i_9 += 1) /* same iter space */
    {
        var_23 ^= min(((((!1) && (!-11046)))), ((-(arr_14 [i_9]))));
        var_24 += (arr_7 [4] [i_9 + 1]);
    }
    #pragma endscop
}
