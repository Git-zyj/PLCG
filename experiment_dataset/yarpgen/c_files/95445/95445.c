/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(0, 56660));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = arr_3 [i_0];

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((((max((min(var_13, var_11)), ((1 ? (arr_5 [i_0] [i_0]) : (arr_1 [i_0] [i_1])))))) ? ((((((min(-12408, var_11))) || ((max((arr_9 [i_0] [i_1] [i_2]), (arr_8 [i_0])))))))) : ((var_0 | (((arr_9 [i_0] [i_1] [i_2]) ? 4261082741643412003 : (arr_1 [i_0] [i_1])))))));
                    arr_11 [i_0] [i_0] [i_2] [i_2] = ((-var_12 + (max((arr_2 [i_0] [i_2]), var_2))));
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_20 = (max(((18446744073709551615 ? ((((arr_13 [i_0] [i_0] [i_0]) ^ (arr_13 [i_1] [i_1] [i_1])))) : (4261082741643412003 + 18446744073709551601))), ((((((var_4 ? 0 : var_12))) ? ((1 ? 1499397543 : (arr_4 [i_0] [i_0] [i_0]))) : (((var_4 ? var_13 : -2099200149))))))));
                    var_21 = (((min(1378151720, (arr_7 [i_3]))) | ((var_6 ? (arr_12 [i_0] [i_0] [i_1] [i_3]) : 3577515368))));
                    arr_15 [i_0] [i_1] [i_3] = var_15;
                    var_22 = (((min((max(var_0, var_11)), (((var_3 | (arr_13 [i_3] [i_1] [i_0])))))) & var_8));
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 15;i_6 += 1)
                            {
                                var_23 = (199 % 1499397520);
                                var_24 = (min(var_24, (arr_18 [i_0] [i_1] [i_4] [i_4] [i_6])));
                            }
                            for (int i_7 = 0; i_7 < 15;i_7 += 1)
                            {
                                arr_26 [i_0] [i_7] [i_4] = (((((var_17 >> (4261082741643412003 - 4261082741643411985)))) ? ((((var_1 && (arr_0 [i_0] [i_4]))))) : (arr_24 [i_0] [i_1] [i_4] [i_5] [i_5] [i_7])));
                                var_25 = ((min(var_11, var_14)));
                            }
                            for (int i_8 = 0; i_8 < 15;i_8 += 1)
                            {
                                var_26 = 17;
                                arr_31 [i_8] [i_5] [i_4] [i_4] [i_1] [i_0] = (((var_14 ? (var_16 ^ 4294967278) : (arr_27 [i_8] [i_5] [i_4] [i_1] [i_0]))));
                            }
                            var_27 = ((((1499397543 ? 0 : var_8)) >= ((-(arr_25 [i_0] [i_0] [i_0] [i_0])))));
                        }
                    }
                }
                var_28 += ((65535 || ((((((arr_19 [i_0] [i_1] [i_1] [i_1]) - 46)) ^ (((var_3 ? var_3 : var_3))))))));
            }
        }
    }
    var_29 = (max(var_0, ((((var_16 >= var_1) && ((min(var_15, 0))))))));
    var_30 = (max(var_30, ((((max(((var_13 ? 9223372036854775806 : var_0)), (var_6 - 4294967293))) >= (max((var_6 / 1), ((var_7 ? var_2 : var_12)))))))));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            {
                arr_38 [i_10] [i_9] [i_9] = var_1;
                arr_39 [i_9] = (((((0 ? 22875 : (-32767 - 1)))) ? (max(31646, (arr_32 [i_9]))) : ((((((arr_37 [i_10] [i_9]) ? (arr_37 [i_9] [i_10]) : (arr_34 [i_10])))) ? -12408 : ((22526 << (var_15 - 46411)))))));
            }
        }
    }
    #pragma endscop
}
