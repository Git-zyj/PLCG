/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (max((3635151303 * 30), ((min((((-1 + 2147483647) >> (3772445 - 3772414))), 1)))));
                var_13 = (((arr_3 [i_0 - 1]) && ((max(46, (arr_1 [i_0 - 1]))))));
            }
        }
    }
    var_14 = var_8;
    var_15 = (min(var_15, ((((((((min(var_5, 1))) ? var_6 : (((var_9 ? var_11 : -100)))))) && ((!((max(var_7, var_1))))))))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    {
                        arr_19 [i_3] [i_3] [i_5] = (((((var_9 ? (arr_4 [i_2] [i_4] [i_5]) : 513784934))) ? var_2 : (arr_14 [i_2] [i_3] [i_4] [i_5])));
                        var_16 = (max(var_16, var_1));
                    }
                }
            }
        }
        arr_20 [i_2] [i_2] = (((((var_0 ? var_0 : 1468789896))) ? (arr_8 [i_2] [i_2]) : var_0));

        for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
        {
            arr_24 [i_6] [i_6] = 269574895733166515;
            var_17 += (var_11 * var_0);
            var_18 += (arr_6 [i_6 - 1]);
        }
        for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {
                        var_19 = ((4155375867 ? 0 : 1663472448));
                        var_20 *= ((-(!var_11)));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 12;i_11 += 1)
                {
                    {
                        arr_38 [i_2] [i_7] [i_10] [i_11 - 3] = var_0;
                        var_21 += ((var_7 >> (-2340858505918713229 + 2340858505918713238)));
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 21;i_12 += 1)
    {
        arr_41 [i_12] = (((arr_40 [i_12]) & (((arr_39 [i_12]) ? (var_10 + var_11) : 1496909219))));
        arr_42 [i_12] = (((min(-54, (arr_39 [i_12])))));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 16;i_13 += 1)
    {
        arr_46 [i_13] = (arr_1 [i_13]);
        arr_47 [i_13] = ((var_0 ? var_11 : ((-1347986745 ? 17207 : -27941))));
    }
    #pragma endscop
}
