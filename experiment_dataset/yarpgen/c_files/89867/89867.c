/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 16043545094974990129;
    var_18 = ((max(1231, var_9)));
    var_19 = (max((min((min(16043545094974990101, var_2)), (-16635 * 0))), var_0));
    var_20 = ((((max(var_9, 0))) ? ((var_6 ? var_2 : (min(-12131, 6393526516659154753)))) : ((max((min(var_5, 1289043152)), (((var_3 ? 19 : 1))))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_21 = (((((var_2 ? 67 : (arr_1 [i_0 + 1] [i_0])))) ? (max((arr_1 [i_0 + 1] [i_0]), ((~(arr_0 [i_0] [i_0]))))) : var_16));

        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            var_22 = ((((arr_5 [i_0 - 1]) && (arr_4 [i_1] [i_0 - 1]))));
            arr_8 [i_0 - 1] [i_0] [i_1] = ((((min((arr_7 [i_1] [i_0]), (arr_5 [i_1 + 1]))))) ? (((((min(3360359539, 1)) >= (((-899626891 ? 899626891 : 49152))))))) : (min(var_15, ((max((arr_6 [i_0] [i_0 - 1] [i_0 + 1]), (arr_4 [i_0] [i_1 - 1])))))));
            var_23 ^= (min(var_12, (arr_0 [i_0 + 1] [i_1])));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_11 [8] &= ((((((arr_1 [i_0 - 1] [20]) ? 72 : 89))) ? (arr_10 [i_2] [i_0]) : var_3));
            arr_12 [i_0] [i_0] = (((arr_0 [i_0 + 1] [i_0]) & ((var_1 << (-1 + 17)))));
            arr_13 [i_0 + 1] [i_0] [i_2] = ((((((arr_7 [i_2] [i_0 - 1]) ? 1454617586 : var_13))) ? ((-1210279279 ? (arr_3 [i_0]) : var_4)) : 127));
        }
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_24 = ((12131 && (arr_6 [i_3 - 1] [i_3 + 1] [i_3 + 1])));

        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            arr_18 [i_4] [i_4 + 1] = var_16;
            var_25 = arr_1 [i_4] [i_4];
            arr_19 [i_3] [i_4] = arr_5 [i_3 + 1];
        }
        var_26 = (arr_5 [i_3 + 1]);
        var_27 += (((arr_2 [2]) ? 0 : 1));
    }
    for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
    {
        var_28 = (min(var_28, ((((((arr_0 [i_5] [14]) ? (arr_0 [i_5] [18]) : (arr_6 [i_5 - 1] [i_5] [i_5 - 1]))) >= (((!(arr_21 [i_5 - 1])))))))));
        var_29 &= (~(arr_21 [i_5 - 1]));
        var_30 = ((((((!4394622967521930134) ? (-19 < 899626900) : 3394890005))) ? -12132 : ((1 ? 899626891 : 1))));
        var_31 = 1664517696;
    }
    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {
        arr_25 [i_6] = arr_9 [i_6] [i_6];
        var_32 = (max(var_32, ((((-127 - 1) ? ((((min((arr_24 [i_6]), 1))))) : 900077276)))));
    }
    #pragma endscop
}
