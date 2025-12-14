/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!36555);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (((((var_0 * 87) <= (var_19 >> var_9))) ? (~var_2) : (((max(41, (min(var_5, var_14))))))));
        arr_5 [i_0] = (min(((-(max((arr_0 [i_0] [i_0]), var_1)))), ((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_3] = arr_12 [i_0] [i_0] [i_1 + 2] [i_0] [7] [i_3];
                        arr_17 [i_0] [i_1] [i_1] [1] = (arr_1 [i_0]);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        var_21 = (arr_2 [i_4 - 3] [i_4 - 1]);

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_22 = ((((var_9 <= (arr_3 [i_0] [i_0])))));
                            var_23 = (max(69, ((max(var_10, (arr_6 [i_0] [6]))))));
                        }
                        var_24 = (max((max(((4677867923271244229 ? 89 : 159)), 159)), 29749));
                        arr_26 [2] [i_0] [i_5] [i_6] = ((((max(181, 652))) * ((max((arr_24 [2] [i_4] [i_5] [i_0]), (arr_24 [i_0] [i_4 - 3] [i_5] [i_0]))))));
                        var_25 = (min(var_25, (arr_8 [15] [i_5])));
                    }
                }
            }
        }
    }
    var_26 = -var_15;
    var_27 = var_18;
    var_28 = var_4;
    #pragma endscop
}
