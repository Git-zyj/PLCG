/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = min((max(((min((arr_0 [i_0]), var_0))), (max(var_5, (-9223372036854775807 - 1))))), (((var_13 ^ (arr_0 [i_0 + 1])))));
        var_14 = (-9223372036854775807 - 1);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_1] [i_1] = 8449069203103307061;
                    var_15 = (((((arr_5 [i_1]) ? (arr_6 [i_1] [16]) : ((((arr_5 [i_1]) ? (arr_8 [21] [i_1 - 3] [i_0]) : 192))))) | (min(0, ((var_2 >> (var_13 - 2349377486)))))));
                    arr_11 [i_0] [i_1] = (max((((((min(9223372036854775805, 74))) ? 0 : (arr_8 [i_2] [i_1] [1])))), -192));
                }
            }
        }

        /* vectorizable */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_15 [i_0] = (arr_12 [i_0] [i_0]);
            arr_16 [i_0] [i_3] [i_3] |= (arr_12 [0] [i_3]);
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_21 [4] = var_2;
        arr_22 [i_4] [10] = -22336;
        var_16 |= (((arr_7 [i_4] [i_4] [i_4] [22]) % (arr_7 [i_4] [i_4] [i_4] [1])));
    }
    var_17 = var_7;
    #pragma endscop
}
