/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 24576;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0 + 1] = (max(((((var_13 * (arr_2 [9]))) != (5412 | -21663))), ((!(-1082544204 > 30)))));
                    var_18 ^= ((!((((((var_4 ? var_11 : (arr_4 [i_0] [i_2])))) ? ((var_2 ? (arr_2 [5]) : 133)) : var_4)))));
                    var_19 = ((139 - (((1 > ((-24560 ? -84 : 65535)))))));
                    arr_8 [i_0 + 1] [i_1] [i_2 + 1] = ((((((13876113007953245719 ? 511 : 24585)) > (((max(-4, (arr_6 [i_0]))))))) ? ((((!((((arr_4 [i_0] [6]) ? 24560 : var_7))))))) : (((-1082544205 % 16) ? (((4318976360244201886 ? (arr_5 [i_0] [1] [i_2 - 1] [i_2]) : var_12))) : (max(13876113007953245711, -24560))))));
                    var_20 += (min((arr_2 [i_0]), ((1 ? (arr_5 [0] [0] [i_0] [1]) : (arr_1 [i_0 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
