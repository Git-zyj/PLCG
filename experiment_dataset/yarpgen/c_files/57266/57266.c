/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57266
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
                arr_5 [i_0] [i_1] [i_1] = (min(2944258620902823883, ((min(1, ((~(arr_4 [i_1] [i_0]))))))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_16 = (min(var_16, ((max(1, 352222541)))));
                    var_17 = -26;
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_18 = (max(var_18, ((min(var_11, (arr_6 [i_0] [i_1]))))));
                    var_19 = (arr_6 [i_0] [i_0]);
                }
            }
        }
    }
    var_20 = (min(var_20, 26));
    var_21 = 54;
    var_22 = ((~(max((11231 | 1), ((var_13 ? -26 : 18))))));
    #pragma endscop
}
