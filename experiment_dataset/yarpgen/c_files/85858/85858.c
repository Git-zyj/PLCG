/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (min((((((18103927840838357788 ? 100 : 131071))) ? ((212 ? 77714048 : -76)) : 231)), (((235 && 55) % -6938))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_16 *= (max(-117, 209));
                var_17 = 74;
                var_18 -= (((5573937990734751504 > 6956) ? ((((38827 ? -123 : 51)))) : (!3116010583)));
                var_19 = (max(58578, -202));
                var_20 = (min(var_20, (((~(min(((120 ? 4183149776149195360 : 24648)), 25)))))));
            }
        }
    }
    #pragma endscop
}
