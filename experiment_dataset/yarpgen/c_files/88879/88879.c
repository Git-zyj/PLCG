/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 *= 218;
                var_12 = 37;
                var_13 = (min(var_13, ((((((((max((arr_5 [i_0]), (arr_2 [i_0] [4] [i_0 + 1])))) << (137 - 134)))) ? ((((max((arr_2 [i_0] [i_1] [3]), 2))) ? (!var_5) : var_1)) : var_4)))));
                var_14 = (min(var_14, ((max((max(137, ((var_3 ? (arr_0 [i_0] [6]) : var_4)))), -35)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    var_15 = (min(var_15, (((3856589632826531143 ? 17 : 1)))));
                    var_16 = var_2;
                    var_17 &= 16;
                    var_18 = (((((((var_10 ^ (arr_13 [i_2] [i_2] [i_4]))) + (max(3856589632826531143, 0))))) ? (((!(((var_10 ? var_3 : 2251799813685247)))))) : ((max((arr_11 [i_2] [i_2] [i_4] [i_4 - 1]), (min(var_8, 124)))))));
                }
            }
        }
    }
    #pragma endscop
}
