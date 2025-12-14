/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(((var_7 > (min(17046776978637469540, var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (max((arr_0 [i_1 - 2] [i_1 + 1]), (((var_6 >> (!-105))))));
                arr_5 [i_0] [i_0] = (max(((-(arr_2 [i_0] [i_1] [i_0]))), (arr_1 [i_0])));
            }
        }
    }
    var_15 = ((254 ? 1833033388179285069 : 255));
    var_16 ^= (((!(((var_4 ? var_8 : 0))))));
    var_17 = var_3;
    #pragma endscop
}
