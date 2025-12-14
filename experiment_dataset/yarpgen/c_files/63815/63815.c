/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((~((211 ? 177 : var_1))))) ? 5564982783745568455 : -102));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                        {
                            arr_15 [5] [5] [i_2] [i_2] [5] [i_2] [5] = ((((((arr_7 [i_0] [i_1] [i_0] [i_0]) ? 1 : 3192947693))) ? 1 : (((!(((6199122552346376699 ? 7767759157628211236 : (-127 - 1)))))))));
                            var_11 |= ((((max((min(-7767759157628211237, -10126)), ((-7767759157628211236 ? var_7 : var_3))))) ? (max(-10126, (((arr_2 [i_0] [i_0] [i_0]) ? var_5 : var_3)))) : 246));
                            arr_16 [i_2] [i_2] [i_2] = ((var_3 ? (arr_3 [i_0]) : var_5));
                            var_12 ^= (min((((((var_0 ? var_5 : 239))) ? (arr_9 [i_3] [i_1]) : (min(var_6, 0)))), 16515072));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_13 = ((-7767759157628211244 ? ((var_2 ? -66 : -29671)) : 29674));
                            var_14 = (max(var_14, (((!((((arr_7 [i_0] [i_1] [i_2] [i_0]) ? -48 : var_7))))))));
                            arr_20 [i_0] [i_0] [i_2] [i_2] [i_5] [i_2] [i_5] = var_2;
                            var_15 = (min(var_15, (((~((var_3 ? -10126 : -18)))))));
                            var_16 = ((~(((arr_12 [i_1] [3] [i_3]) ? (arr_18 [i_0] [i_0] [i_2] [i_0] [i_5]) : (arr_6 [i_3] [i_3] [4] [i_3])))));
                        }
                        arr_21 [i_0] [i_1] [i_0] [i_3] [i_3] = 3629;
                    }
                }
            }
        }
        arr_22 [i_0] [i_0] = (-9223372036854775807 - 1);
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        arr_26 [i_6] = var_4;
        arr_27 [i_6] = var_0;
        var_17 = (min(9, (((arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) ? var_0 : (arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))));
        var_18 = ((((min(15960238295237642813, 5913))) ? (arr_18 [i_6] [i_6] [i_6] [2] [i_6]) : ((((!(!7801)))))));
    }
    var_19 = var_9;
    #pragma endscop
}
