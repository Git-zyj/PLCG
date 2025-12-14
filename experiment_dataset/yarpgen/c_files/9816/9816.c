/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = 60;
                arr_4 [i_0] [i_1] &= 8989607068696576;
            }
        }
    }
    var_14 = (min((((68 ^ var_2) ? var_5 : (((var_9 ? -1458280544 : var_4))))), ((-(min(60, var_1))))));
    var_15 = (min(((var_10 != ((min(60, var_11))))), (var_2 <= var_8)));
    #pragma endscop
}
