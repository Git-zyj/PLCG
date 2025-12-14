/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((~(!var_7)))) ? 1 : ((~(1491404484363690334 | var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((((((var_8 ? (arr_2 [15] [19]) : var_4))) ? -var_11 : (arr_2 [i_0] [i_0])))))));
                arr_5 [i_0] = (((((~(arr_2 [i_0] [i_0])))) || (((16955339589345861281 ? -94 : -326682854)))));
                var_19 = max(((((max((arr_0 [i_1] [i_1]), (arr_3 [i_1] [i_1]))) < (~105)))), (arr_2 [11] [i_0]));
                var_20 = ((!((max((arr_2 [i_0] [i_1]), (arr_3 [i_0] [i_1]))))));
            }
        }
    }
    var_21 = (max(((-((var_2 ? var_15 : var_10)))), ((((max(292441895, var_6))) ? (max(var_6, var_6)) : (((max(var_11, 124))))))));
    #pragma endscop
}
