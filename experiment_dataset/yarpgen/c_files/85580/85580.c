/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] = (max((-1718004389 / 1718004389), 126));
    }
    var_12 = var_0;
    var_13 = (min(-5326506153151559889, ((min(-66, (var_4 & 110))))));

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_8 [i_1] = (((4096 ? (arr_7 [i_1] [i_1]) : var_11)));
        arr_9 [i_1] = 0;

        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_20 [i_1] [i_4] [i_3] [i_2 + 1] [i_1] = (((-3279697636009287045 - 1775472384) ? ((((max(var_9, 32))) - var_0)) : (((~-215418510) ? ((0 ? var_1 : var_10)) : -215418501))));
                        arr_21 [i_1] [i_1] [7] [i_1] [i_1] [i_1] = ((-51 || (4 && -1016493666)));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_24 [i_1] [i_1] [6] [i_3] [i_1] [i_1] = ((-(arr_10 [6] [i_3] [8])));
                            arr_25 [0] [1] [i_1] [i_2] [i_2] = ((((((arr_5 [i_1] [i_3]) ? var_0 : 237))) ? (arr_11 [i_1] [10]) : (~236)));
                            arr_26 [4] [i_2 - 1] [i_1] [i_4] [i_5] = 21;
                            arr_27 [i_2] [i_1] [i_4] [i_2] = -32322;
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_32 [i_1] [4] [i_3] [i_1] [i_6] = (max((arr_0 [i_1] [i_1]), var_1));
                            arr_33 [i_6] [i_1] [i_3] [i_1] [i_1] = ((!(arr_7 [i_1] [i_1])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        arr_40 [0] [i_1] = (((max((!-22), ((53584 ? -7911313894850290036 : 1042488092)))) + 178));
                        arr_41 [i_1] [i_1] = (--3773686400910596048);
                        arr_42 [i_8] [i_1] [i_1] [i_1] = (((+(((arr_6 [i_2 - 2]) ? var_3 : 195)))) & var_6);
                    }
                }
            }
        }
        var_14 = ((((((arr_16 [4] [i_1]) ? 68 : var_3)) / 318071541)) >> (max((((!(arr_1 [i_1])))), (((arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) | 65535)))));
    }
    #pragma endscop
}
