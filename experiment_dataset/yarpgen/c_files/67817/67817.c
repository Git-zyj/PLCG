/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_17 = ((!(arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_18 ^= (~var_13);
            var_19 = (min(var_19, ((((~(arr_4 [i_0 + 1] [i_1])))))));
            arr_6 [i_0] = 0;
            var_20 = 9221518535327906060;
        }
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_21 = (max(((~(~var_11))), ((min((arr_7 [i_2] [1]), (arr_7 [i_2] [i_2]))))));
        var_22 = var_8;
        var_23 = var_8;
        arr_9 [20] = ((((((arr_7 [19] [i_2]) ? 5177785573114289245 : (arr_7 [i_2] [i_2])))) ? ((max((arr_7 [i_2] [i_2]), (arr_7 [i_2] [i_2])))) : ((~(arr_7 [i_2] [i_2])))));
    }
    var_24 = (max(var_10, var_12));
    var_25 = (max((max(-43, var_5)), (!var_16)));
    #pragma endscop
}
