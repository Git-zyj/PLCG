/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_10 = ((((max((arr_9 [i_1] [i_1 - 1] [i_0]), 1043200618))) ? ((((arr_8 [7] [i_1 + 1] [i_1]) ? (arr_8 [i_1] [i_1 + 1] [i_1]) : (arr_8 [11] [i_1 - 1] [i_1 - 1])))) : ((-(arr_5 [7] [i_1 + 1] [15])))));
                    var_11 -= var_7;
                }
                var_12 = (!var_9);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            {
                var_13 = max(((((arr_16 [i_4 + 4] [i_4 + 1]) ? (arr_14 [i_4 + 1]) : (arr_16 [i_4 + 2] [i_4 + 1])))), (3377209385 / -var_5));
                var_14 = 1449205156901316665;
            }
        }
    }
    var_15 = (min(var_15, 190));
    #pragma endscop
}
