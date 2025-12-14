/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((max((max(-4751138016222723497, -3026968665603866012)), (min(274877906943, 32767)))), ((min((min(-937592185, 2013265920)), ((min(32767, 32767))))))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_16 -= -1;
        var_17 ^= 266306290;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_18 = -32744;
            arr_5 [i_0 - 2] = 160;
            var_19 = (min(var_19, 0));
        }
        arr_6 [i_0] = 361558269;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_20 = (max(((min(((min(1, 155))), (min(var_7, var_7))))), (max(((max((arr_4 [i_2]), 1449837385))), (min((arr_0 [i_2]), 228486040279749720))))));
        var_21 = (max((max(((min(var_10, (arr_2 [i_2] [i_2])))), (min((arr_3 [i_2]), 255)))), (max((min((arr_1 [i_2]), var_12)), ((min(var_5, (arr_8 [i_2]))))))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_22 = (max(var_22, ((min(((min((max(32750, (-9223372036854775807 - 1))), ((max((arr_0 [i_3]), -9265)))))), (min(((min(1, -1232392674))), (min(var_2, 2374989946)))))))));
        arr_12 [i_3] [i_3] = (min((min(((min(var_0, (arr_7 [8] [8])))), (min(var_8, (-9223372036854775807 - 1))))), ((max(((max(32764, -32759))), -2080166737)))));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                arr_18 [7] [i_4] [i_3] = -32767;

                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    arr_21 [i_3] [i_4] [i_5] = 146;
                    arr_22 [i_3] [i_4] [i_5] [i_6] = 146;
                }
            }
            arr_23 [i_4] [i_4] [i_4] = (min(((min(((min(120, (arr_7 [0] [0])))), (min(32743, (-32767 - 1)))))), (min(154, 7393376221077678616))));
            arr_24 [i_4] = max((max(((min(2305843009213693951, 432254651))), (max((arr_3 [i_3]), 432254655)))), ((max((min(var_11, var_10)), ((min((arr_11 [i_4]), var_8)))))));
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {
                        var_23 = (max((min((min(753726654, var_2)), ((min((arr_4 [i_3]), var_8))))), ((max((min((arr_15 [i_3] [i_7] [i_8] [i_9]), 32761)), ((max((arr_0 [i_3]), (-32767 - 1)))))))));
                        arr_36 [i_3] [2] [i_3] [i_8] [i_9] [2] = (min(((max((min(var_7, 747547967)), ((max(-19567, var_5)))))), (max(((min(32736, (arr_33 [i_3] [i_7] [i_8])))), (min(var_6, 8113031654467000165))))));
                        arr_37 [i_3] [i_7] |= min((max((max(var_11, var_0)), ((min(3, 3392493600))))), (min((min(var_11, (arr_29 [i_3] [i_7] [i_9]))), ((min((arr_13 [i_3] [i_9] [i_3]), (arr_11 [i_8])))))));
                    }
                }
            }
        }
    }
    var_24 = (min((max(((max(var_9, var_9))), (max(var_2, var_9)))), ((min((min(3932160, 1)), ((min(var_0, var_9))))))));
    #pragma endscop
}
