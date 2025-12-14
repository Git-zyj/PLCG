/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((((var_13 % var_3) / -5789827676945755449)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 |= (((!(arr_2 [i_0]))) ? (((arr_3 [i_1] [i_0]) ? 5789827676945755448 : (arr_3 [i_0] [i_1]))) : (-56457581 || 255));
                var_16 = (min(var_16, ((min((arr_1 [10]), (5789827676945755472 >= -5789827676945755450))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_1] [i_1] [i_1] = (+(((56457581 / 26) ? (arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 1]) : (max(3, 56457583)))));
                            var_17 = arr_3 [i_0] [i_0];
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_0] = (56457575 ^ 0);
            }
        }
    }
    #pragma endscop
}
