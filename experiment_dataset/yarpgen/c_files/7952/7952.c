/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((var_14 || ((((arr_4 [i_0] [i_0]) ^ 2047)))));
                arr_6 [1] [i_0] [15] = ((-5981007527420531969 ? 1478268956 : ((-(!1077756928)))));
            }
        }
    }
    var_19 = ((~((~(((-6226247960010498647 + 9223372036854775807) >> var_5))))));
    #pragma endscop
}
