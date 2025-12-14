/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = (2143635189 - (((249 > 4089993210170408331) ? 33 : 247)));
        arr_2 [i_0] [i_0] = ((((arr_1 [i_0] [i_0]) ? ((var_0 ? 1 : -1768322169)) : ((min(var_10, (arr_1 [i_0] [i_0])))))));
        var_16 = 6;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_7 [i_0] [i_1] = -5013967880079058148;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_3] = (arr_10 [7] [i_3 + 1] [i_3 - 2] [i_3]);
                        arr_14 [i_3 - 2] [i_0] [i_3] = (!1);
                        arr_15 [i_0] [i_0] [i_0] [i_0] [5] [1] = (!-20185);
                        var_17 = -24692;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        var_18 ^= (1246579263 != 0);
                        var_19 = 247;
                        var_20 *= (((arr_8 [6] [6] [2] [i_4]) < (!var_3)));
                    }
                }
            }

            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                arr_23 [i_0] [i_1] [i_6] [i_0] = ((-(arr_17 [i_0])));
                arr_24 [i_0] [1] [i_6] [1] = ((1 ? (var_10 ^ 890338600) : var_5));
                arr_25 [i_0] [i_0] [i_6] = 0;
                var_21 = (((var_6 || var_13) && 6274065346444634505));
                var_22 |= (~289285418);
            }
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                var_23 = (((18446744073709551615 > var_10) < (~var_14)));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 8;i_9 += 1)
                    {
                        {
                            var_24 = ((var_3 && 289285398) > (10 < var_5));
                            var_25 = ((289285379 ? 2837976534 : -var_2));
                            var_26 ^= (~0);
                            arr_35 [i_0] [i_1] [2] [i_7] [i_8] [i_9] = 1;
                            var_27 = 0;
                        }
                    }
                }
                var_28 = (-24728 ^ var_8);
                var_29 *= 1;
                var_30 = 32767;
            }
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    arr_42 [i_0] = var_6;
                    var_31 = ((~(arr_16 [i_0] [i_11] [i_0])));
                }
                var_32 = (min(var_32, ((((((var_4 ? -1207666611 : var_3))) ? (!2147483647) : 1)))));
            }
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                arr_46 [i_0] [i_0] [i_0] = ((((1456990759 > (-2147483647 - 1))) ? -1327374779292175372 : (arr_39 [i_1] [i_1] [i_1] [1] [i_1])));
                var_33 = (((arr_41 [i_0] [i_1] [i_0] [i_0]) != (arr_36 [i_0] [i_12])));
                arr_47 [i_12] [i_0] [i_0] = ((245 ? var_8 : (arr_41 [i_0] [i_1] [i_0] [i_0])));
                arr_48 [i_0] [i_1] [i_1] = ((!(!var_3)));
            }
            var_34 ^= (1995353609111627087 > (arr_11 [i_0] [i_0] [2] [i_0] [i_0] [i_0]));
        }
        var_35 = ((((arr_45 [i_0] [i_0] [i_0]) <= 2147483647)));
    }
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        var_36 = ((((-((var_13 ? var_8 : 2844574681241667913)))) >> (1126224387589935548 - 1126224387589935546)));
        var_37 = ((((var_12 ? var_10 : (arr_50 [13] [13]))) ^ (~1)));
    }
    var_38 = var_7;
    var_39 = (((1 ? -var_7 : var_3)));
    #pragma endscop
}
