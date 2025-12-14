/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-(4194303 / -4194301));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = ((0 < (((max(-4194304, (arr_5 [3])))))));
                var_19 = (max((max((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_1]))), ((max((arr_2 [i_0]), var_14)))));
                var_20 = ((((arr_3 [i_1]) % (((((arr_0 [4]) && (arr_0 [i_0]))))))));
                var_21 = (4194303 / -3419);
                var_22 = ((+((((((arr_2 [i_0]) | 199371284))) ? ((((arr_4 [i_0] [i_0]) < (arr_5 [i_1])))) : -4194318))));
            }
        }
    }
    #pragma endscop
}
