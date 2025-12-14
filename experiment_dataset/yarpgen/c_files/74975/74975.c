/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((4 + (((var_6 || var_3) ^ var_1)))))));
    var_13 = (max(var_13, ((max(var_10, (((28867 > 9223372036854775807) | -var_10)))))));
    var_14 = (((((30469 * 239) / -1563201535)) * var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 *= (min(((1 ? -var_0 : 35)), (((((max((arr_7 [i_1] [i_2]), (arr_6 [i_2] [i_1] [i_1] [i_0])))) <= var_7)))));
                    arr_9 [i_2] [i_1] [i_2] = 8;
                    var_16 = (((((var_8 | (arr_3 [i_1 - 3] [i_2 - 1] [i_2 + 2])))) ? var_9 : (((-102 || (((17785179 ? (arr_1 [i_0]) : -2021420878774406314))))))));
                }
            }
        }
    }
    #pragma endscop
}
