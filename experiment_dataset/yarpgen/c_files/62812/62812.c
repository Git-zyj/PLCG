/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = min(((min(var_1, (arr_2 [i_0])))), (min((min((arr_6 [i_1] [i_1] [i_1]), var_0)), (arr_6 [i_1] [i_1] [i_0]))));
                var_21 &= var_5;
                arr_7 [i_1] [2] = (min(var_11, ((((arr_3 [i_1] [i_1]) - 56)))));
                var_22 = (max(var_22, (((((((((var_4 ? -365907727336711235 : (arr_4 [i_1] [i_0] [i_0])))) ? var_3 : var_12))) ? (max(((var_10 ? -1 : (arr_3 [i_0] [i_0]))), (!var_12))) : ((-var_18 % (arr_2 [i_0]))))))));
                var_23 = (var_10 ? -1 : ((2909102610483377851 ? 2909102610483377842 : var_7)));
            }
        }
    }
    var_24 = (((((9088343913097830386 ? var_4 : var_19)) ? (min(var_11, 0)) : ((2909102610483377849 ? var_7 : var_15)))));
    var_25 = (max(-367081384, (max((min(6, 15)), (var_17 / 3213953066685727635)))));
    #pragma endscop
}
