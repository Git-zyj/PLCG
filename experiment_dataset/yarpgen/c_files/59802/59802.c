/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (1 % 12871891728206605952);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 += ((((((max(13044, 4051180543274234119))) ? 4974355252282279664 : var_1)) / ((((!(((7537709680831025108 ? (arr_3 [6]) : 1)))))))));
                    var_19 += min(1, (((((var_13 ? 14267687806407403548 : 7203007747194679503))) ? 1879524972069594194 : 1)));
                }
            }
        }
    }
    var_20 = 714;
    var_21 = ((((min((max(var_7, 37155)), ((var_11 ? 0 : 9223372036854773760))))) ? (((((37160 ? 4179056267302148067 : 0))) ? (!0) : (min(37661, var_6)))) : 37160));
    #pragma endscop
}
