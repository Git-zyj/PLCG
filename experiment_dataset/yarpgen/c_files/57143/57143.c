/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = -25448;

                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    var_14 = (max((((min(2342141657, 9004954410493254059)) << ((((2342141657 ? -24 : 15)) + 78)))), 3394811922));
                    var_15 = (max(var_15, ((((((9004954410493254059 ? 3394811922 : 2610210986003974672))) ? (arr_2 [i_1] [i_1] [i_1]) : 233)))));
                }
            }
        }
    }
    var_16 = 0;
    var_17 -= var_3;
    var_18 += var_7;
    var_19 = ((~(max(var_10, (var_12 / 3047104058)))));
    #pragma endscop
}
