/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_3);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            var_17 = (max(56, ((~(arr_1 [i_0] [i_1 + 1])))));
            arr_5 [i_0] |= -1;
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_8 [i_2] [i_0] = (((~var_0) + -var_8));
            arr_9 [i_2] [i_0] [i_0] = (~var_8);
            arr_10 [i_0] [i_2] [i_2] = var_4;
        }
        arr_11 [i_0] [i_0] = var_13;
    }
    var_18 = (var_7 ? var_9 : 23);
    #pragma endscop
}
