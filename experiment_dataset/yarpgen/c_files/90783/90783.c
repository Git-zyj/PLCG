/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -var_6;
    var_17 = (min(var_10, (((var_15 + (min(var_7, var_9)))))));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0 - 3] = ((((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 3]) : var_15)));
        var_18 = (min(var_18, ((max(((max(0, 552707613))), (min(var_8, ((min(var_1, var_3))))))))));
        var_19 = (max(var_19, (((((((arr_2 [i_0 + 2]) ^ (arr_2 [i_0 + 2])))) == (arr_2 [i_0 + 2]))))));
        var_20 = (((arr_2 [i_0]) > (((arr_2 [i_0 - 2]) * (arr_2 [i_0 - 2])))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_21 = (131276931 % -2638768789147688807);
            var_22 = (min(var_22, (arr_4 [i_0] [5] [13])));
        }
    }
    var_23 = 131276931;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_24 = ((+(min((arr_9 [i_2] [i_3] [i_3]), (arr_10 [i_2] [i_3])))));
                var_25 = (arr_11 [14] [i_2]);
                var_26 = (min(var_26, (arr_10 [i_2] [i_2])));
                arr_12 [i_2] [i_3] [i_3] = (min(var_11, (arr_11 [i_2] [i_2])));
                var_27 *= ((((max((arr_9 [i_3] [i_2] [i_2]), (arr_10 [i_2] [i_2])))) || (((-((var_10 ? 87 : var_2)))))));
            }
        }
    }
    #pragma endscop
}
