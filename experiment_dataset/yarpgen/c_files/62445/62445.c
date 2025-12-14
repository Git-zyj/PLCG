/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_12 &= 61431;
                var_13 = ((((~(var_2 < var_11))) != (((min((arr_1 [i_0 - 1] [i_0]), (arr_2 [i_0 - 1])))))));
                arr_5 [i_0 + 1] [i_0] = ((((max((arr_2 [i_0 + 1]), (arr_2 [i_0 - 2])))) * var_11));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_0] [i_2] = ((((((arr_7 [i_0 - 2] [i_0 - 2] [i_0]) ? (arr_7 [i_0 - 3] [i_0 - 1] [i_0]) : (arr_7 [i_0 + 1] [i_0 - 3] [i_0])))) ? ((~(arr_7 [i_0 - 1] [i_0] [i_0]))) : (((arr_7 [i_0 - 2] [i_0 - 2] [i_0]) ? (arr_7 [i_0 + 1] [i_0] [i_0]) : (arr_7 [i_0 - 2] [i_0 - 1] [i_0])))));
                            arr_11 [i_0] = 4130;
                        }
                    }
                }
            }
        }
    }
    var_14 ^= var_4;
    var_15 = -var_6;
    var_16 = 61420;
    #pragma endscop
}
