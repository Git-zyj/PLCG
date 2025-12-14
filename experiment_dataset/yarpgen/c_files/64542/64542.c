/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 += var_0;
        var_12 = var_2;
        var_13 = ((((max(((max(20, (arr_0 [17])))), var_5))) ? (((arr_2 [i_0]) ? 125 : 1)) : ((min(var_7, (arr_2 [i_0]))))));
        var_14 = (~var_1);
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_15 = (arr_5 [i_1] [i_1]);
        var_16 = (!267428981786711848);
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_17 = (max(var_17, ((min(18179315091922839767, 44093)))));
        var_18 = (max((((arr_2 [i_2]) ? (arr_7 [i_2] [i_2]) : 1)), ((((min(8930, var_10))) ? ((18179315091922839767 ? var_3 : (arr_2 [i_2]))) : (arr_1 [i_2])))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_12 [i_3] = ((max(((917854214051999611 >> (3327 - 3313))), ((max((arr_11 [i_2] [i_2] [i_2]), (arr_6 [i_3])))))));
            var_19 = ((((min((arr_4 [i_2]), -4772212255364475623))) ? ((((!(arr_4 [i_2]))))) : (((arr_4 [4]) ? (arr_4 [i_3]) : (arr_4 [i_2])))));
            arr_13 [i_2] [i_2] [i_2] |= ((((min((max(6959, 4294967295)), (arr_1 [1])))) ? (((arr_5 [i_2] [i_3]) ? (arr_5 [i_2] [i_2]) : var_6)) : (min((arr_7 [4] [i_3]), (arr_9 [i_2])))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_20 = ((195 ? ((+((0 ? (arr_16 [i_2] [i_2] [i_4]) : var_9)))) : ((((arr_7 [i_2] [i_4]) ? ((-(arr_9 [i_2]))) : ((-7 ? (arr_5 [i_2] [i_2]) : (arr_6 [2]))))))));
            var_21 = (max((max((arr_6 [i_2]), 18179315091922839767)), var_1));
            var_22 = (arr_7 [i_2] [i_4]);
            arr_17 [5] = (arr_9 [i_2]);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_23 = (((((var_0 ? var_3 : 132))) ? (arr_15 [i_2]) : var_10));
            var_24 += ((((((arr_0 [i_5]) ? (arr_4 [i_5]) : 26960))) ? -267428981786711848 : ((-1031771813 ? var_9 : 18179315091922839767))));
            var_25 |= (arr_16 [i_5] [i_5] [i_5]);
            arr_20 [i_2] [i_2] [6] = ((6139 ? 0 : 2004863754));
        }
    }
    for (int i_6 = 1; i_6 < 22;i_6 += 1)
    {
        var_26 = ((!(((((((arr_23 [i_6]) ? 3840 : 0))) ? ((max(3475118077, 0))) : 18179315091922839767)))));
        arr_24 [i_6] = min((arr_21 [22]), ((max(var_10, 14413))));
        arr_25 [i_6] = ((((((var_8 / 21443) ? (!22) : (arr_23 [11])))) ? ((((max(var_2, (arr_22 [i_6] [i_6])))))) : (max((min((arr_21 [i_6]), var_4)), (arr_22 [i_6] [i_6])))));
        arr_26 [i_6] = (!0);
    }
    var_27 = -1830236686543696543;
    var_28 = var_8;
    var_29 = ((59539 ? (((15405417599359677664 ? 267428981786711837 : 44093))) : ((97 ? (((1 ? var_5 : 1274202070))) : 267428981786711848))));
    #pragma endscop
}
