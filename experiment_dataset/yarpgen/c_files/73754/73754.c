/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_18;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0 - 1] = ((!((max((max((arr_1 [i_0]), 2467172526)), (((arr_2 [i_0 + 1]) ? 37327973 : (arr_1 [i_0]))))))));
        arr_4 [18] [i_0 + 1] = (((((max((102 != 8627027197076812835), (!37327973))))) & -2515617730371241569));
    }
    #pragma endscop
}
