/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 += (((arr_3 [12] [i_1]) && ((max(6, (arr_1 [i_0 + 1] [i_0 - 2]))))));
                    var_14 = (max(var_14, (max((((arr_5 [6] [i_1] [i_1]) << (((min(var_4, var_7)) - 1054289414)))), (((arr_5 [10] [i_1] [i_2]) | -13))))));
                    arr_7 [i_0] [i_1] [i_1] [i_2] = (((arr_1 [i_2] [i_0 - 1]) ? ((-1799855155 ? (arr_1 [i_0 - 3] [i_0 - 1]) : (arr_1 [i_2] [i_1]))) : (((arr_1 [i_0 - 3] [i_0 - 2]) / -86))));
                }
            }
        }
    }
    var_15 ^= max(1799855150, 6);
    var_16 = ((((4294967295 ? 1799855155 : (1389556011 - -8))) - var_2));
    #pragma endscop
}
