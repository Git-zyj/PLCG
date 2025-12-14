/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_4 ? (min(((max(1, 68))), var_9)) : var_2));
    var_13 = min(1, var_10);
    var_14 = (((((1 >> ((((max(-49, -68))) + 72))))) ? (((-121 < (-23 < var_5)))) : ((((min(var_6, var_6)) < 1)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    {
                        var_15 = ((!((max((min(var_4, var_6)), 1)))));
                        arr_11 [13] [5] [11] [i_2] [1] [1] = (((((~38) ? (var_7 == 0) : (~3731910615786734754))) != ((((!(((3039271679465626134 ? -104 : 1196891478)))))))));
                    }
                }
            }
        }
        var_16 = (-13 ? -5 : -6600215767270487224);

        for (int i_4 = 3; i_4 < 13;i_4 += 1)
        {
            var_17 *= ((((arr_1 [i_4 - 2]) != var_1)));

            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_22 [9] [1] [10] [15] [9] [7] = (-127 - 1);
                            arr_23 [14] [14] [9] [5] [1] [12] = ((((469405072 ? (arr_5 [0] [i_6]) : 38)) != (((min(var_3, -42))))));
                        }
                    }
                }
                arr_24 [9] [14] [7] = ((1196891473 || var_7) - 0);
                var_18 = (((((arr_18 [1] [1] [i_5 - 1] [i_4 + 1]) != -1196891478)) ? 6114900673980609460 : var_8));
                arr_25 [10] [5] [5] [4] = var_11;
                var_19 -= ((arr_14 [3] [1]) ? 17451448556060672 : ((((max(var_3, 2904287334))))));
            }
            var_20 = (min(var_20, ((((min(-4166704929, ((~(arr_0 [11]))))) < ((~((-1 ? var_11 : var_3)))))))));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_28 [15] [1] [i_8] = (((!((max(-1, 4250362391774878957))))));
            arr_29 [i_8] = (~2602636193);
            var_21 = (min(var_21, (~2066408367)));
        }
        arr_30 [6] = ((-(((arr_16 [13] [i_0]) ? (arr_16 [i_0] [i_0]) : 9223372036854775807))));
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        var_22 = (((~1) < (~var_6)));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    arr_38 [i_11] [1] [1] = (max(((~(arr_37 [1] [11] [18]))), var_0));
                    arr_39 [i_11] [2] = (arr_31 [1]);
                }
            }
        }
    }
    #pragma endscop
}
