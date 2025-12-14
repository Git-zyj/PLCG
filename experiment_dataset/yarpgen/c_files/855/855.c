/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_19 = 8996994760871948613;
        var_20 = (((arr_2 [6] [6]) * var_14));
    }
    var_21 += ((3664278249 ? 1364706472 : 1361212131));
    var_22 = (min(var_22, (max((((!(((630689046 ? var_8 : -39)))))), (min(2305843009213693951, (!579168176)))))));
    var_23 = 502676761;
    #pragma endscop
}
