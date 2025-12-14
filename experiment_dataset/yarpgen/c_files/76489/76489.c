/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, (((-3666583664203714086 ? 215 : var_8)))));
                    var_12 *= ((((max(var_1, (arr_8 [i_1])))) ? (~-1) : (((arr_3 [i_0] [5] [i_2]) ? ((min(67, (arr_3 [i_0] [i_1] [11])))) : (-3578979281393853016 ^ 18446744073709551615)))));
                }
            }
        }
    }
    var_13 = (max(var_13, (((var_10 ? var_3 : (min(((var_6 ? var_1 : 4924353681683820694)), var_4)))))));
    #pragma endscop
}
