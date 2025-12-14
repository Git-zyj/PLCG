/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_3;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = 31802;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_21 = ((arr_8 [i_0] [i_0] [i_0] [i_3]) ? ((52723 ^ ((var_5 ? (arr_6 [i_0] [i_0]) : (arr_3 [8] [i_1] [i_0]))))) : 31792);
                        var_22 = (((((-236198566 <= 47) > (arr_5 [i_0] [i_3]))) ? (((3646187953 + -1222232621) * (((1145956166 ? var_7 : (arr_0 [i_3] [i_3])))))) : (((arr_1 [i_0]) ? var_13 : (((-(arr_5 [i_2] [i_3]))))))));
                        arr_11 [i_0] [i_1] [i_2] [i_1] = (204 * 0);
                        arr_12 [i_0] [i_1] [4] [i_1] [i_3] = (((((arr_10 [i_0] [i_0] [i_1] [i_2] [i_0]) ? 0 : var_0)) > (arr_0 [i_0] [1])));
                    }
                }
            }
        }
    }
    var_23 = (((((var_2 ? (min(27156, var_11)) : var_14))) ? (((~-5008715827655173825) ? ((255 ? -40 : 1)) : (251 ^ 1222232621))) : ((var_15 ? var_16 : var_10))));
    #pragma endscop
}
