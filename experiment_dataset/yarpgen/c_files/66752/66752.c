/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= 1;

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_14 = 0;
        var_15 = (((((62 ? (!15204) : (!0)))) ? ((~((4150 ? 4161 : 1)))) : ((-(!-7529)))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = 187;
        var_16 = ((-7529 ? (!-17) : 81));
        arr_6 [i_1] = (~24);
        var_17 = (((!32767) ? ((0 ? (!-20419) : ((245 ? 62 : 239)))) : (~-44)));
    }
    var_18 = ((65535 ? (((((24 ? 0 : 1))) ? ((243 ? 68 : 3)) : 7322)) : (!1)));
    var_19 = 0;
    #pragma endscop
}
