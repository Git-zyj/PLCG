/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [10] = ((-(43267 != 1533862740)));

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    var_15 = 1533862740;
                    var_16 = 22268;
                    var_17 = (min(1533862740, 36457));
                }
                arr_10 [i_0] = 1533862740;
                var_18 = ((((arr_9 [i_0] [i_0] [i_0]) ? -1533862746 : (arr_5 [i_0] [i_1]))) % 790517666);
            }
        }
    }
    var_19 = -1560209483;
    #pragma endscop
}
