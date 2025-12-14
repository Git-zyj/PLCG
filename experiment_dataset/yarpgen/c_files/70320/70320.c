/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((max(var_0, -3656903920643437664)))), ((936 ? var_11 : ((var_12 ? var_2 : var_5))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_10 [7] [i_1] [18] [12] [i_1] [1] = (((16947 % 1) + 3656903920643437689));
                        var_15 = (i_1 % 2 == zero) ? (((arr_2 [18] [18] [2]) << (((arr_5 [14] [i_1] [i_1] [8]) - 5606363701054893881)))) : (((arr_2 [18] [18] [2]) << (((((arr_5 [14] [i_1] [i_1] [8]) - 5606363701054893881)) - 7284198080079415414))));
                    }
                }
            }
        }
        var_16 = 1;

        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            var_17 = (min(var_17, ((var_7 * (arr_11 [16] [8])))));

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                arr_16 [4] [19] = 3656903920643437654;
                var_18 = -5422857895656723716;
                var_19 = ((((var_8 ? var_9 : 4287192922))) || (arr_5 [20] [i_5] [i_5] [8]));
            }
            arr_17 [1] = (((-9223372036854775798 + 9223372036854775807) >> (3656903920643437679 - 3656903920643437667)));
            var_20 -= (~5985);
        }
        var_21 = ((-9194944501324074977 ? (-8085629509765847612 | 5947) : ((((var_13 && (arr_9 [16] [16] [17] [8] [5] [15])))))));
    }
    var_22 = var_12;
    var_23 &= var_11;
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                {
                    arr_27 [i_8] [i_8] = (((((!(-2147483647 - 1)))) >> (var_13 + 26979)));
                    var_24 = (max((((((((arr_12 [2] [1]) - (arr_19 [0])))) - ((var_9 ? 3656903920643437660 : var_11))))), 6920948507668527595));
                }
            }
        }
    }
    #pragma endscop
}
