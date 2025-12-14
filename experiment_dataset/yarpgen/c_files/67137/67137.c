/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (((((min(var_11, 38060083)))) ? ((min(-var_11, -38060084))) : (min(-var_13, (max(4294967283, var_10))))));
                var_14 += (max((max((1 || var_7), var_1)), (var_7 || var_11)));
            }
        }
    }
    var_15 = (min(var_15, ((((((~(var_4 % var_3)))) % 17)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_16 = ((-(-38060083 + -1852555185)));
                var_17 -= ((((((-1852555185 || 44463) ? ((57 ? var_3 : -16)) : (var_5 % var_3)))) ? (max(((var_4 ? var_5 : 54)), (min(130944, -7425)))) : ((((114 < var_0) || ((max(var_2, var_4))))))));
            }
        }
    }
    #pragma endscop
}
