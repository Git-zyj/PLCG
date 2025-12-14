/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 223;
    var_11 = (((!-var_1) ? var_0 : var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = (!var_0);
                    var_13 = (32 * 31);
                    arr_8 [i_0] [i_1] [i_2] = ((((min(32767, ((min(225, 37)))))) ? (min(var_4, ((min(65515, 225))))) : 11));
                    arr_9 [i_0] [i_0] = ((((((arr_6 [i_0] [i_0] [i_2]) ? ((15330 ? var_2 : var_7)) : (arr_2 [i_0] [i_1])))) & ((219 ? (arr_2 [i_0] [i_0]) : ((var_0 << (arr_3 [i_1])))))));
                }
            }
        }
    }
    #pragma endscop
}
