/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_12 = 18446744073709551610;
        var_13 = ((1824928614807873823 ? 18446744073709551609 : 3729962540));
    }
    var_14 = (min(-3466818228, (((2349241426 << (19 == 1132384506))))));
    var_15 = 18446744073709551597;
    var_16 *= ((!(((-((3970241642 ? 6422866860637657214 : 2717424065321876106)))))));
    var_17 = (max(var_17, ((min(((((max(9785588442238323654, 10805353819233364979))) ? (max(3466818222, 4010854814)) : ((2657590045 ? 639992400 : 1599439208)))), (~2047))))));
    #pragma endscop
}
