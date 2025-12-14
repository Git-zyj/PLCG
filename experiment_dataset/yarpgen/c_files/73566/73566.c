/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max(6, (((11529 * 2082) - ((-86606088 / (-32767 - 1))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = ((((max(26853, 1))) ? (max(((max(-32762, var_3))), (14898190534409913638 + -6))) : ((min(var_6, ((-337658773 ? 337658772 : var_1)))))));
        arr_3 [i_0] [i_0] = ((((((-10288 + 2147483647) << (16156596540332427459 - 16156596540332427459)))) ? (((((var_3 ? 32742 : 1))) ? ((-29 ? 6875358872242173653 : var_4)) : ((min(-1120355184, -337658772))))) : var_7));
    }
    var_16 = (max(((min(1454738804, -615310706))), (min(1112642021, (max(var_4, var_10))))));
    #pragma endscop
}
