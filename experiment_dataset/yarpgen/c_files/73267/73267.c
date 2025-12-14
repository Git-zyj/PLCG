/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = arr_0 [i_0];
        var_14 = (1 * 1);
        arr_4 [i_0] [i_0] = (arr_0 [9]);

        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            arr_7 [i_1] [11] = -6057816288310827944;
            var_15 -= 183304932;
            arr_8 [i_1] [i_1 + 1] [i_1 + 1] = 60633;
        }
    }
    var_16 = (max(var_1, 149));
    #pragma endscop
}
