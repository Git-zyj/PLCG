/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_16 = ((((min(27715, ((min(-1, -32763)))))) ^ 1));

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            var_17 = 5659846356859997489;
            var_18 = (min((arr_4 [i_0 + 3] [i_0 + 2]), (arr_1 [i_0 + 2])));
            var_19 = (((-((max(1, (arr_2 [i_1] [i_0])))))));
            var_20 = (-105 ? 0 : 1);
            var_21 -= (((arr_3 [i_0] [i_0] [i_0]) || -13713));
        }
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_22 = (max(116, (arr_7 [3])));
            var_23 &= (((max(2412891132556795754, 1)) % (~53560468)));
        }

        /* vectorizable */
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            var_24 = (((arr_3 [i_0] [i_3 + 1] [i_3 + 1]) ? (arr_3 [i_0] [i_3 - 1] [i_3 + 1]) : 5439876290444851794));
            var_25 = ((((arr_2 [i_0] [i_0]) ? 1 : -89)));
        }
        var_26 = ((-(min(123, 27))));
    }
    for (int i_4 = 2; i_4 < 12;i_4 += 1) /* same iter space */
    {
        var_27 = (max(-112603531, (arr_7 [i_4 + 2])));
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    {
                        var_28 = -1;
                        var_29 -= (arr_3 [i_6] [i_7] [i_6 + 2]);
                        var_30 = (min(var_30, 209));
                        var_31 &= (max((((arr_15 [i_4] [i_6 + 3] [i_7]) ? (arr_15 [i_6] [0] [0]) : (arr_15 [i_6] [i_5 - 3] [i_7]))), (arr_12 [i_6 - 1] [i_7])));
                    }
                }
            }
        }
    }
    var_32 = var_3;

    for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
    {
        var_33 = (min(-13713, 24));
        var_34 = (((arr_26 [i_8]) ? 1 : (max(37, ((((arr_26 [i_8]) < (arr_26 [i_8]))))))));
        var_35 = ((620358491361588055 * (((!(arr_26 [i_8]))))));
        var_36 = (max(var_12, (arr_25 [i_8])));
    }
    for (int i_9 = 1; i_9 < 14;i_9 += 1) /* same iter space */
    {
        var_37 += max((((64 ? 1 : (arr_29 [i_9 + 1])))), (((((238 ? 236 : (arr_25 [0])))) ? 9223372036854775807 : (((max((arr_27 [i_9 + 3]), (arr_26 [12]))))))));

        for (int i_10 = 2; i_10 < 15;i_10 += 1)
        {
            var_38 = ((-((191 - (arr_29 [i_9 + 4])))));
            var_39 = (((arr_29 [i_10 - 1]) ? (((18446744073709551615 - 150) ? (arr_25 [i_10]) : (((~(arr_24 [i_10])))))) : (((((1707206181 ? 1 : (arr_32 [i_9])))) ? ((3097321613710377730 ? 18446744073709551555 : 74)) : (((230 >> (-11000 + 11015))))))));
        }
    }
    for (int i_11 = 1; i_11 < 14;i_11 += 1) /* same iter space */
    {
        var_40 -= (arr_27 [i_11 + 3]);
        var_41 -= ((((1982991938 ? 13713 : -8747))));
    }
    #pragma endscop
}
