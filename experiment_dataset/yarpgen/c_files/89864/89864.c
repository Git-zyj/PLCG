/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 &= ((~(min((var_12 >> var_18), ((1 ? 8 : 152))))));
                    var_21 -= (((((~(arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 - 1])))) ? (((min((max(var_10, var_15)), (arr_1 [i_1 + 2]))))) : (((arr_6 [i_0] [i_1 + 1]) ? (arr_6 [i_0] [i_1]) : 25))));
                    var_22 = (((arr_5 [i_1] [i_1 - 2] [i_1 + 1] [i_1 - 2]) ? (arr_0 [i_2]) : (1 | 115)));
                    var_23 = (max(((4294967288 ? 2147483636 : 13577736105004474054)), (((-(arr_2 [i_1 - 1] [i_1 - 1] [i_1 + 2]))))));
                }
            }
        }
        var_24 -= (arr_4 [i_0] [i_0] [i_0] [i_0]);
        var_25 = (max(var_25, ((min((((((((arr_2 [i_0] [i_0] [i_0]) + 189))) && ((max((arr_1 [i_0]), var_11)))))), ((((((~(arr_2 [i_0] [i_0] [i_0]))) + 2147483647)) << (((min(var_16, 18446744073709551615)) - 15684511629231134191)))))))));
    }
    var_26 = (max(18446744073709551609, var_10));
    var_27 = ((((min((max(10849125592990840367, 16815342831925433453)), ((max(var_1, var_9)))))) && var_7));
    var_28 = (((((var_18 ? ((min(var_5, var_15))) : var_10))) | ((-((55 ? 0 : 1))))));
    var_29 = (((var_8 || var_9) || ((3053221734 || ((min(5988031116393521808, var_13)))))));
    #pragma endscop
}
