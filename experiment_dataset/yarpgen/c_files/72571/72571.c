/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (max(((max(var_1, (!var_10)))), ((~(!28)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (min((((arr_0 [i_0]) ? (((-437947432 ? 437947431 : 2496446893))) : var_3)), (((((max((arr_1 [i_0]), (arr_0 [i_0])))) ? (max(1798520402, var_1)) : (((~(arr_1 [i_0])))))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    {
                        var_13 = (max(var_13, (max((max((((!(arr_8 [i_1] [10])))), (~var_6))), ((max(var_4, (arr_8 [i_0] [8]))))))));
                        var_14 = (((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_3 [i_0] [1]))) | (950397923 || -22)));
                        var_15 = (min((((-8492 == (arr_9 [i_3] [i_3 - 2] [i_3] [i_3])))), ((-(arr_5 [i_0] [i_0] [i_0] [i_0])))));
                        var_16 = (min(var_16, (((!((max(((437947419 ? -323531311 : 17973)), (arr_3 [i_3] [i_3 - 1])))))))));
                        var_17 = var_2;
                    }
                }
            }
        }
    }
    #pragma endscop
}
