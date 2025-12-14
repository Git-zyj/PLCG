/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = ((var_1 > (max((((-(arr_0 [i_0])))), (min(var_16, (arr_2 [i_0])))))));
        var_18 = 16584;
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = ((-(max(3278198946, (arr_6 [i_1])))));
        var_19 = 62;
        arr_8 [i_1] = (((arr_5 [i_1 - 1]) >= (arr_5 [i_1 + 1])));
        arr_9 [i_1] [i_1 - 1] &= (((arr_5 [i_1 + 2]) ? -808991693016685675 : (arr_5 [i_1])));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                arr_16 [i_2] [i_2] [i_3] = var_4;
                arr_17 [i_2] = (~-20413);

                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    var_20 = 18446744073709551594;
                    arr_20 [i_2] = (!var_8);
                    var_21 = var_2;
                }
                arr_21 [i_2] = (~241);
            }
        }
    }
    #pragma endscop
}
