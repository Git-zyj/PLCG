/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((!(var_0 + var_9)))), ((1 ? var_9 : (!1)))));
    var_14 = min((max(109, var_8)), var_5);

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_15 = (48609 ^ 1);
                        var_16 |= (arr_6 [i_1] [i_1] [i_1 + 4]);
                        var_17 = var_9;
                        arr_11 [i_0] [i_0] [i_0] [i_3] = (((((min(1, 127))))) > ((-2036488063439194680 ? var_7 : var_12)));
                        arr_12 [i_0] = 16931;
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_18 = (((((arr_13 [i_0]) < (((min(125, 1)))))) ? 65530 : 2537410589255159552));
            var_19 = ((min(var_3, (arr_13 [i_0]))));
            var_20 -= 1;
        }
        for (int i_5 = 4; i_5 < 9;i_5 += 1)
        {
            var_21 = (((((((48623 ? 126 : (arr_0 [i_0])))) ? (arr_0 [i_0 - 1]) : ((1 ? var_3 : var_4)))) < (1 < var_7)));
            var_22 *= var_5;
            arr_20 [i_0] [i_0] = var_4;
        }
        var_23 = (min(1, 1));
        var_24 = ((~((14470706757716876827 ? (arr_13 [i_0]) : (arr_4 [i_0 + 2])))));
        var_25 = (min(var_25, (((-((((max((arr_1 [6]), -3574))) ? (!4294967295) : (arr_17 [i_0 - 1] [i_0 + 2] [0]))))))));
    }
    var_26 = -6;
    #pragma endscop
}
