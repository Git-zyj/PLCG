/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((53 ? -1540140750 : 69)))));

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_15 = ((~(((arr_4 [i_0] [i_0 + 3]) ? ((max(16383, var_12))) : 32752))));
            var_16 = 18446744073709551602;
            var_17 = ((max(((max(var_11, 69)), (arr_4 [i_1 - 2] [i_1 - 2])))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_18 = (min(var_18, -64));
                            var_19 = (~var_2);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_20 = ((((((arr_12 [i_0] [i_5] [i_0] [i_0] [i_0] [i_0]) ? (arr_6 [i_0]) : (arr_10 [i_5] [i_5] [i_5] [i_5])))) || (arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [1])));
            var_21 = (max(var_21, ((((arr_7 [i_0]) == 5)))));
        }
        var_22 += var_1;
    }
    var_23 = var_12;
    #pragma endscop
}
