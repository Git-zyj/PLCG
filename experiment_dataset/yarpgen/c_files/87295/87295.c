/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_11 [i_0 - 1] [i_1] [i_1] [i_3] = var_8;
                        arr_12 [i_0 + 1] [i_1] = ((var_12 ? (arr_0 [i_0 - 1] [i_0 - 1]) : (arr_0 [i_0 - 1] [i_0 - 1])));
                        var_18 = 1438081760;
                        arr_13 [i_1] [i_1] [i_3] = 27;
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_19 = 10353861451056258854;
                        var_20 = (arr_15 [i_1] [i_1]);
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_20 [i_0] [i_1] [13] = ((9223372036854775807 > (((arr_10 [i_0] [i_0] [i_0] [i_2] [i_1]) / var_14))));
                        var_21 &= (-1301229715 ? 1 : 1);
                        var_22 = -4294967295;
                        var_23 = (arr_5 [i_1] [i_0 - 1]);
                    }
                    arr_21 [i_1] [i_1] [i_1] = (((arr_3 [i_1] [i_2] [i_1]) ? (arr_3 [i_1] [i_0 - 1] [i_1]) : (arr_3 [i_1] [i_1] [i_1])));
                    var_24 = arr_9 [i_0 + 1] [i_0 + 1] [6] [i_0 + 1] [16] [i_0 - 1];
                }
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    arr_24 [4] [i_1] [i_1] [i_0] = var_5;
                    var_25 = (((min(127, 23129))) ? (!var_17) : (((!(arr_23 [i_1] [i_1] [i_1])))));
                    arr_25 [i_1] = (arr_5 [i_1] [i_6 + 1]);
                }
                var_26 = ((4294967295 ? 125 : 22682));
                var_27 = (arr_8 [8] [i_0] [8] [i_0] [i_1]);
                arr_26 [i_1] = ((!(((53592 ? (min((arr_19 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]), 1)) : 127)))));
                var_28 = 8092882622653292762;
            }
        }
    }
    var_29 = (min(var_29, (!22942)));
    #pragma endscop
}
