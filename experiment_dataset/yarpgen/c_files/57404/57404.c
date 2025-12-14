/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((-(var_1 > 1)))) ? (min(((var_6 ? 4294967285 : 25)), (min(130, var_1)))) : (min((min(10, var_5)), ((var_6 ? var_1 : 131))))));
    var_13 |= (((((-(min(4294967269, 4230620037))))) ? var_4 : (((((68719476735 ? -1 : 73))) ? 121 : var_6))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (!-1);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                arr_11 [15] [i_1] [i_1] [15] = ((-11 ? var_5 : 36));
                arr_12 [i_1] [1] [i_0 - 1] [1] = var_11;
            }
            var_14 = var_4;
        }
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        var_15 = (2305843009213677568 > 1);
        var_16 = (max(var_16, (-9223372036854775807 - 1)));
        arr_15 [i_3] = ((1 ? ((2 ? 1 : 2305843009213677568)) : (((var_2 >> (var_6 - 3120106584))))));

        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_17 = 131;
            arr_18 [i_3] = (--124);
        }
    }

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_22 [i_5] = ((110 ? (arr_19 [i_5]) : (((arr_21 [i_5]) >> (var_3 - 7753012625663445357)))));
        arr_23 [i_5] = (((140 && ((min(-114, -1228000432))))));
        var_18 = ((((min(-74, (arr_21 [i_5]))) << (!132))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {
        var_19 ^= (2 * 4294967295);
        arr_28 [i_6] = (((((var_11 ? 826228897661466041 : (arr_2 [i_6])))) ? (125 * 1) : (740143469050649221 << 0)));
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
    {
        var_20 = (min((((194 ? (-127 - 1) : 1))), ((-(min(245, 740143469050649244))))));
        var_21 ^= 3807507174765428550;
    }
    #pragma endscop
}
