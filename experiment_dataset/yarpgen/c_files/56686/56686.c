/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_4;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 |= (((~3179888517) ? (((~(arr_8 [i_1] [i_0 - 2] [i_0 + 1] [i_0 + 2])))) : (max(1115078773, 3179888494))));
                    arr_10 [i_2] = (((min(134215680, (((1 ? (arr_2 [i_2]) : var_0))))) < ((min((~1), 1)))));
                    var_12 += (((arr_8 [i_1] [i_0] [i_1] [i_2]) ? (((max(1, 1)))) : 1115078779));
                }
            }
        }
    }
    #pragma endscop
}
