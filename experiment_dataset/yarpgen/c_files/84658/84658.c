/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1;
    var_15 = var_13;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_0] = ((((((-387644146 ? (arr_0 [i_1 + 2] [i_0 - 1]) : (arr_0 [i_1 + 1] [i_0 - 1]))) + 2147483647)) << (((((-498741298 / 1) + 498741301)) - 3))));
            arr_7 [i_0] [i_0] = (!1);
            var_16 = min(((1 ? 1 : var_7)), (arr_2 [i_0] [i_1 + 2] [i_0]));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1 + 1] [i_0] = 238;
                        arr_14 [i_0 - 1] [i_0 - 1] [i_2] [i_0] = (24379 != 260407134);
                        var_17 += var_3;
                        var_18 = (min(((max((arr_0 [i_1 - 1] [i_3 - 1]), (arr_0 [i_1] [i_0 - 1])))), (((arr_5 [i_1 + 2]) ? 92 : 488487033))));
                    }
                }
            }

            /* vectorizable */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                var_19 ^= (1263451315 <= -29);
                arr_17 [i_0] [i_1 + 2] [i_0] [i_4] = (41167 >> 1);
            }
        }
        arr_18 [i_0] [i_0] = var_2;
        var_20 = (min(var_20, ((((var_10 != (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
        var_21 = (((~var_0) != ((((((arr_16 [i_0] [i_0] [i_0 - 1]) >> (-111 + 134))) >= (arr_11 [i_0] [i_0 - 1]))))));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_21 [i_5] = ((208 ? ((min((var_6 == 117440512), (arr_4 [i_5] [i_5] [i_5])))) : ((min((4095 && 1), (max(1, var_5)))))));
        var_22 = (min(var_9, ((312089059 >> (165 - 158)))));
    }
    #pragma endscop
}
