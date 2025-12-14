/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_12 > var_6);
    var_14 = (!var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [2] |= (arr_7 [i_0]);
                    arr_9 [12] [1] [12] [i_1] = (max(((max((arr_4 [i_0]), (arr_4 [i_2])))), (min(-8745663417670680002, (arr_4 [i_0])))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (arr_2 [i_0] [i_1] [i_2]);
                    arr_11 [i_0] [i_1] [i_1] [i_2] = (((arr_0 [i_1]) ? ((((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_1])))) : (((8745663417670680002 < 4294967295) ? -280180382 : -8745663417670679996))));
                }
            }
        }
    }
    #pragma endscop
}
