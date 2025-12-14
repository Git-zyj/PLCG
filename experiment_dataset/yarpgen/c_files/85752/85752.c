/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = (arr_1 [i_2] [i_1]);
                    var_13 -= ((((((arr_5 [i_0] [i_1] [i_2]) * 87655110)) / (arr_2 [i_0] [i_2]))));
                    arr_6 [i_2] [i_1] [i_0] = (max((arr_3 [i_0]), (((arr_3 [i_1]) | (arr_3 [i_1])))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        var_14 = (((arr_1 [i_3] [i_3 + 1]) << (((arr_0 [i_3 + 1]) - 51075))));
        arr_10 [i_3 + 1] = (arr_5 [i_3] [i_3] [i_3]);
        var_15 = ((((87655110 >> (var_0 + 11933))) >> (((arr_0 [i_3 + 1]) - 51070))));
        arr_11 [i_3] = ((-87655111 ? 87655110 : -87655117));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_16 = (((((103 - 1) / (arr_3 [i_4])))) ? ((((((~(arr_13 [i_4] [i_4])))) ? (((!(arr_12 [i_4])))) : ((max(var_3, (arr_4 [i_4] [i_4] [i_4] [i_4]))))))) : var_2);
        var_17 -= ((((!(arr_14 [i_4]))) ? (arr_14 [i_4]) : 2170665311));
        var_18 ^= ((-(arr_8 [i_4] [i_4])));
    }
    #pragma endscop
}
