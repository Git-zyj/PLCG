/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] &= (max(-3112891284, ((13614717832191718114 ? (3112891303 >= 255) : 4380866641920))));
                arr_9 [i_1] [i_0] = (min(57506, (max((((arr_7 [i_0] [i_1]) ? var_6 : 1182076011)), ((min(var_1, 2146189309)))))));
                var_11 = (max((((((var_8 ? (arr_2 [i_0]) : var_2))) - (3112891284 - 3788789404))), ((((arr_5 [i_0] [i_0 - 1] [i_0 - 1]) == ((3112891301 ? (arr_1 [i_0]) : var_5)))))));
            }
        }
    }
    var_12 |= 0;
    #pragma endscop
}
