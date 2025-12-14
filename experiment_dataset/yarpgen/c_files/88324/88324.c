/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 1] [i_0 - 1] [i_2] [i_0 - 1] = (((!1) < (~248)));
                    arr_8 [i_0] [i_2] [i_2] = ((149 % (arr_4 [i_0 + 2] [i_1] [i_1 - 1] [i_2])));
                }
            }
        }
        arr_9 [i_0 + 1] = (((~18446744073709551615) == 1));
        var_13 = (~((63660 >> (((arr_3 [i_0 - 1] [i_0 + 1]) + 81)))));
        var_14 = ((((((var_3 - 1859) <= (1127569773 <= 1861)))) >> (((arr_2 [i_0] [i_0] [i_0]) % (((1876 || (arr_1 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            var_15 -= (((arr_14 [i_3 - 1]) == (!56588)));
            var_16 = ((130 + (arr_13 [i_3 - 1])));
            var_17 = ((((((arr_12 [i_3]) != 13007478195135591824))) - (((4067473266191266758 != (arr_12 [i_4]))))));
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_18 = ((8953 ? ((127 ? 63675 : 56582)) : (((60 || (arr_15 [i_5]))))));
            var_19 = (((1876 * 248) || (~3361448044543691744)));
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_20 = 130;
            arr_21 [i_3] = (arr_20 [i_3 + 1] [i_3 - 1] [i_3 + 1]);
            var_21 = ((~(arr_16 [i_3] [i_3 - 1] [i_6])));
            arr_22 [i_3] = ((~(var_1 == var_7)));
            var_22 = (((arr_11 [i_3 + 1]) ? (arr_11 [i_3 - 1]) : (arr_11 [i_3 + 1])));
        }
        arr_23 [i_3] = 12;
        var_23 = (max(var_23, 1861));
        arr_24 [i_3] = (1 == 56582);
    }
    var_24 = (max(var_24, var_6));
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            {
                arr_29 [i_7 + 1] = 1861;
                var_25 = ((-(((arr_28 [i_7 + 1] [i_7 + 1]) ? 12307024435466851741 : 51648560))));
            }
        }
    }
    #pragma endscop
}
