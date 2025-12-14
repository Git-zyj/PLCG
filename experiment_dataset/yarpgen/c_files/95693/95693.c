/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;
    var_16 &= ((((var_3 ? 5 : 24728))) ? -var_8 : (~254));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 *= ((1 ? 925907763 : -45));
        arr_2 [i_0] = ((1 ? 615937739 : -24728));
        var_18 = (min(var_18, 1));

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_19 *= 0;

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_20 = (((((-((13 ? -14058 : -3819757532663647876))))) ? (~22429) : (((((6223370803586061285 ? -120 : 18))) ? -1 : -22298))));
                arr_8 [i_0] [i_1] [i_0] [i_0] = ((83 ? (--2) : -6223370803586061285));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_21 &= ((-(!1)));
                            var_22 ^= ((1 ? -1040818347534096140 : -32745));
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_23 &= 127;
                arr_16 [i_0] [i_1] [i_0] |= (96 ? ((69 ? ((123 ? -103 : 6223370803586061285)) : 51125)) : -1040818347534096138);
                var_24 |= 65522;
                var_25 *= ((((((~0) ? 90 : 57344))) ? (!125) : (((!(((12 ? -23656 : 3624))))))));
            }
            var_26 = ((((5 ? 247 : 4294967291))));
            var_27 *= (~0);
        }
        var_28 ^= (((9 ? -31195 : 221)));
    }
    #pragma endscop
}
