/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_6, (((~106) ? var_3 : ((var_10 ? var_2 : 106))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = (((((18446744073709551615 ? (min(13835058055282163712, 1644236454243975880)) : (138 + 255)))) ? 18446744073709551601 : (((0 ? -72 : 13835058055282163712)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = 0;
                                var_14 &= max(((14873894404210466711 ? 12804669569650024993 : -58)), (min(3572849669499084905, ((6722065775640985520 ? 0 : -1831107777)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = -1831107777;
    #pragma endscop
}
