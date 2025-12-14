/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_2, (((((104 ? var_3 : var_3)) * var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = ((((min(13361564780270150528, 1))) ? (max((arr_4 [i_1 - 1] [0] [i_1 + 2]), ((((arr_3 [i_1 + 1] [i_1 + 1] [i_0]) || var_13))))) : (((~(281474976710655 == 20983))))));
                    arr_8 [i_0] = 24576;

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1 + 1] [i_1] [i_3] [i_4] [i_4] = (((((~(arr_3 [i_0] [i_0] [i_4])))) ^ 6421685386195002258));
                            var_16 = (-var_1 ? ((max(-20983, 84))) : -6629281360833021901);
                            arr_15 [i_0] [i_0] [i_2] [i_3] = ((~(~24582)));
                            var_17 = (max(var_17, ((max(((-(arr_10 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 1]))), (min(var_0, -1831297287)))))));
                        }
                        var_18 = (min(var_18, (((((((arr_5 [i_1 - 1] [i_1] [i_1 + 1]) ^ 24576))) ? ((5085179293439401088 | (((arr_10 [i_3] [i_2] [16] [0]) ? (arr_13 [i_0] [i_1] [i_0] [i_3] [i_1 + 1]) : var_2)))) : ((((arr_13 [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1] [i_1 - 2]) ? -24576 : var_12))))))));
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_19 [i_0] [i_1 + 1] [i_1] [i_2] [i_5] = (((((((arr_4 [i_0] [20] [i_2]) > 103)))) ? ((((min(6, 1831297286)) == 24576))) : ((var_5 >> (var_12 - 1711)))));
                        arr_20 [i_0] [i_0] = ((+((max((!-24576), (((arr_12 [i_0] [i_1] [21] [i_2] [i_5]) && (arr_1 [i_1]))))))));
                        var_19 = (((6017587827530716444 ? 24213 : -1743683313)));
                    }
                    arr_21 [i_0] [6] [6] = (min((-2147483647 - 1), ((-((var_7 ? (arr_10 [i_2] [i_1] [i_2] [18]) : (arr_2 [i_0] [i_0])))))));
                }
            }
        }
    }
    var_20 = var_8;
    var_21 &= ((~((((min(1831297303, var_7))) - ((var_0 ? var_9 : var_1))))));
    #pragma endscop
}
