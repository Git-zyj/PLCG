/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((!(((1 << (2537350392078604693 - 2537350392078604671))))))) << (var_6 + 23)));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] = var_4;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_0 - 1] [0] [i_2 - 1] [i_0] [i_0 - 1] = ((((min(var_4, ((min(var_6, var_9)))))) & ((var_7 ? var_0 : (arr_14 [i_0] [i_2 - 1] [i_4])))));
                                var_11 = (i_0 % 2 == 0) ? (((-(((((arr_10 [i_4] [1] [i_4] [1] [1]) >> (((arr_5 [i_0] [i_2]) - 16492)))) * ((var_7 ? var_5 : var_6))))))) : (((-(((((arr_10 [i_4] [1] [i_4] [1] [1]) >> (((((arr_5 [i_0] [i_2]) - 16492)) - 19902)))) * ((var_7 ? var_5 : var_6)))))));
                            }
                        }
                    }
                }
            }
        }
        var_12 = (min(var_6, var_8));
        var_13 = (max(var_13, ((min(((((min(10460639012969508430, 10460639012969508430))) ? 7986105060740043175 : ((-1626169911 ? -1626169892 : 10460639012969508430)))), ((min(((((arr_13 [0] [0] [i_0] [i_0 + 2] [i_0]) < var_1))), (min(var_3, var_6))))))))));
        var_14 = (((((((var_4 ? var_5 : var_5)) >> (var_6 + 24)))) ? (((arr_12 [i_0 - 1] [i_0 + 2] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1]) ? var_9 : ((var_0 ? var_5 : 10460639012969508420)))) : ((var_5 ? (min(var_2, (arr_6 [i_0] [i_0] [i_0] [i_0 + 1]))) : (min(var_6, var_1))))));
    }

    /* vectorizable */
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        var_15 = ((((10460639012969508430 ? var_5 : (arr_0 [i_5] [i_5]))) < ((var_2 ? var_5 : var_2))));
        arr_19 [i_5] [12] = (10460639012969508410 < 10460639012969508426);
        arr_20 [i_5] = (arr_4 [i_5]);
    }
    for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    {
                        arr_36 [i_8] [i_8] [i_9] [i_9] [i_6] = var_7;
                        arr_37 [i_6] [i_6] [i_9] [i_9] [i_6] [i_6] = (arr_35 [i_6] [i_6] [i_8] [11]);
                        var_16 ^= ((((var_3 ? var_1 : var_5)) + ((((var_5 << 1) ? ((min((arr_29 [i_6] [i_6] [i_8]), var_4))) : ((1626169883 << (var_8 - 64323))))))));
                        arr_38 [i_9] [i_7] = var_9;
                    }
                }
            }
        }

        for (int i_10 = 3; i_10 < 19;i_10 += 1)
        {
            var_17 = (min(var_17, (arr_25 [i_6 + 1] [i_10])));
            arr_41 [i_10] [i_6] = 71433487737237468;
        }
        var_18 = ((((((var_8 & var_4) + var_2))) ? (((arr_33 [18] [i_6 + 1] [i_6] [i_6]) ? (min(var_5, 1626169878)) : ((var_4 ? var_0 : (arr_35 [i_6 + 2] [i_6 + 1] [i_6 + 2] [i_6 + 2]))))) : var_2));
    }
    for (int i_11 = 1; i_11 < 19;i_11 += 1) /* same iter space */
    {
        arr_45 [2] [2] = ((((((arr_27 [1] [i_11 - 1] [i_11 + 2]) ? (((var_3 + (arr_34 [i_11] [18] [i_11] [i_11 + 2])))) : ((var_8 ? 7986105060740043205 : var_3))))) ? ((~((var_7 >> (var_5 - 9507318774066695848))))) : var_6));
        var_19 &= (arr_42 [i_11]);
        var_20 = ((-(min((arr_23 [i_11 - 1] [i_11 + 1]), ((((arr_39 [i_11]) <= var_9)))))));
        var_21 -= ((((((arr_32 [i_11 + 1] [i_11] [i_11 + 1] [i_11]) + var_3))) && ((min(var_6, var_3)))));
    }
    #pragma endscop
}
