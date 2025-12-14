/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_12 -= (((((8373 ? (!-8437266085675883441) : ((min(var_1, -126)))))) ? ((max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 4])))) : (arr_0 [i_0 + 3])));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_13 = ((((min(21357, 29899))) - ((((84 ? 1170 : -16920))))));

            for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
            {
                arr_8 [i_0] [i_0] [i_1] [i_2] = (arr_6 [i_0] [i_0]);
                arr_9 [i_0] [i_0] [5] = (((!(arr_5 [i_2] [i_0]))) ? (((arr_3 [i_0 - 1] [i_1]) ? -84 : -564)) : (((!2556764914880911644) ? (((26796 ? 108 : 56103))) : 5696780931024894410)));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    var_14 = arr_7 [i_1];

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_15 = ((-18127 ? -116 : -29900));
                        var_16 = (arr_12 [i_5] [i_3] [i_1] [i_0]);
                    }
                    for (int i_6 = 3; i_6 < 13;i_6 += 1)
                    {
                        arr_22 [i_0] [i_6] [i_6] [i_0] [i_6] = 29899;
                        var_17 = (((-1 - 22937) ? (arr_18 [i_6 + 3] [10] [i_3] [i_3] [i_0] [i_0]) : (((-108 || (arr_15 [1] [i_0] [i_1] [i_0]))))));
                        var_18 += (arr_4 [i_0 - 2] [i_0] [i_0]);
                        var_19 -= (arr_17 [i_4] [i_4] [i_1] [i_0 + 3]);
                        var_20 = (arr_12 [14] [i_4 - 2] [13] [1]);
                    }
                }
                arr_23 [8] [i_1] = (arr_3 [5] [i_0]);
            }
            var_21 += (((arr_13 [i_0] [i_0] [i_0]) < 10062));
            arr_24 [i_1] [i_1] = ((-((-(min(-9208760276573416189, -21762))))));
            var_22 = (((((var_3 ? (min(14, 1693566978966700968)) : (max((arr_16 [10]), (arr_3 [i_0] [6])))))) ? 22937 : (arr_7 [i_0])));
        }
        var_23 = -20212;
        arr_25 [i_0] [i_0] = (arr_5 [i_0] [i_0]);
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        arr_30 [i_7] = (arr_28 [14]);
        arr_31 [i_7] [i_7] = (arr_27 [i_7]);
    }
    var_24 = (!var_9);
    #pragma endscop
}
