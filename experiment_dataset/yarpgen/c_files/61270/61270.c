/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = ((((((arr_4 [i_0] [i_1] [i_0]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [4] [4] [4])))) ? ((((!(arr_5 [i_0] [15] [i_0]))))) : (max(590086134, 18410715276690587648))));

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    arr_9 [i_0] = (min((832330000 | 590086138), (((~(arr_8 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2]))))));
                    var_16 = (max(var_16, (((6351502314883811857 ? 552981889 : -10688)))));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] [i_3] = (arr_2 [i_0]);
                    arr_13 [i_0] [i_0] [i_0] = min((arr_6 [i_3] [i_0] [i_0]), (max((min(590086133, 18410715276690587649)), ((min(81, -8665631532771424121))))));
                    arr_14 [i_0] [i_1] = (((min((arr_4 [i_0] [i_1] [i_3]), var_14)) - 81));
                    arr_15 [i_0] [i_0] |= (max(12095241758825739784, 106));
                }
                arr_16 [i_0] = -19266;
            }
        }
    }
    var_17 -= (max((!-51), ((~(max(var_11, var_7))))));
    #pragma endscop
}
