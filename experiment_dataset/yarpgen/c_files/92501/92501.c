/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (((((4294967295 * (16646144 / -16646154))) - (arr_6 [16] [i_2] [i_2] [10]))))));
                    var_19 = (min(var_19, ((((9223372036854775788 || (((1 << (16646144 - 16646139))))))))));
                    var_20 = 1;
                }
            }
        }
    }
    var_21 = var_10;
    var_22 = (max(((-(var_5 || var_3))), -16646149));
    #pragma endscop
}
