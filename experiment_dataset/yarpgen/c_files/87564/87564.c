/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [8] = ((var_15 <= (((2921974510476760274 ? -1 : 1)))));
                    arr_9 [i_0] [5] [i_2] = (max((((((min((arr_5 [i_0] [i_1] [i_2]), (arr_2 [8] [10] [i_0 - 1])))) ? (arr_4 [i_0] [i_1] [i_0]) : (arr_5 [i_0 - 1] [i_1] [i_2 - 3])))), (min((~97), (((arr_3 [i_0]) ? (arr_2 [i_0] [i_1] [i_2]) : var_7))))));
                    arr_10 [i_0] [i_0] [i_1] [i_2 + 2] = ((-((min((arr_2 [i_0] [i_0 + 2] [i_2 + 1]), var_6)))));
                }
                arr_11 [i_0] [i_0] [i_0] = (min((((arr_7 [i_0 + 1]) >> (((arr_7 [i_0 + 2]) - 9254274636869402851)))), (((-(arr_1 [i_0 + 2]))))));
            }
        }
    }
    var_17 = var_3;
    var_18 = ((-(1 > 4097781449692811134)));
    #pragma endscop
}
