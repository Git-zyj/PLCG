/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = (max((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))), (arr_0 [i_0])));
        var_17 = -1;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_18 -= ((~(~96)));
        var_19 = var_5;

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_20 -= ((((min((arr_3 [i_1]), (arr_0 [i_1]))) > (arr_1 [i_1]))));
            var_21 = (min(((((-1 ? 0 : 18446744073709551615)))), (((arr_1 [i_2 - 1]) ? 17007471029156577613 : (1439273044552974003 <= 17007471029156577613)))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_2 - 1] [i_2] [i_4] [i_2] = ((-((min((16972612728282626454 != var_8), (!var_4))))));
                        var_22 = ((0 + (!var_7)));
                        arr_15 [i_1] [i_2 + 2] [i_2] [i_4] = (min((min(((max(0, (arr_8 [i_1] [i_3 - 1] [4])))), 16972612728282626454)), (arr_7 [i_3 - 1] [8] [i_2 + 1])));
                        var_23 = 18446744073709551615;
                        arr_16 [i_2] [i_2] [i_2] [i_2] = ((-(min(2009386344, ((1474131345426925161 - (arr_7 [i_1] [i_2 + 2] [i_3])))))));
                    }
                }
            }

            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                var_24 = ((var_13 ? (((-(arr_7 [i_2] [i_2 + 2] [i_5 - 1])))) : (arr_9 [i_1] [i_2])));

                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_25 = 1439273044552974003;
                    arr_21 [9] [i_2] [i_2] [i_6] = min((~1474131345426925161), (arr_19 [i_1] [i_2] [i_5 + 1] [i_6] [i_6] [i_2]));
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    var_26 = ((((min(1469819745, 129))) ? ((((368858187 || (arr_8 [i_5 - 1] [i_5 - 1] [i_5 + 1]))))) : (min((arr_19 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_5 - 1] [i_5 + 1] [i_2]), 176))));
                    var_27 = (min(((min((arr_23 [i_1] [10] [i_1] [i_1] [i_1]), (arr_23 [i_1] [i_2] [i_2 - 1] [i_5] [i_7])))), (((!193037840) ^ (arr_3 [i_1])))));
                    arr_24 [i_1] [i_1] [i_2] [i_1] [i_1] [i_2] = ((~((~(-2147483647 - 1)))));
                    var_28 = (max(var_28, (((((max(((min(2143289344, 10))), (min(0, 1439273044552974003))))) ? (min((~-1469819745), (arr_10 [i_1] [8]))) : (((((arr_4 [i_5]) >= 0)) ? (~var_6) : 2800574337)))))));
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_29 = (min((-618514140 >= 0), (arr_10 [i_2] [i_8])));
                        var_30 = var_13;
                    }
                    arr_29 [i_2] = var_11;
                    var_31 = (min(var_31, (2151677952 % 4294967295)));
                    var_32 = ((((min((!var_6), 0))) ? 65535 : -388816320));
                }
                arr_30 [6] [i_2] = ((((((arr_9 [i_2 - 1] [7]) ? (arr_9 [i_2 - 1] [6]) : var_12))) || ((!(arr_1 [i_2 + 1])))));
                var_33 = (arr_19 [i_1] [i_1] [i_5 + 1] [i_2 - 1] [i_5 + 1] [i_2]);
            }
        }
    }
    for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
    {
        var_34 = (min(var_34, 3079023128));
        arr_33 [1] = (max(var_12, (arr_1 [i_10])));
    }
    var_35 &= (max(60368, var_9));
    var_36 = ((var_6 ? ((min((var_4 / var_6), ((min(0, -1682721725)))))) : (min((max(var_4, 561850441793536)), (var_15 + 2599832073731208050)))));
    #pragma endscop
}
