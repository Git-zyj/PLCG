/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(13041683571041028525, (-2147483642 % -9223372036854775785)))) ? (max((-9223372036854775785 && 242), 16305307436381319801)) : (-127 - 1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (max((79 & 16), ((~((150 ? (arr_1 [i_0] [i_0]) : -9223372036854775802))))));
                arr_5 [i_1] [i_1] [i_0] |= ((((var_0 ? 59 : (arr_0 [i_0]))) & (arr_1 [2] [i_1 + 1])));
                arr_6 [i_1] = (max((arr_0 [6]), (1 & -1382650535)));
            }
        }
    }
    var_18 = var_7;
    var_19 = (max(var_19, ((119 & (((max(9223372036854775802, var_5)) >> 0))))));
    #pragma endscop
}
