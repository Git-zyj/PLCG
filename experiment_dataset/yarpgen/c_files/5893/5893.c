/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((3940845359 >= var_9), (min((354121963 <= var_7), var_16))));
    var_20 = (min(var_5, ((3940845353 ? 1 : 3469208537))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = arr_1 [i_0];
        var_22 = ((!(arr_0 [i_0])));

        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_23 = (max((min(250, (arr_2 [i_1 - 2]))), (arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                arr_8 [i_0] [i_0] [i_0] = 1;
            }
            var_24 = ((1 ? 1 : 1));
            arr_9 [i_1] [i_1] = (arr_5 [i_0] [i_0] [i_0]);
            var_25 = (!var_5);
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_13 [i_0] = ((((arr_0 [i_3]) ? (arr_6 [i_0] [i_3] [i_3]) : (min(2201317683, 57693)))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_22 [i_6] [i_5] [i_4] [i_3] [i_0] = (max((((arr_18 [i_3] [i_3] [i_4] [i_5] [i_6]) << (((arr_10 [i_0] [i_3] [i_4]) - 2498877589)))), (arr_18 [i_0] [i_3] [i_4] [i_5] [i_6])));
                            var_26 = 1;
                            arr_23 [i_0] [i_5] [i_6] = ((!((max(var_17, var_0)))));
                        }
                    }
                }
            }
            var_27 = var_16;
            var_28 = (((((arr_16 [i_0] [i_3] [i_3] [i_0] [i_0]) < 3940845368)) ? (arr_19 [i_0] [i_0] [i_3] [i_3]) : (((arr_2 [i_0]) ^ (arr_12 [i_0] [i_3] [i_3])))));
            var_29 = 354121951;
        }
        arr_24 [i_0] = 7;
    }
    #pragma endscop
}
