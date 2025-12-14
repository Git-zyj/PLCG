/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 187;
    var_20 = 69;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            var_21 = (max(var_21, (((!((!(arr_0 [i_0] [i_1 - 2]))))))));
            var_22 += (((((arr_3 [i_0] [i_1]) + 2147483647)) >> (((min((69 - 198), (((arr_4 [i_0]) ^ 69)))) - 4298493462660745108))));
            arr_5 [i_0] [i_1] = (min(((((min((arr_0 [3] [i_1 + 1]), (arr_3 [i_0] [i_1]))) / (arr_3 [i_0] [i_0])))), (min(188, (min((arr_2 [19] [19] [i_1]), 187))))));
        }

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_9 [i_2] [i_2] |= 192;
            var_23 = (min(var_23, 69));
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_14 [i_3] = ((!(arr_11 [i_3] [i_3])));
        arr_15 [1] = (arr_11 [i_3] [i_3]);
        var_24 = var_13;
    }
    #pragma endscop
}
