/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = 52412;
                    var_21 = (34275 + 10634599127512063048);
                    var_22 = -1;
                }
            }
        }
        arr_9 [1] = var_18;
    }
    var_23 = -334413489;
    #pragma endscop
}
