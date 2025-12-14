/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(((min(634, 238054463))), ((623 ? 72 : var_11))))) ? var_0 : (min(var_4, var_4))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [5] [i_1] [i_1] = (((max((arr_0 [i_0]), (arr_6 [i_0 - 3] [i_0 - 3])))) ^ -464907405917258559);
                var_17 = var_0;

                for (int i_2 = 1; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    arr_12 [i_0] [i_0 - 1] [i_2 + 2] = (arr_4 [i_2 - 1] [i_2 + 1] [i_1]);
                    var_18 = 755033878;
                }
                for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    var_19 = (arr_0 [i_0]);
                    var_20 = (arr_5 [i_0 - 3] [i_0 + 1] [i_3 + 1]);
                }
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_21 = ((464907405917258559 ? 17647 : ((-30095 - (arr_14 [0] [i_0 - 1] [i_0 - 2] [i_0])))));
                    var_22 = ((((((arr_13 [i_4] [i_1] [i_0] [i_0]) ? (arr_4 [i_4] [i_1] [i_0]) : (arr_3 [i_4] [2]))) | (arr_10 [i_4] [i_1] [i_0]))) ^ ((((arr_16 [i_0] [i_1] [i_0]) ? (arr_3 [i_0] [i_1]) : (((arr_0 [i_0]) << (var_5 - 60)))))));
                    var_23 = (min(var_1, (min((((667276402636760940 ? 30095 : (arr_16 [i_4] [i_1] [i_0])))), (min((arr_2 [i_0]), (arr_6 [8] [i_1])))))));
                }
                var_24 = (min((((3584 ? -1323592273 : 1))), (arr_4 [i_1] [i_0 + 1] [i_0 - 3])));

                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    var_25 = (min((((max((arr_1 [i_0 - 1]), (arr_8 [i_0] [i_1]))))), (arr_18 [i_5] [i_1] [i_5])));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_26 = (max(0, -609));
                                var_27 = (((arr_11 [i_7] [i_1]) ? (((max(-634, 101)))) : (((arr_25 [i_0] [i_0 - 3] [i_5 + 2] [8] [i_7 - 1]) ? var_2 : var_15))));
                                var_28 = -1808248570;
                                var_29 = (((max((((arr_22 [i_7] [i_5] [i_5] [i_0]) ? var_14 : (arr_25 [i_0] [12] [i_5] [i_1] [i_0]))), ((max(6630, 1))))) - ((max(((var_4 ? (arr_15 [i_0] [i_1]) : (arr_19 [i_0] [i_0]))), (((arr_10 [i_6 + 1] [i_1] [i_1]) ? (arr_24 [i_6] [i_5] [i_0]) : (arr_22 [i_0] [6] [i_5] [11]))))))));
                                var_30 = ((min((arr_24 [i_1] [i_5 + 1] [4]), (arr_23 [i_1] [i_6 + 1]))));
                            }
                        }
                    }
                    var_31 = (!((max((arr_8 [i_5 - 1] [i_0 - 1]), (arr_8 [i_5 + 2] [i_0 - 2])))));
                }
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    arr_29 [i_1] [i_8 - 1] = (arr_9 [i_1] [i_1] [i_8]);

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_32 = (arr_21 [i_0] [i_0 + 1] [i_1] [i_1] [i_8] [i_9]);

                        for (int i_10 = 3; i_10 < 12;i_10 += 1)
                        {
                            arr_34 [i_10] [i_1] [i_10] = (min((arr_22 [i_0] [i_1] [i_10] [i_9]), var_2));
                            arr_35 [i_8] [i_8 - 1] [i_10] [4] [i_10] [5] = ((1 ? ((-4566177921076318619 ? -8237849641294145803 : (arr_3 [i_0] [i_0]))) : 4566177921076318638));
                            var_33 = (max(8958479597494841563, (((min((arr_0 [i_0]), (-127 - 1)))))));
                            arr_36 [i_10] [i_10] = ((((-6360053614950646476 ? var_4 : 58588))));
                            var_34 = (min((((0 ? 930859177 : -8355464409773920162))), (min(var_4, (((-2083 ? 30094 : var_7)))))));
                        }
                        arr_37 [5] = var_2;
                        var_35 = (((((-(arr_9 [i_0] [i_8] [i_9])))) ? (arr_23 [i_9] [i_0]) : (max((((arr_4 [i_8] [i_1] [i_0 - 3]) & var_5)), (arr_1 [i_0])))));
                    }
                }
            }
        }
    }
    var_36 = ((((1 >> (124 - 104))) < (max(var_8, ((var_4 ? var_10 : var_2))))));
    var_37 = ((-27 ? var_7 : (min(58588, ((6360053614950646487 ? var_8 : -464907405917258563))))));
    #pragma endscop
}
