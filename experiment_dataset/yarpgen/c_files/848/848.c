/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = ((((max(786468689, ((min(5501, -5299)))))) ? ((~((3765769441 ? 15 : 16050080108692114818)))) : 5398259261630462382));
        var_12 = (max(16, (min((min(2396663965017436798, -67108864)), 245))));
        var_13 = ((min(67108852, 0)));
        var_14 = (min(4, (((-((63009 ? 890349730 : 0)))))));
        arr_2 [i_0] = ((-489 ? (((max(1, 1)))) : (min((max(0, -1954730932)), 4))));
    }
    var_15 = 48;
    var_16 = min(148, (((!8443014235302119686) ? (min(15491, 6)) : 4294967290)));
    #pragma endscop
}
