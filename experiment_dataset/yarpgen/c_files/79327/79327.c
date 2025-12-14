/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((10 ? 1 : 238)))));
                var_20 *= ((((((arr_0 [0] [i_0 - 2]) ? 10 : (arr_2 [i_1 + 1] [4])))) <= (((arr_3 [i_1 + 2] [i_0 - 3] [i_1 - 1]) - (arr_2 [i_1 - 1] [18])))));

                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    var_21 = (arr_1 [i_0]);
                    var_22 = (min((((125 ? 10 : 31))), ((16 ? ((16383 ? (arr_4 [i_2] [i_2] [i_1 - 1] [i_0]) : (arr_0 [i_0] [i_0]))) : (-68 || 2394747168)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                {
                    arr_8 [i_0 + 1] [i_0] [i_3] [i_3] = ((254 <= 241) ? (arr_3 [i_0 - 2] [i_0 + 1] [i_1 - 1]) : (arr_3 [i_1 - 1] [i_1 - 2] [i_0 + 1]));
                    arr_9 [i_0] = (((((arr_7 [i_0 + 1] [22] [i_3]) || (arr_7 [i_0 - 3] [i_1] [i_1])))) / (arr_6 [i_0] [i_0 - 3] [i_1] [i_3]));
                }
                for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                {
                    var_23 = (!-125);
                    arr_12 [i_0] [i_1] [i_0] = (((-17 / (arr_3 [i_0] [i_1] [i_1]))));
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    var_24 = (arr_4 [i_0] [i_0] [i_0] [i_0]);
                    var_25 *= ((((((-47 ? -12516075 : 3932870389)))) ? ((min((!2428), 75))) : ((3287569312 ? ((-12516075 ? 1007397978 : (arr_6 [i_1] [i_1 - 2] [i_5] [i_1 - 2]))) : (((3584 ? -125 : 1)))))));
                    arr_17 [i_0] [i_5] = ((246 ? 232 : 14));

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_26 = ((~(((arr_11 [i_0 + 1]) ? (arr_11 [3]) : (arr_11 [i_0])))));
                        var_27 = 0;
                        arr_22 [i_6] [i_1] [i_6] [i_6] &= 3929940108;
                        var_28 = ((+(((((arr_19 [i_0 - 1] [i_1] [i_1] [i_5] [i_6] [i_1]) <= 3221512051)) ? (((1007397957 <= (arr_5 [i_6] [i_6] [i_0] [9])))) : (arr_2 [i_0] [i_0])))));
                    }
                }
                arr_23 [i_0] = ((32 <= ((~((min((arr_2 [i_0] [i_0]), (arr_6 [i_0] [i_0 - 3] [i_0] [i_0 - 3]))))))));
            }
        }
    }
    var_29 |= (var_3 & var_2);
    #pragma endscop
}
