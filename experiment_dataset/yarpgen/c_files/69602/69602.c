/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] = min((((53294 ? 54130 : 37621))), 59);
                arr_8 [i_0] = ((((-267387691 ? (arr_4 [i_1 + 2] [i_1 + 1]) : (arr_5 [i_0] [i_1 - 1] [i_1]))) == (((57406 ? 65531 : -1678136714)))));
                var_13 = (max(var_13, ((((((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_1 + 1]) : var_1)) < 60337)))));
                arr_9 [i_0] [i_1] [i_1] = (((min((arr_6 [i_1 + 2]), (arr_0 [i_1 + 2])))) & var_8);
                arr_10 [i_0] [14] &= ((((((arr_5 [i_0] [i_1 + 2] [i_0]) ? (arr_3 [i_1 - 1]) : -11405))) || ((!(((-1078640230 / (arr_3 [i_1]))))))));
            }
        }
    }
    var_14 = var_9;
    #pragma endscop
}
