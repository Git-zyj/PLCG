/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= (((arr_1 [i_0]) ? var_1 : (arr_1 [i_0])));
        var_20 &= 10665886874403041696;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_21 = (min(var_21, ((((10652997975734248515 != 4238) ? 10652997975734248515 : 0)))));
        var_22 ^= (((((242 ? var_10 : ((var_2 ? (arr_4 [i_1]) : 107))))) ? ((0 ? var_5 : (arr_4 [i_1]))) : (!515918426433547437)));
        var_23 = 7793746097975303092;
    }
    var_24 = (!var_6);
    #pragma endscop
}
