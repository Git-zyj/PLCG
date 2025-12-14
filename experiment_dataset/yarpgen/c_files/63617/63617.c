/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_17 = 36028796951855104;
                            var_18 = ((36028796951855119 ? 21356 : 18410715276757696513));
                            arr_10 [i_1] = ((((arr_7 [i_0] [i_0] [i_0] [13]) ? (arr_7 [i_2] [i_2] [i_2] [i_2]) : 36028796951855119)));
                            var_19 = 36028796951855142;
                        }
                    }
                }
                var_20 = arr_7 [i_0] [i_0] [i_0] [i_1];
                var_21 = (min(18410715276757696524, 36028796951855091));
            }
        }
    }
    var_22 = ((18410715276757696514 ? 18410715276757696478 : 36028796951855153));
    #pragma endscop
}
