/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = ((((min(0, 70))) ? ((var_0 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : (((!(arr_0 [i_0] [i_0]))))));
        var_15 = ((((max((arr_3 [i_0] [i_0]), (((arr_2 [i_0] [i_0]) - var_12))))) || (!var_5)));
    }

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_16 -= (max(var_11, ((((var_8 != 17727) % -17745)))));
        arr_6 [i_1] [i_1] = ((min(((10 >> (-2 + 18))), ((((arr_1 [i_1]) >= (arr_2 [i_1] [i_1])))))));
        var_17 = ((((max(1, 65519))) != ((((min(108, 47501))) ? var_13 : (((arr_0 [i_1] [i_1]) >> (((arr_5 [i_1] [i_1]) - 5826))))))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (max(-2, (max((((arr_7 [i_2] [i_2]) ? 820808784643607343 : var_0)), ((((arr_3 [i_2] [i_2]) - -354720078)))))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_18 += (((((25675 ? 163 : 17726))) || ((max((arr_9 [i_2]), var_7)))));

            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                var_19 = (min(var_19, (((((26 ? 223 : 2213122109)) >= 3638657721)))));

                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    var_20 = (min(var_20, ((-((min((arr_1 [i_5]), 36)))))));
                    arr_18 [i_2] [i_3] [i_3] [i_4] [i_5] = (16 ? 56234 : -2147483643);
                    var_21 = (arr_2 [i_2] [i_5]);
                    var_22 |= var_12;
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                {
                    var_23 = (max((max(3558871443, -221099657)), (var_1 <= 253)));
                    var_24 = (max((((arr_0 [i_4 - 1] [i_2]) & var_4)), ((((arr_0 [i_4 - 2] [i_3]) ? 9293 : (arr_0 [i_4 + 1] [i_4 + 1]))))));
                }
                arr_22 [14] |= ((var_2 <= (((arr_21 [i_2] [i_2] [i_2] [i_2]) ? (arr_21 [i_2] [i_3] [i_3] [i_3]) : (arr_21 [i_2] [i_2] [i_3] [i_4])))));
            }
            var_25 = (max(56237, (((((arr_3 [i_2] [i_3]) <= (arr_13 [i_2] [i_2] [10]))) ? (arr_2 [i_2] [i_3]) : ((-24064 ? -1691373107872736441 : 47501))))));
            var_26 = -1691373107872736431;
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            var_27 = (56230 >= -13680);
            arr_25 [i_2] [i_2] [i_2] = var_1;
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            arr_29 [i_2] [i_8] = (min((arr_15 [i_2] [6]), (max((arr_27 [i_8]), (min((arr_8 [i_8]), var_11))))));
            var_28 = (min((arr_2 [i_2] [i_2]), (47501 <= 3167304671)));
            var_29 = (((((~(arr_24 [i_2] [i_2] [i_2]))) + 2147483647)) >> (((max(var_2, var_12)) - 724797358)));
            var_30 = (max((arr_0 [i_2] [i_2]), 1));
            var_31 = 1;
        }
        var_32 = 25;
    }
    #pragma endscop
}
