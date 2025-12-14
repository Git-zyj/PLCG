/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 = ((-((-((666511778 ? 1608618745 : 4194303))))));

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_1] [i_0] [i_1] = ((!((((arr_1 [i_0]) ? var_10 : ((-(arr_3 [i_0]))))))));
            var_12 = -var_5;

            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                var_13 ^= ((-(((arr_4 [i_2 - 1] [i_2 - 1] [i_2]) - (min((arr_4 [i_0] [i_1] [i_2]), 14678056121763394238))))));
                var_14 = 63;
                var_15 = (max(((6204699909732223567 - (arr_4 [5] [i_1] [5]))), ((max((arr_7 [i_2 - 1]), (arr_7 [i_2 + 1]))))));
            }
            var_16 = (max((arr_6 [i_1] [i_1 - 1] [i_1] [i_1 - 1]), 1));
            arr_8 [i_1] [i_1] [i_1] = (max((((arr_0 [i_0] [i_1 + 1]) ? var_9 : 18446744073709551615)), -1));
        }
    }
    var_17 = var_4;
    var_18 = var_8;
    var_19 = var_0;
    var_20 = var_8;
    #pragma endscop
}
