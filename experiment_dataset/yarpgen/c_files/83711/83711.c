/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_12 -= (13283787426036797864 * 0);
                arr_4 [i_0] [i_1] = (arr_0 [i_1]);
                arr_5 [i_0] [i_1] = var_1;
            }
        }
    }
    var_13 += -16368962961028481200;
    #pragma endscop
}
