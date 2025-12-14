/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_13 || var_1);
    var_16 = ((-(max((max(261120, var_3)), ((max(var_3, var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((-104 || ((((arr_0 [i_1]) & (arr_0 [i_1 + 1]))))));
                arr_5 [i_0] [i_1 - 1] = (((arr_0 [i_0]) ? (((!-18508) ? -12867 : ((-108 ? 99 : 303971997)))) : ((max((((1073741820 || (arr_1 [16])))), (arr_1 [i_0]))))));
                var_17 = 524272;
            }
        }
    }
    #pragma endscop
}
