/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_8;
    var_14 = min(100, var_4);
    var_15 = ((((((!163) >= ((var_4 ? var_4 : 4114666959))))) > ((~((min(37915, var_9)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = (arr_6 [i_1] [i_2] [i_2 - 2] [i_2 - 2]);
                    var_17 = ((127 ? 1249006667 : 104));
                    arr_7 [i_0] [i_0] [i_0] = ((((max((arr_5 [i_0] [i_2]), (arr_4 [9])))) ? (!-104) : ((-113 ? -7 : (arr_0 [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
