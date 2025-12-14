/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 += max(((min(150879378, ((188 ? 111 : 1))))), 4269239015);
        arr_2 [i_0] [i_0] = (((min(((((arr_0 [i_0]) != (arr_0 [i_0])))), (min((arr_1 [i_0]), 238)))) ^ var_1));
        var_20 = ((((min(1, 1))) <= (((3179791761 || ((!(arr_1 [i_0]))))))));
        var_21 = (!1);
    }
    var_22 = var_7;
    #pragma endscop
}
