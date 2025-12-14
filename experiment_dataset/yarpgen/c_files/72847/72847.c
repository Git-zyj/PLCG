/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 += 85;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 |= 0;

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    {
                        var_17 -= max((((((max(0, (arr_3 [i_0] [i_1] [i_2])))) ^ 51501))), ((~(min((arr_4 [2] [2] [2]), var_4)))));
                        var_18 = 1;
                    }
                }
            }
            arr_11 [i_0] [i_1] = (!1);

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_19 = (min(var_19, (((~(((((0 ? var_12 : 1)) != ((((0 && (arr_2 [i_0] [i_1])))))))))))));
                var_20 = (min((-7 / -7), 0));
                var_21 = (min(var_21, (arr_4 [i_0] [i_1] [i_4])));
            }
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_22 *= 1;

            /* vectorizable */
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    var_23 += (0 ? (arr_2 [i_6 - 2] [i_6 + 2]) : 1);
                    var_24 -= (arr_18 [i_7] [i_7] [0] [i_7]);
                    var_25 = (arr_15 [i_0] [i_5] [i_0]);
                    arr_22 [3] [i_5] [2] = (arr_5 [i_0]);
                    var_26 = 16383;
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_27 = -14034;
                        var_28 = (min(var_28, ((((-85 + 2147483647) >> (((arr_16 [i_6 + 2] [1] [i_6]) - 46090)))))));
                    }
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        arr_31 [1] [i_5] [i_6] [i_5] [4] = ((-((~(arr_5 [i_6])))));
                        var_29 = (~-93);
                    }
                    var_30 = 0;

                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        var_31 = (((arr_7 [i_5] [i_5] [i_11]) <= (arr_20 [i_6 - 2] [i_6 + 2] [i_5] [i_6 + 2])));
                        var_32 = (min(var_32, ((((arr_9 [i_6 + 3] [i_6 - 1] [i_6 + 3]) * 4221576435)))));
                        var_33 = (min(var_33, 108086391056891904));
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_36 [i_5] [i_5] [19] = ((16383 <= (arr_35 [i_6 + 3] [i_5] [i_5] [i_0] [i_0])));
                        var_34 = (min(var_34, (arr_9 [i_6 - 2] [i_6 + 2] [i_6 + 1])));
                    }
                    for (int i_13 = 4; i_13 < 18;i_13 += 1)
                    {
                        var_35 = (max(var_35, 127));
                        var_36 = ((732811704 >= (arr_25 [i_13 - 1] [12] [i_13 - 2] [i_13] [i_13 - 4])));
                        var_37 = (((arr_8 [i_13 + 2] [i_6 - 2] [i_13 + 2]) ? (((-2522250096435382098 + 9223372036854775807) >> (32767 - 32748))) : ((((arr_21 [i_0] [19] [5] [i_0] [i_5]) ? -26875 : -115)))));
                    }
                }
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    arr_42 [2] [i_5] = 15723756325547537274;
                    var_38 = (max(var_38, ((((arr_24 [i_0]) ? (arr_27 [13] [i_5] [i_6 + 3] [i_6 + 3] [i_5] [i_5] [i_6]) : 92)))));
                }

                for (int i_15 = 1; i_15 < 19;i_15 += 1)
                {
                    var_39 = (arr_3 [i_0] [i_15 + 1] [i_6 + 2]);
                    arr_45 [18] [18] [i_6] [i_5] = (((arr_35 [i_6 - 2] [i_6 - 2] [i_5] [i_6] [i_6 - 2]) + (((~(arr_3 [i_5] [i_6 - 2] [i_15]))))));
                }
            }
        }
        var_40 = (min((arr_6 [i_0] [i_0]), 108086391056891904));
    }
    #pragma endscop
}
