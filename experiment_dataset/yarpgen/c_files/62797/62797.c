/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2 - 1] = ((15177 ? 0 : 2085354776));
                    arr_8 [1] [i_1] |= ((-((-(var_4 | var_4)))));
                    arr_9 [i_0] [i_1] = ((0 ? 251 : 245760));
                    arr_10 [i_0] [i_0] = (((~((-(arr_5 [i_0] [i_2 - 1]))))));
                    var_12 *= (arr_5 [16] [i_2]);
                }
            }
        }
    }
    var_13 = (((~1) ? (min((~var_0), (var_8 & var_9))) : var_6));
    #pragma endscop
}
