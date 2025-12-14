/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= ((max(var_2, var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = (3695481593 && 52373);
                var_14 = (!32);
                var_15 = (min((4294967284 && 1), 52373));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_16 = (max(var_16, var_2));
                    var_17 *= (599485690 && var_10);
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_18 = -1;
                    var_19 = ((((max((var_6 && 13170), (var_9 - var_1)))) ? var_8 : ((((~-1540460213) > (-9223372036854775807 - 1))))));
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_20 = ((-((((6495 && 8568171416893959629) < 211)))));
                    var_21 -= -79;
                    var_22 = ((!((min((92 || -2847), ((-1909193082 ? var_1 : 151)))))));
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_23 = (max((--13165), 20788));

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_24 ^= (((4096 ? -16665 : 3917930311887563540)));
                        var_25 = 1;
                        var_26 = (min(var_26, ((max((54 > var_5), ((max(3695481593, var_7))))))));
                    }

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_27 += -2;
                        var_28 = (((((-30714 ? -3 : var_6))) ? 3695481597 : -1));
                        var_29 = (min(var_29, (((-(var_5 && -2116))))));
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_30 = 2128177021;
                        var_31 = (3722 ? -22 : 2081501491);
                    }
                }
            }
        }
    }
    #pragma endscop
}
