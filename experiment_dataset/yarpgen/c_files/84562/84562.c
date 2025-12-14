/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    var_19 = (max(217, 151));
    var_20 |= var_5;
    var_21 = (min(var_3, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_22 = (min(6117602379279626850, 21));
                var_23 = min((((!(arr_0 [i_0])))), -31175);
            }
        }
    }
    #pragma endscop
}
