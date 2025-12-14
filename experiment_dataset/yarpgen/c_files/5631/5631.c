/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_5 ? (max(2869555957, -2651497809538390375)) : 25139));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_21 ^= ((((25139 && (arr_2 [i_2 - 1]))) && -var_0));
                    var_22 = (var_15 ? ((+((107 ? (arr_7 [8] [i_2] [7]) : -2651497809538390371)))) : (arr_4 [i_0]));
                }
            }
        }
    }
    #pragma endscop
}
