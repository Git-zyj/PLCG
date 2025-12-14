/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((-((~(arr_5 [i_1])))));
                var_20 |= ((((min((~29), (((arr_2 [i_0]) ? (arr_2 [i_1]) : (arr_0 [16])))))) ? (max((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0]))) : (arr_5 [i_0])));
                var_21 += ((((~(max(1637344527592414476, 1))))) ? (arr_4 [i_0] [i_0]) : 186);
                var_22 = (min(var_22, 1));
                var_23 = (min(var_23, (((((!(((-(arr_5 [i_0])))))) ? 39992 : ((~(arr_2 [i_0]))))))));
            }
        }
    }
    var_24 = var_1;
    var_25 = var_5;
    #pragma endscop
}
