/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_13 = ((!((max(3286862112, 0)))));
        var_14 = (min((((arr_0 [i_0 + 2] [i_0 - 1]) ^ -15012027005780500676)), (var_3 == var_2)));
        var_15 = (min(var_15, (((((max(((1008105183 ? -27500 : 1210416686)), (var_0 == var_2)))) ? (min(222, ((3286862085 ? (arr_0 [i_0] [i_0]) : var_7)))) : (((!((max((arr_1 [10]), 52)))))))))));
        var_16 -= ((((max(var_0, (arr_2 [i_0] [i_0 - 2])))) ? 255 : (arr_2 [4] [i_0 - 1])));
        var_17 = ((+(((27 > 255) * 1))));
    }

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                {
                    var_18 &= (((((arr_7 [i_1] [i_1]) ? (arr_7 [i_3] [i_3]) : 1))) && ((max(-10, 0))));
                    arr_10 [i_1] [i_2] [11] = ((!var_8) ^ (arr_8 [i_3 + 1] [i_2 + 1] [i_2 - 1]));
                }
            }
        }
        arr_11 [12] [12] = (((arr_4 [4] [4]) ? (-569866071 && 6) : ((min((arr_5 [i_1]), -16)))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = min(((((((0 ? var_7 : 236))) < var_8))), (arr_8 [14] [i_4] [i_4]));
        arr_16 [i_4] = (min((arr_6 [i_4] [i_4]), ((max((arr_14 [i_4]), (arr_6 [i_4] [i_4]))))));
        var_19 = (max(var_19, (arr_2 [i_4] [1])));
    }
    var_20 = (min(var_20, var_3));
    #pragma endscop
}
