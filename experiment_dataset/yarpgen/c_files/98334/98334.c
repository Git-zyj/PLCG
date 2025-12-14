/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 = (((~2147483647) % (((22 ? (-127 - 1) : 3694)))));
    var_14 = (max(1, 15179320692317166572));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_15 = (arr_1 [i_0] [i_0]);
        var_16 = (min(35131, (arr_0 [i_0 - 1] [i_0])));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_17 = (max((arr_5 [i_0]), 18175));
                            var_18 = (-3547172390484554500 < 2447508493);
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_22 [i_0] = var_6;
                            arr_23 [i_0] [i_0] [i_1] [i_5] [i_6] [i_0] [i_7] = ((-(min(((max(204, (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))), ((-(arr_1 [i_7] [i_0])))))));
                            var_19 = ((!(arr_19 [i_0] [i_1] [i_5] [i_1] [i_6])));
                            arr_24 [i_0] [i_1] [i_5] [i_0] [i_7] = 234;
                        }
                    }
                }
            }
            var_20 = 3041261879;
            arr_25 [i_0] [i_0] = -32;
            var_21 = ((((!(arr_16 [i_0]))) ? (max(4294967277, (arr_2 [i_0]))) : ((((48566 == ((0 ? 22716 : 1433252))))))));
        }
    }
    #pragma endscop
}
