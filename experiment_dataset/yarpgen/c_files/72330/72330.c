/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = -9;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_1] [3] [3] = (((((((!(arr_0 [i_0]))) ? 53 : ((~(arr_4 [i_2])))))) ? (4 & 1) : (max((~-8359518352144636902), (~4914635591196146209)))));
                        var_16 = (~var_14);
                        var_17 = (-8359518352144636897 ? 9223372036854775807 : 1);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_16 [i_4] [i_5] = (((arr_8 [6]) ? (arr_8 [0]) : 4153540187));
            var_18 = 252;
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            arr_19 [i_4 + 1] [i_6] = ((32767 ? (arr_12 [i_4 + 2]) : -2243916333570982337));
            arr_20 [12] &= var_6;
            arr_21 [i_4 + 3] [i_6] [i_6] = (((((var_10 ? -3 : (arr_9 [i_4] [2] [i_6])))) ? (arr_9 [i_4 - 1] [1] [i_6]) : var_3));
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 14;i_8 += 1)
            {
                {
                    var_19 = var_0;
                    arr_27 [i_4 - 3] = (~17);
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    {
                        var_20 = ((((((((0 ? -62 : 123))) ? var_0 : (-127 - 1)))) ? (arr_17 [i_9] [i_11] [i_11]) : (~121)));
                        arr_39 [i_9] [i_9] [i_9] = var_9;
                        arr_40 [i_9] [i_9] = (arr_30 [i_9] [i_10]);
                    }
                }
            }
        }
        arr_41 [i_9] [i_9] = var_8;
        arr_42 [i_9] [i_9] = (min((((((-1655519229723505355 ? var_11 : -121))) ? (-127 - 1) : 32754)), 9));
        var_21 = ((((((((-9117997929237063210 ? var_13 : 5))) ? 159641951386118202 : (((-(arr_18 [i_9] [i_9] [i_9]))))))) || (arr_35 [i_9] [i_9] [13])));
        var_22 = (-127 - 1);
    }
    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
    {
        var_23 &= (((1413001774893755683 ^ ((var_12 ? var_3 : var_14)))));
        arr_45 [i_13] [i_13] = (min((~-9223372036854775805), ((max(-1655519229723505351, ((min((arr_14 [i_13] [i_13]), -26))))))));
    }
    var_24 = (((((var_1 ? ((var_2 ? var_4 : var_10)) : (((var_4 ? -1893986685 : var_11)))))) ? ((9781 ? (var_0 + var_15) : -9223372036854775807)) : (~var_6)));
    var_25 = ((650938040345885114 ? var_4 : var_0));
    var_26 = var_0;
    #pragma endscop
}
