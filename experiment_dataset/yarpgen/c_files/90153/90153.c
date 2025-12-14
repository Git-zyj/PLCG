/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~4255233513318076166);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = ((((((((var_3 ? (arr_0 [i_0]) : 370458737))) ? (255 <= var_3) : (arr_2 [i_0])))) < (~4255233513318076156)));
        var_17 = (max(-6732717903694592814, -3266504790267019945));
        arr_3 [i_0] [i_0] = (arr_2 [i_0]);
    }
    var_18 = (((min(((max(20, -18))), var_7)) << ((((~(var_9 > var_7))) + 10))));
    var_19 = ((var_12 ? 14191510560391475423 : ((((!((min(50290, 1)))))))));
    #pragma endscop
}
