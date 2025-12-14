/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 62568;
    var_12 &= var_4;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = 9557009946977329322;
                arr_5 [i_0] [i_0] [10] = ((((((((23814 ? 65525 : 8889734126732222293))) ? ((min(0, (arr_2 [i_0] [i_1])))) : (arr_0 [i_0 - 2])))) ? (min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 2]))) : (arr_0 [i_0])));
                arr_6 [i_0 - 1] = (arr_1 [i_0 - 1]);
            }
        }
    }
    var_14 = (((((((var_4 ? var_4 : var_2)) <= ((var_0 << (var_0 - 31888)))))) >> (var_4 - 1619)));
    #pragma endscop
}
