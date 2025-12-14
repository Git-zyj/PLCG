/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((var_14 ? 210 : var_2))))));
    var_19 |= ((((((-1 ? var_11 : var_5))) ? (~-60) : (4251051683 ^ 66))));
    var_20 = 13166623944779147631;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_21 &= (((((-60 ? 6 : 4306424661101222044))) ? ((((var_17 ? -3904 : (arr_3 [i_0] [i_0]))))) : ((3254064019 ? (((249 ? 46 : 2708038388))) : -3003543841855170457))));
                var_22 = (max(var_22, ((((!(arr_1 [i_1 - 2] [i_0])))))));
                var_23 = ((((((((arr_0 [i_0] [i_0]) / var_4))) ? 772736053 : (((var_16 ? 1789 : 1183318653))))) / (arr_1 [i_1 + 1] [i_1])));
                var_24 = (min(var_24, (((((((var_3 > var_15) ? (((-(arr_1 [i_1 - 1] [i_1])))) : ((15920005029522924020 ? (arr_2 [i_0]) : (arr_0 [i_0] [i_0])))))) ? var_15 : ((-2255281419 ? (((arr_4 [i_0] [i_1 + 1] [i_0]) ? (arr_2 [i_0]) : var_3)) : var_17)))))));
                var_25 = ((((-1 ? (((arr_2 [i_0]) ? -1628305747 : var_11)) : (arr_0 [i_1 - 1] [i_1 - 2]))) == -6));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                arr_9 [i_2] [i_3] [i_3] = (((29 && (((var_5 ? (arr_2 [i_3]) : var_13))))));
                var_26 = ((1331352530 ? 12877550441382937091 : 15005804950176136841));
            }
        }
    }
    #pragma endscop
}
