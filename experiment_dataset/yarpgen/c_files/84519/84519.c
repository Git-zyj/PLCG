/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((4 ? 9742430525849167961 : var_4)))) ? var_3 : -1891363523));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = 42;
                    var_15 = (min(var_15, (((min(88, 1347338256))))));
                    var_16 = (min(var_16, (arr_5 [1])));
                }
            }
        }
    }
    var_17 = ((((((93 ? var_11 : var_8))) ? var_3 : ((6159035126619133963 ? 0 : -89)))));
    var_18 = -1484585522;
    var_19 = (((((-var_2 ? ((min(1484585522, 39))) : (min(3598754587, 2731852325))))) ? ((max((((9353 ? 1 : -68))), 4294967295))) : (~var_8)));
    #pragma endscop
}
