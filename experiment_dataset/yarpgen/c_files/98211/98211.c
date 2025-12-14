/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    for (int i_0 = 3; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_11 = (((min(14, 63)) != (!18446744073709551601)));
        var_12 -= (arr_0 [i_0]);
        var_13 = ((!(((-(arr_2 [i_0 + 1]))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (arr_2 [i_1]);
        var_14 = ((57414 & var_8) - (var_7 + 14));
    }
    for (int i_2 = 3; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_15 = ((((max(-var_7, (arr_4 [6])))) ? ((var_6 + ((var_7 - (arr_2 [i_2]))))) : (((((((-2147483647 - 1) ? 37 : 29483))) ? -1969290948735888532 : var_6)))));
        var_16 ^= ((((-(min(var_8, -12019)))) / ((max(-10772, 1532455175)))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_17 = (min(63, 11711744812073708533));
                    var_18 |= ((18446744073709551594 ? ((((-(arr_5 [i_2]))) % -var_2)) : (((max(32754, -29622))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        var_19 = (min(var_19, var_3));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                        {
                            arr_23 [i_2] [i_5] [i_6] [12] [i_2] [i_8] = var_0;
                            var_20 ^= 37;
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                        {
                            var_21 ^= (((((arr_4 [i_2 - 3]) ^ (arr_4 [i_2 + 1]))) & ((min(-1920, (arr_4 [i_2 - 3]))))));
                            arr_26 [i_2] [i_2] [i_5] [i_6] [i_2] [i_9] [i_9] = (((~var_5) ? (min((arr_19 [i_2] [10] [i_2] [i_2 + 1] [i_7] [i_2]), var_1)) : ((((arr_19 [14] [i_2] [i_2 - 1] [i_2 - 1] [i_7] [i_2]) ^ var_2)))));
                        }
                        arr_27 [1] [i_2] [13] [i_5] [i_2] [i_2] = ((-((var_2 ? var_2 : (min(var_6, var_0))))));
                        var_22 |= var_4;
                        var_23 = (((((var_7 ? (310300981004567241 & var_2) : (~4294967283)))) ? ((((min(var_1, (arr_5 [i_2])))) ? (((4050924917 ? var_8 : 255))) : ((310300981004567235 ? 18446744073709551596 : var_8)))) : (arr_11 [i_2])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
