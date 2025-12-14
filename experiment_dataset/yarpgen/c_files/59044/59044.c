/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((((var_9 && (((37854 ? var_3 : var_16)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((((((var_3 ? -0 : (arr_1 [i_1 - 2] [i_1 - 3])))) ? ((((~3348073663) ? ((min(37854, 23116))) : (arr_1 [i_1 + 3] [0])))) : (min(27681, 1483927938)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_21 = (min(var_21, var_12));
                            var_22 = ((+((max((arr_4 [i_1 + 2] [i_1] [i_1 - 1]), (arr_4 [i_1 - 1] [i_1] [i_1 + 1]))))));
                            var_23 = (~16876436544437184731);
                            var_24 = -2072864121;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 7;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_25 = (max(var_25, ((min(((2072864116 ? 5788205037777717065 : 2292)), (((!((min(3977898702, (arr_7 [i_0] [1]))))))))))));
                            var_26 = 2283;
                        }
                    }
                }
                var_27 += ((arr_9 [i_0] [i_0] [i_1]) ? (max(16876436544437184731, (min(35548, 4239312542400862539)))) : (arr_5 [i_0] [i_1] [i_1]));
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 4; i_6 < 20;i_6 += 1)
    {
        var_28 += var_12;
        arr_19 [9] = 37838;
    }
    #pragma endscop
}
