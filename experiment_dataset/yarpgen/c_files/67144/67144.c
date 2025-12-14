/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = var_10;
        arr_2 [i_0] = ((min(137002785, 0)));
        arr_3 [i_0] = (max((max(2555531434, (~-137002786))), (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_1] = (max((((((var_6 ? 46656 : var_10)) / 137002800))), (arr_1 [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_12 ^= (3637645316 / 657321979);
                            var_13 = ((-32767 ? (arr_10 [i_3]) : ((~(arr_11 [i_0])))));
                        }
                        var_14 ^= var_0;
                        arr_15 [i_0] [i_2] [i_2] [i_3] [i_1] [i_0] = (min((((arr_0 [i_1]) | (arr_13 [i_2]))), (arr_10 [i_0])));
                    }
                }
            }

            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                var_15 -= var_4;
                var_16 *= var_1;
            }
            var_17 = (min((((-123 ? 3637645317 : (arr_11 [1])))), ((((arr_16 [i_0] [i_0] [1] [i_0]) / var_0)))));
        }
        var_18 = (arr_19 [i_0] [i_0] [i_0] [i_0]);
    }
    var_19 *= (min(0, (-32767 - 1)));
    #pragma endscop
}
