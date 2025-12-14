/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = ((((((var_13 && (arr_6 [i_0] [i_1] [i_2]))))) ? (min((arr_3 [i_2 - 2] [i_2 + 3] [i_2 - 2]), (((var_8 || (arr_4 [i_0] [i_2])))))) : ((((!(((arr_6 [i_0] [i_1] [i_2 - 2]) || (arr_6 [i_0] [i_0] [i_0])))))))));
                    var_17 &= (arr_5 [i_0] [i_1] [i_2 + 3] [i_2 + 2]);
                }
            }
        }
    }
    var_18 = min(((((((var_7 ? var_2 : var_6))) && (((var_8 ? var_3 : var_7)))))), var_14);
    #pragma endscop
}
