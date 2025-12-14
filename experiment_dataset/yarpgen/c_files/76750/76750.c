/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_11, ((max(var_3, 2279590075989287106)))));
    var_21 &= 8685307628617439975;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = ((-((~(arr_1 [i_0])))));

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_22 += var_4;
            var_23 = (min((((var_6 ? (arr_5 [i_1] [i_1 + 1] [i_1]) : (arr_5 [i_0] [i_1 - 1] [i_1 - 1])))), ((-((1029794048 ? (arr_2 [i_0] [i_0]) : -1))))));
            var_24 -= ((-(max(-2251799813685120, 1))));
            var_25 = ((-(min(((var_8 ? 32749 : var_7)), (min(var_13, (arr_2 [i_0] [i_1])))))));
        }
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_26 = var_10;
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_27 *= ((-((((min((arr_1 [i_3]), 112))) ? (var_4 < var_5) : 7271))));
                        arr_16 [i_4] [i_3] [i_4] [i_5] [i_3] &= var_19;
                        var_28 = var_8;
                        var_29 = (((~((~(arr_9 [i_3] [i_3]))))));
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 16;i_6 += 1)
    {
        var_30 = -1816708868;
        arr_19 [i_6] [i_6] = (((((-((max(var_8, (arr_0 [22]))))))) ? (min(((min((arr_2 [i_6 + 4] [2]), var_16))), (max((arr_15 [2] [i_6] [14] [i_6]), var_15)))) : (((max((arr_8 [i_6 + 2]), (min(40089, var_11))))))));
        arr_20 [i_6] [1] = var_6;
    }
    #pragma endscop
}
