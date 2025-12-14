/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~3739125980518006975);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 7;i_2 += 1)
                {
                    var_17 = ((((min((arr_7 [1] [4] [4] [i_0 + 2]), var_6))) ? (min(((max((-127 - 1), 4))), (((arr_6 [6] [6]) ? var_4 : var_11)))) : (arr_3 [4])));
                    arr_9 [5] [1] [i_2] [i_0] = (((1 * 22) ? ((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])))) : (max(var_2, (arr_3 [i_0])))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_18 = ((arr_10 [i_3] [1] [i_0] [i_1 - 1] [i_0]) ? var_8 : (((arr_11 [i_3] [i_2] [i_1] [i_0]) ? (arr_6 [i_0] [i_2]) : 4)));
                        var_19 = -22;
                    }
                }
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    arr_15 [i_1 + 1] [i_0] = (max(((min((arr_5 [i_0] [i_0]), (min((arr_10 [i_4] [i_4] [i_4 - 3] [i_1 - 1] [i_0 - 1]), (arr_12 [i_0] [i_0] [i_1 - 1] [i_4])))))), (arr_0 [i_1 + 1])));
                    var_20 = (min((((arr_8 [i_0 + 1]) && (arr_11 [i_0] [i_0] [i_4] [i_4]))), (((arr_3 [i_0]) || var_9))));
                }
                var_21 = (arr_1 [i_1 - 1]);
            }
        }
    }
    #pragma endscop
}
