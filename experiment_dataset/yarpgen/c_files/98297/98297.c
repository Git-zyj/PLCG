/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((6908368380175717917 - 6908368380175717917), ((((var_4 - 1) ? (var_10 - var_6) : var_1)))));
    var_14 -= ((((((((-6908368380175717909 ? var_10 : 70))) ? 255 : 64512))) ? (((((var_0 ? var_10 : var_8)) - ((var_11 ? var_5 : var_12))))) : ((~(max(67, 557635079))))));
    var_15 = var_6;

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_16 = (arr_1 [i_0]);
        arr_2 [3] = ((min((arr_0 [i_0 + 2] [i_0]), 17654463326228543699)));

        for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
        {
            var_17 = (((((((((arr_1 [i_1 - 1]) & (arr_1 [i_1 + 1])))) ? (var_3 ^ 3737332216) : var_9))) ? (~1290149034) : var_0));
            var_18 *= ((1 ? ((((arr_4 [i_1 - 1] [i_0 + 4]) ? (arr_0 [i_1 - 1] [i_0 - 1]) : var_12))) : var_7));
            var_19 = (((~1019) < ((var_10 ? (arr_3 [i_1 - 2] [i_1 + 2]) : 1))));
        }
        for (int i_2 = 2; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_20 = 792280747481007928;
            arr_8 [i_2] [i_2] [i_2] = ((((arr_7 [i_0 + 4] [i_0 + 2] [1]) <= (arr_7 [i_0 + 4] [i_0] [i_0]))) ? (arr_7 [i_0 + 1] [i_0] [i_0 + 2]) : ((-394620368 ? (arr_7 [i_0 + 3] [i_0] [i_0]) : 1729382256910270464)));
        }
        for (int i_3 = 2; i_3 < 10;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                arr_13 [i_0 + 3] [i_3] = (0 && var_5);
                var_21 = ((((var_12 ? (arr_10 [i_3] [i_3 - 1] [i_3]) : (192 <= 64512))) < (((var_2 && 248) ? (((arr_5 [i_4] [i_0] [i_0]) ? var_6 : 1)) : 1))));
                arr_14 [i_0] [i_3] [i_4] [i_3] = 9223372036854775807;
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_22 *= (max((((arr_10 [3] [i_3 - 2] [i_3 - 1]) ? (14596 == -957299007744456838) : var_2)), var_10));
                            arr_20 [i_0] [i_3 + 1] [i_4] [i_5] [i_6] &= (((((((20830 < (arr_10 [10] [10] [10]))))) * (arr_5 [i_0 + 2] [i_0] [i_0 + 2]))));
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                var_23 = ((!(((((min(var_4, var_4))) ? (arr_5 [i_7] [i_3 + 1] [i_0]) : (arr_9 [i_0] [i_0]))))));
                var_24 = (max(var_24, ((((((((arr_19 [i_0] [i_0] [i_0] [i_0 + 4] [i_0] [i_0 - 1] [i_0]) || -398909147776449918)) && ((min(var_9, (arr_19 [i_0] [i_3] [i_3] [i_7] [i_3] [i_3] [2])))))) ? (arr_10 [3] [5] [i_7]) : (((!((!(arr_7 [i_0] [3] [i_7])))))))))));
            }
            var_25 = (min(var_25, var_4));
        }
        var_26 = (arr_22 [i_0 + 1] [i_0 - 1]);
    }
    var_27 = ((1 ? var_3 : var_10));
    #pragma endscop
}
