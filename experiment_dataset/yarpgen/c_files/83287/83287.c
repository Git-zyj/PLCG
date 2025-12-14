/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = 9711476413351149163;
                    arr_10 [i_0] [i_0] = ((min(2613701174, (((8735267660358402452 ? (arr_7 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_0])))))));
                    var_15 |= (max(-var_11, ((9711476413351149183 | (18450 != var_4)))));
                    var_16 -= (((((-(arr_9 [i_0])))) && ((max(((18450 ? (arr_2 [i_2]) : 9711476413351149172)), (max(8735267660358402452, (arr_5 [i_2]))))))));
                }
            }
        }
    }
    var_17 -= var_11;
    var_18 = (max(var_3, ((((31274 ? 9711476413351149163 : 18450)) & (min(8735267660358402466, 3613706291280944209))))));
    var_19 += (var_8 - -3613706291280944212);
    #pragma endscop
}
