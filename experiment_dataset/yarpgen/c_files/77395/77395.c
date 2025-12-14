/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = (max(var_14, ((((((arr_0 [i_0]) ? (arr_2 [i_0]) : ((8235256232118649852 >> (7106279927201507758 - 7106279927201507756)))))) ? (((-9223372036854775807 - 1) ? 9223372036854775807 : 1513336278330549178)) : (min(2948367352437087224, (((26 > (arr_1 [i_0] [i_0]))))))))));
        var_15 = (min(var_15, (((!(arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_16 = arr_1 [i_1] [i_1];
        arr_6 [9] = ((((((-9223372036854775807 - 1) % -1450633722635234516)) + 9223372036854775807)) << (1513336278330549178 - 1513336278330549178));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_2 - 3] [i_1] = ((((((2641846363371634627 ? (arr_3 [i_3]) : (arr_3 [i_1]))) / (((((arr_5 [i_1] [i_2]) || 6162722416805729575))))))) ? (arr_7 [i_2] [i_1]) : ((((-1513336278330549179 ? (arr_0 [i_1]) : (arr_11 [i_3] [i_2 - 2]))) - (arr_7 [i_1] [i_1]))));
                    arr_13 [i_1] [i_2] = min(((2366034538755934745 + (-9223372036854775807 - 1))), (arr_9 [i_2 - 1]));
                }
            }
        }
    }
    var_17 = var_9;
    var_18 = (((1513336278330549178 ? -9223372036854775807 : 2366034538755934734)) / var_7);
    #pragma endscop
}
