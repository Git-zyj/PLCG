/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(min(var_9, (min(var_4, var_0))))));
    var_18 -= var_15;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 *= var_14;
                    var_20 = ((((min(12952028876232748758, -10482))) ? 1 : 32766));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_21 = (min(var_8, (arr_8 [i_0] [i_1 + 1] [i_1 + 1] [i_0] [i_3])));
                        var_22 = (((min((246 - 1), var_10))) ? -9839068950885372655 : ((((arr_2 [i_3]) - var_7))));
                        var_23 -= (max(32640, (1 * 5494715197476802838)));
                    }
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            var_24 = (arr_6 [i_1]);
                            arr_15 [i_2] [9] [i_1] = ((((var_12 ? var_14 : (max(var_3, var_3)))) >> (((max(7917031982098134476, (!56406))) - 7917031982098134465))));
                            var_25 = ((((((min((arr_13 [i_1]), 0))) ? (max(7052, var_3)) : (~31145))) >> (((arr_11 [i_5]) - 18446744073709535710))));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_26 = var_8;
                            arr_19 [i_1] = (min((min((max(1, 12952028876232748777)), 2147483647)), ((((max(var_0, 3304))) ? ((14709340016079404162 ? 14270109478417721787 : 1)) : (arr_8 [i_0 + 2] [i_0 - 2] [i_1 + 1] [i_1 + 1] [i_1 - 1])))));
                        }
                        arr_20 [i_2] [i_1] = (max(13001042796375379382, (max((min(var_11, 18413213531696776308)), ((1 ? -2147483629 : 3737404057630147453))))));
                        var_27 *= (arr_3 [i_0 - 2]);
                        var_28 = (17520616005863186043 ? (((16777215 ? (max(2208677845, 1)) : var_4))) : var_0);
                    }
                }
            }
        }
    }
    #pragma endscop
}
