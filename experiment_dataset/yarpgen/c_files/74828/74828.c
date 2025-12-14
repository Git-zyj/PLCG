/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [4] = (max(((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_4 [i_1] [i_2] [i_2])))), ((var_13 ? (arr_4 [i_0] [i_1] [i_2]) : (min((arr_4 [i_0] [i_1] [i_2]), 9167089663979710775))))));
                    var_15 = (max(var_15, (((7601369439940753103 ? 404706794 : 3127205409)))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((((((arr_0 [i_0] [i_0]) ? (((arr_2 [i_2]) ? (arr_2 [10]) : var_13)) : (((240 / (arr_4 [i_0] [i_0] [i_0]))))))) ? (~9279654409729840846) : (((~(arr_2 [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
