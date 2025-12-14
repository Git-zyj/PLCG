/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (arr_6 [i_2] [i_2])));
                    var_15 = 1;
                    var_16 = (max((arr_8 [i_0] [i_1] [i_1] [i_1]), ((((max(1, 1)) ? ((18115939879988787108 ? var_11 : (arr_4 [i_0] [i_0]))) : 1)))));
                }
            }
        }
    }
    var_17 ^= (37953 != 1);
    var_18 = ((!(((((1 ? 1 : 5786465158282601678))) || (16093 || var_3)))));
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_19 += (arr_5 [i_3] [i_4]);
                var_20 = 1;
            }
        }
    }
    var_21 = var_7;
    #pragma endscop
}
