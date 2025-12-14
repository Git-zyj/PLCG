/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = (max(((5916369596947924855 ? 9770320802640320961 : (((31 ? 1 : (arr_0 [i_0] [i_0])))))), ((-(~10453068603584676198)))));
                    arr_7 [i_1] [i_1] [i_2] = 3839836633;
                }
            }
        }
    }
    var_10 = (max(31, (max(var_4, var_8))));
    var_11 &= (max((max(((-60 ? 1 : 65489)), -116)), ((-(((-32766 + 2147483647) >> (-4707552081226960829 + 4707552081226960852)))))));
    var_12 = (max(var_12, (((((max(57344, var_1))) ? (((18446744073709551615 < var_5) | 109)) : 62)))));
    var_13 = (((-((10211 ? -6902453946014819097 : 553085071)))));
    #pragma endscop
}
