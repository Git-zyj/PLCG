/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = (17 ? 2542455969 : 68);
        var_15 = max(((((~(arr_0 [i_0]))))), -1730405357);

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            arr_4 [i_1] [i_0] [i_1] = 41;
            var_16 = 41;
            arr_5 [10] [10] [i_0] = (58 ? 248 : var_7);

            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    arr_10 [i_0] [i_3] = (min(((((max(var_13, (arr_6 [i_1 - 2])))) ? ((min(-25, -1730405373))) : (arr_6 [11]))), -1730405376));
                    var_17 = (max(var_17, ((max((((arr_6 [i_1 - 2]) ? ((min(-1445615382, (arr_3 [6] [i_1])))) : ((31 ? 23 : var_13)))), (arr_9 [i_3] [i_1 + 1] [i_1] [i_1] [i_1] [i_1]))))));
                    arr_11 [i_0] [i_0] [i_2 + 1] [i_0] = ((((arr_2 [i_0]) || ((max(-18314, 1730405346))))));

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_0] [12] [i_4] = (min(-31, ((-1730405357 ? 3515847025 : 1730405357))));
                        var_18 = ((arr_9 [i_1 - 1] [i_2 - 1] [i_0] [i_2 - 1] [i_4] [i_2]) ? (!var_13) : (((arr_9 [8] [i_2 + 1] [i_0] [i_2 + 1] [8] [i_4]) ? -1 : 5)));
                        var_19 = (max(var_19, ((max(-41, (arr_7 [i_2 + 1] [i_2 - 1] [i_1 + 3] [i_1 - 1]))))));
                        arr_15 [i_2] [i_0] = -6;
                    }
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        arr_18 [i_3] &= var_10;
                        var_20 = (min((((~(arr_3 [i_2 - 1] [i_0])))), 7995178802590560084));
                        var_21 = (((2261493130 ? (arr_13 [i_2] [i_2 + 1] [i_2] [5] [i_2] [i_2 + 1] [i_2]) : (!var_0))));
                        arr_19 [i_5] [i_0] [i_0] [i_1] [i_0] [i_0] = -1730405344;
                    }
                }
                arr_20 [i_0] = 2261493109;
                var_22 = (min((min(1023, (min((arr_17 [4] [i_0]), 2033474162)))), 2033474179));
                arr_21 [i_1 - 2] [i_1] [i_0] = (((!61032) ? var_11 : ((min(27, (arr_2 [12]))))));
                var_23 ^= ((((((-501685898 && 576460752303423487) ? -1176141830 : 2261493139))) ? (((arr_6 [i_0]) ? ((((!(arr_3 [i_0] [i_1]))))) : (max(-1730405346, 2033474145)))) : (arr_1 [i_1])));
            }
        }
    }
    var_24 = (var_4 && 5782562964774036697);
    var_25 = ((max(((max(170, 32757))), (min(15872, 33)))));
    #pragma endscop
}
