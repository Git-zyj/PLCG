/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((max(var_16, var_16)))) < ((var_7 ? var_7 : 127)))) ? 17 : (~var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = var_4;
                var_19 = (42155 ? (((arr_2 [i_0]) ? var_4 : (arr_2 [i_0]))) : (var_13 < var_5));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((((arr_1 [i_2] [i_2]) ? 237 : (arr_0 [4]))))));
        var_21 = var_2;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_22 = var_8;
            arr_13 [i_3] [i_4] [i_3] = (((arr_11 [i_4] [i_3] [i_4]) >> (var_6 - 60035)));
            var_23 = var_1;
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_24 = (min(var_24, (((var_7 + (((var_3 ? var_10 : var_9))))))));

            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                var_25 = (arr_2 [i_3]);
                arr_20 [i_3] [i_5] [i_3] = ((var_8 * (arr_17 [i_6 + 2] [i_3] [i_6] [i_6 + 1])));
            }
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                var_26 = (arr_14 [i_3] [i_5] [i_7]);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_27 = (var_3 / (var_6 > 38981));
                            var_28 = var_16;
                        }
                    }
                }
                arr_30 [i_3] [i_7] = (((arr_5 [i_5]) ? var_11 : (39003 || -32750)));
                var_29 = (((arr_9 [i_3]) != ((var_14 ? var_13 : (arr_8 [i_3])))));
            }
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                var_30 &= (var_16 - (arr_15 [i_5] [i_10]));
                var_31 &= (((((-12385 ? 177811229024145838 : 19165))) ? (arr_29 [i_3] [i_3] [i_3] [12]) : ((var_8 ? var_12 : var_14))));
                arr_34 [i_3] [i_3] [i_10] [i_10] = ((var_5 << (var_7 - 7902508560041285802)));
            }
            var_32 = ((var_13 && (var_13 ^ 39009)));
            var_33 = ((-3374 ? 4144643734 : -5425507536797251711));
        }
        var_34 |= (((arr_1 [i_3] [i_3]) > (var_16 >= var_1)));
        var_35 = var_12;
        var_36 = 38986;
        arr_35 [i_3] = (arr_33 [i_3]);
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
    {
        arr_39 [i_11] = ((-6264713081769162127 / (arr_38 [i_11])));
        arr_40 [i_11] = (((arr_8 [18]) ? (((arr_1 [i_11] [i_11]) ? 3375 : var_11)) : (arr_27 [i_11] [12])));
    }
    var_37 -= (((min((((var_10 ? var_5 : var_14))), -5425507536797251688)) == (!-var_11)));
    var_38 = (max(((((var_4 / var_10) && (((0 ? -8774 : 3)))))), var_10));
    #pragma endscop
}
