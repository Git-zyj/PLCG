/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = (min((((((min((arr_0 [i_0]), (arr_0 [3]))))) * (arr_1 [i_0]))), var_3));
        var_12 *= (~124);
        arr_5 [i_0] [i_0] = (max((arr_0 [i_0]), (arr_3 [i_0])));
        arr_6 [i_0] [i_0] = (min((((var_4 != (((min(135, 253))))))), -64906));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_9 [i_1] = -120;

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_12 [i_1] = 2250;
            var_13 = (((6 >= (arr_11 [i_2] [i_1] [i_1]))));
            var_14 = (arr_11 [i_1] [i_1] [i_2]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    {
                        var_15 = ((1073741792 ? (arr_18 [i_1] [i_4 + 1] [i_4 + 2] [i_4]) : 142));
                        arr_19 [i_1] [i_3] [10] [i_1] = (590071711 & 2147483647);
                    }
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        var_16 = 2147483647;
        arr_23 [i_5] = (((~-2147483627) ? 136 : (arr_21 [i_5])));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_17 = (min(var_17, ((((arr_26 [i_6]) ? (((!(arr_26 [i_6])))) : ((min((arr_25 [i_6]), (arr_25 [i_6])))))))));
        arr_27 [i_6] = ((-((-(arr_26 [i_6])))));
    }
    var_18 |= (~var_3);
    var_19 = var_5;
    var_20 *= var_1;
    #pragma endscop
}
