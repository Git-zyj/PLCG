/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((+(min((var_4 | var_3), var_6)))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 = var_5;
        var_17 = (max(var_17, (arr_1 [i_0])));
        var_18 += (var_14 ? var_6 : ((-85 ? 4555815432768316812 : 9)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        var_19 = (arr_1 [i_1]);
                        var_20 = (max(((min(((~(arr_4 [i_1] [i_3 - 1]))), (arr_4 [i_0] [i_3 - 1])))), (max((var_5 / var_4), (((var_10 / (arr_10 [i_0] [i_1] [i_2] [i_3]))))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 10;i_4 += 1)
    {
        var_21 = ((-(((((-4555815432768316813 ^ (arr_0 [i_4])))) ? (arr_12 [i_4 + 1]) : ((min((arr_12 [i_4]), (arr_4 [i_4] [i_4]))))))));
        arr_13 [i_4] [i_4] = (((((-(arr_12 [i_4 + 1])))) ? (arr_12 [i_4 + 3]) : (((arr_12 [i_4 + 2]) >> (((arr_12 [i_4 + 3]) - 46))))));
    }
    var_22 = (((5974571725554609889 <= 6322845704003599030) << (((((min(var_9, 26373))) >= 18446744073709551615)))));
    #pragma endscop
}
