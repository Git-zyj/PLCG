/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((33423360 ? 33423384 : 0)) << (!var_3));
                var_15 = 2909943572507510729;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                arr_12 [i_3] [i_2] [i_2 + 2] = ((((min(var_10, (arr_8 [i_2])))) ? (min(var_8, 4261543935)) : (((arr_8 [i_2]) ? (arr_8 [i_2]) : (arr_8 [i_2])))));
                arr_13 [i_3] [i_2] [i_2] = ((-228010136 ? ((max((((var_8 + 2147483647) >> (var_4 + 3488))), (((var_1 + 2147483647) >> (arr_7 [i_2])))))) : ((20 ? (-7861 / var_9) : -33423384))));
            }
        }
    }
    #pragma endscop
}
