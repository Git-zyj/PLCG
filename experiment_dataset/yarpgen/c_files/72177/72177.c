/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_2 ? var_17 : (15663822579458979285 ^ 1)));
    var_19 = max(15663822579458979285, -1715736459);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (min(var_15, (min((((arr_4 [i_0]) ? (arr_0 [i_0] [i_1]) : (arr_2 [0]))), ((((arr_4 [12]) ? (arr_3 [i_0] [5] [5]) : (arr_4 [i_0]))))))));
                arr_5 [i_0] [i_1] = (((((arr_0 [14] [i_1]) ? (arr_3 [i_0] [i_1] [21]) : (min((arr_0 [i_0] [19]), var_7)))) < (((max(1, (15663822579458979276 >= var_7)))))));
            }
        }
    }
    #pragma endscop
}
