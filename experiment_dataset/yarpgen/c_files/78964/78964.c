/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((((max(0, (3384304823134799118 != var_0)))) ? ((var_11 ? ((max(var_3, 49))) : ((var_5 ? 15 : 15)))) : var_8)))));
    var_14 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [5] [i_2] = ((+(((((arr_7 [1] [i_2]) == var_4)) ? (((arr_0 [6]) ? (arr_4 [16] [1] [0]) : (arr_0 [4]))) : (arr_7 [i_0 - 1] [i_2])))));
                    arr_10 [i_2] = (243 ? 1394 : -203371814);
                    var_15 *= ((((((arr_4 [i_0 - 1] [1] [16]) | (arr_0 [9])))) ? 0 : (((((14793943112028487022 && (arr_0 [4])))) - -7331))));
                    var_16 = (max((max(((((arr_6 [6] [1] [i_2]) ? var_5 : (arr_6 [i_2] [2] [i_2])))), (((arr_5 [14] [18] [15]) << (arr_3 [12] [19]))))), (max((arr_7 [i_0 - 1] [i_2]), 13274340204523836243))));
                    arr_11 [10] [i_2] [i_2] [16] = (0 >= 64142);
                }
            }
        }
    }
    #pragma endscop
}
