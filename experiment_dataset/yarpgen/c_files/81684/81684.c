/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_5, var_9));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(((((!var_3) & 123))), ((-6124411739947597075 ? 6124411739947597074 : (arr_1 [i_0])))));
        arr_4 [i_0] = (max(((min(((max((arr_2 [i_0] [i_0]), (arr_1 [i_0])))), (max(var_6, 1))))), (max((max(1, 6124411739947597076)), var_8))));
        arr_5 [i_0] = ((~(max(158, 9223372036854775781))));
        arr_6 [i_0] = ((-var_2 ? var_0 : (min(((4294967274 << (115 - 89))), (!141)))));
    }
    #pragma endscop
}
