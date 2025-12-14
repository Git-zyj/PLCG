/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min((6150496900499488538 == 12222149808409117651), var_1))) ? var_8 : (min((6224594265300433957 * var_11), var_3))));
    var_21 = var_0;
    var_22 = var_0;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_23 = ((12222149808409117657 ^ (max(((12222149808409117653 * (arr_3 [i_0]))), ((min(var_11, (arr_2 [i_0 - 1]))))))));
        var_24 = (max(var_24, 6224594265300433958));
        var_25 = (max((-127 - 1), 6150496900499488536));
        var_26 = 21213320;
        var_27 ^= var_0;
    }
    #pragma endscop
}
