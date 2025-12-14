/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57029
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
                var_12 = (((min((arr_2 [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_1]))) > (min((min(8192, (arr_3 [i_0] [i_0] [i_0]))), (arr_4 [i_0] [i_1])))));
                var_13 = (arr_1 [i_0]);
                var_14 = (((((var_6 ? var_2 : (arr_3 [i_0] [i_0] [i_0])))) ^ (((arr_4 [i_0] [i_1]) ? ((~(arr_3 [i_0] [i_0] [i_0]))) : (((((arr_2 [i_0] [i_0]) < 18446744073709551601))))))));
            }
        }
    }
    var_15 = ((((max((~2669387979), ((var_7 ? var_7 : 18446744073709551597))))) ? (((!var_6) ? var_8 : ((-1083088600 ? var_0 : var_3)))) : var_2));
    #pragma endscop
}
