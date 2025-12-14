/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_4 [i_0] = (max(-4651851179623597880, (((((3306556721 ? (arr_2 [i_0] [i_0]) : 8925))) ? (max(3115302815128885387, 40485)) : 8814100142568723514))));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_20 = (min(var_20, (arr_11 [i_0] [i_0] [i_2] [i_3])));
                            var_21 = ((((max((arr_0 [i_0] [0]), 27252))) ? (arr_2 [i_1] [i_3 + 2]) : (((arr_13 [i_0] [i_4]) ? (arr_1 [i_0]) : (arr_0 [i_2] [i_2])))));
                            var_22 += ((-6374476461757122322 ? 253 : 65535));
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_3] [i_4] = ((-(max((((-(arr_13 [i_0] [12])))), (arr_2 [i_0 - 1] [i_2])))));
                        }
                    }
                }
            }
            var_23 = (min(var_23, 3115302815128885388));
        }
        var_24 -= (((((2 ? 1196594886 : 95))) ? (((-27 ? 3 : 11))) : -2860084494632208306));
        var_25 = ((0 ? ((((((52 ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_0])))) ? 23 : ((-24 ? 0 : 0))))) : ((-1 ? 11960 : (((arr_10 [i_0]) ? 330547846 : -2447732612323010798))))));
    }
    for (int i_5 = 3; i_5 < 8;i_5 += 1)
    {
        arr_18 [i_5] |= (((arr_2 [i_5] [i_5]) ? (arr_2 [i_5] [i_5]) : (arr_3 [i_5] [i_5])));
        arr_19 [i_5] = (arr_11 [i_5] [7] [i_5] [i_5]);
        var_26 = ((!((((arr_10 [i_5]) ? 1 : 7)))));
        var_27 = ((47 ? (((((2305280059260272640 ? (arr_11 [i_5] [i_5 + 2] [i_5] [i_5]) : (arr_6 [14])))) ? 1066160733 : 1)) : 2));
        var_28 = (max(var_28, (((-6374476461757122320 ? -26671 : 1)))));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 18;i_7 += 1)
        {
            {
                arr_27 [i_7 - 1] = -566869257;
                var_29 = 25;
            }
        }
    }
    #pragma endscop
}
