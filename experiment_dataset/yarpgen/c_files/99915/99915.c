/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(-1073741824, ((~((max(26181, var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((((arr_0 [i_0]) > (arr_0 [i_1 + 1]))))));
                var_19 = (((max(((min((arr_0 [i_0]), (arr_2 [i_0] [1] [i_1])))), (min(7535308139697534561, 2099131145))))) ? -255912844 : (((!(arr_3 [i_1] [9])))));
                var_20 |= ((+(max((max((arr_1 [1]), 2147418112)), ((((arr_0 [2]) + (arr_2 [i_0] [1] [9]))))))));
                var_21 = ((((((arr_0 [i_0]) ? (((max((arr_2 [3] [i_1 + 1] [i_0]), -6794)))) : (min((arr_1 [12]), 26163))))) ? (min(((max((arr_2 [1] [i_0] [i_1]), (arr_2 [i_0] [i_1] [i_0])))), 423)) : 52906));
            }
        }
    }
    #pragma endscop
}
