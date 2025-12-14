/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min((min(1, 3080702586946684317)), (!var_3)))) ? var_9 : (((!(((var_2 ? 11 : var_4))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = ((-(((arr_0 [i_1 - 2]) / 68))));
                arr_4 [1] [i_0] = ((((5578893527908775141 ? 1 : -51))) ? (min(15675, var_7)) : ((((-4456523934380475301 == 3534489759074859072) ? 7935665907925203316 : (((var_9 ? (arr_2 [i_1] [i_0]) : var_8)))))));
                var_13 &= (((((!3283688790) ? 1011278517 : 1)) - 0));
            }
        }
    }
    #pragma endscop
}
