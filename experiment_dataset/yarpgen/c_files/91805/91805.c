/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((0 ? 1 : -57));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0 + 1] = ((((var_1 ? var_4 : 2525079001)) <= ((var_2 ? 4315633878981783187 : var_0))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_13 [i_0] [11] [12] [i_0 + 3] [i_0] [i_0] = 1;
                        arr_14 [i_0] [i_0] [10] [i_0] = (((((var_6 ? 1 : var_6))) ? var_2 : (var_9 == 7121950920415301305)));
                        var_11 -= ((var_9 * (((1 / (arr_7 [i_0]))))));
                        var_12 = (((-6711148264730490964 ? (arr_1 [i_0 + 1] [i_1]) : 1)));
                        var_13 = (arr_0 [i_2]);
                    }
                    arr_15 [i_1] [12] = (arr_5 [i_0 + 2]);
                    var_14 = (arr_7 [i_1]);
                    var_15 = (min(var_15, (~0)));
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_16 *= (((~(((!(arr_3 [i_4 - 1] [i_4 - 1])))))) != var_8);
        var_17 = ((((((((1 == (-127 - 1)))) != ((((arr_10 [i_4] [9] [i_4]) != var_9)))))) <= (!1)));
    }
    for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
    {
        var_18 = ((((!(arr_20 [i_5 - 2])) ? (~2494679520601027496) : (arr_18 [i_5]))));
        var_19 -= ((-121 ? 1 : (arr_17 [i_5])));

        for (int i_6 = 3; i_6 < 12;i_6 += 1)
        {
            var_20 = ((!(arr_20 [9])));
            arr_25 [11] = (((((((arr_1 [i_5 + 3] [i_5 + 3]) != (arr_17 [i_5 - 1]))) ? (arr_11 [9] [i_6 + 2] [i_5 + 3] [i_5] [9] [i_5]) : ((1 ? (arr_5 [5]) : (arr_24 [i_5]))))) <= (arr_22 [i_6] [10] [i_6])));
            arr_26 [i_5 + 2] [i_6 + 1] = var_0;
            var_21 = (((((arr_6 [0] [i_6] [i_5 - 2]) <= (((arr_17 [i_5]) ? (arr_20 [i_5 - 2]) : var_3)))) ? -1064584988730139571 : (!2961394265)));
        }
    }
    var_22 = 0;
    #pragma endscop
}
