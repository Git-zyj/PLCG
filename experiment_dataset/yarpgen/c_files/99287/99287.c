/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = (max((arr_2 [i_2]), (((arr_0 [i_0 - 2]) ? 35960 : (max(var_11, var_1))))));
                    var_14 = ((var_12 ? (((((max(var_5, 42))) ? (min(4294967288, (arr_1 [i_0] [1]))) : (((arr_1 [i_2] [i_1]) ? (arr_3 [i_0] [i_1]) : (arr_6 [i_0] [i_0] [i_1])))))) : (min((((13271696839688033200 ? (arr_7 [i_0] [i_1] [i_1] [i_0]) : (arr_7 [i_0] [i_1] [i_2] [i_2])))), 0))));
                    arr_8 [i_0] [i_1] [i_0] = ((((-(((arr_1 [i_1] [i_1]) ^ 12)))) == (max(16326, ((var_10 / (arr_3 [i_0] [i_0])))))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] = 4613739893595845838;
                        var_15 = (max(var_15, (42 == 3464349865)));
                        arr_12 [13] [i_1] [i_1] [i_0] = (arr_4 [i_0] [i_0]);
                        arr_13 [i_0] [i_0] [i_0 - 2] [i_0 + 1] [i_0] [i_0] = (((arr_3 [i_0] [i_3 - 1]) <= (arr_3 [i_0] [i_3 - 1])));
                    }
                    var_16 = (max(var_16, ((max(((~((~(arr_1 [i_2] [i_1]))))), ((432665849 ? (arr_3 [i_2] [i_0 + 1]) : 233)))))));
                }
            }
        }
    }
    var_17 &= 11;
    var_18 = var_10;
    var_19 = (3371488990119153627 - 2891127441);
    #pragma endscop
}
