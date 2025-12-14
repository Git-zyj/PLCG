/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((var_4 ? 11110596918838762858 : var_5));
        arr_5 [i_0] = (11110596918838762858 + 11110596918838762858);
        var_13 = (min(var_13, ((max(((-(max((arr_1 [0]), 750546096093649727)))), ((11110596918838762858 ? 11110596918838762853 : 4560486095884648259)))))));
        var_14 -= ((~(arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_15 ^= ((~(arr_2 [i_1])));
        var_16 = (max(var_16, 1));
        arr_8 [i_1] [i_1] = ((65535 << (9223372036854775803 - 9223372036854775788)));
        arr_9 [i_1] [i_1] = var_7;
    }
    var_17 += (min((!0), (((var_10 >= var_7) & (min(-1, -1349646486990758491))))));
    var_18 = ((4096 ? -116 : ((~(~28761)))));
    #pragma endscop
}
