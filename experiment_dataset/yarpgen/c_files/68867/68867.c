/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 -= ((!(arr_3 [i_0])));
                var_14 = (arr_0 [i_0 + 1] [i_1]);

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_15 = (arr_1 [i_2]);
                    var_16 -= (((!-var_6) ^ (((var_4 == 0) ? 184 : (max((arr_1 [i_0]), (arr_5 [i_2] [i_1])))))));
                }
                var_17 -= (var_2 ? 0 : ((-(arr_3 [i_0]))));
                var_18 = ((var_6 | var_6) ? (min((arr_4 [i_0 + 1] [i_0 - 1] [i_0]), (arr_5 [4] [i_1]))) : (max((arr_4 [2] [i_1] [i_0]), (arr_5 [i_1] [i_0 - 1]))));
            }
        }
    }
    var_19 = var_6;
    var_20 = ((var_7 + 9223372036854775807) << (((((min(var_5, ((var_6 ? -1373480388 : var_1)))) + 7787205445815520840)) - 20)));
    var_21 -= (var_10 ? (((max(0, var_5)) % (-1373480388 % var_0))) : ((((var_7 >= ((-1 ? -1 : var_3)))))));
    #pragma endscop
}
