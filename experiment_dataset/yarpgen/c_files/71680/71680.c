/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_11 & ((((16 ? 1105478237 : 55)) ^ (((min(33208, 87))))))));
    var_20 = 12016130315538530465;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_1] = (max((min((arr_1 [i_0]), 12016130315538530471)), ((((3532819850245940215 < -4) - 27)))));
                arr_7 [i_1] [i_1] = (-39 && 16383);
                arr_8 [i_1] [i_0] [i_1] = (arr_3 [i_0]);
                var_21 = ((1920584333854515110 ? (arr_1 [i_0 - 1]) : 2210193406));
                arr_9 [i_0] [i_1] = ((((((~-1) | (~0)))) ^ (((max(-7634867061527234222, 1192177567)) | ((((arr_4 [i_0] [i_0] [i_1]) / 4294950913)))))));
            }
        }
    }
    #pragma endscop
}
