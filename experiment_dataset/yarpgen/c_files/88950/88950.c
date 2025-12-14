/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1073741823;
    var_14 = (min(var_14, 14862752681446498666));
    var_15 &= ((var_7 >> ((-var_10 ? var_12 : var_7))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_16 = (-8889 - 0);
                    var_17 = ((-((-18094 ? -8889 : ((-16584 ? 3583991392263052963 : 6))))));
                    var_18 = ((((((arr_2 [i_0] [i_1]) + -1940969154))) ? 0 : ((min((arr_2 [i_2] [i_0]), var_8)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                var_19 = (min(var_19, ((max((((((3887796121625195925 ? -1629048174 : var_3))) ? (arr_9 [6] [6]) : 613908827)), (~32767))))));
                arr_12 [i_3] [8] = 633999544;
                var_20 += (min(3490520429723196110, (((~83) ^ -1))));
                var_21 = 15;

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_22 = (min(var_22, (20411 + -8889)));
                    var_23 = var_10;
                    var_24 = (max(var_24, (((((((((38122 ? (arr_2 [i_4] [i_4]) : var_4))) % ((var_10 ? 3887796121625195925 : 1629048157))))) ? ((((((var_3 ? -1858271966 : var_0)) == -1360107896)))) : ((8259271693111238682 >> (5158576268131921933 - 5158576268131921931))))))));
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    arr_17 [i_3] [i_3] |= (((((((max(1, 0))) ? (arr_2 [i_3 + 1] [i_3 - 1]) : (((arr_1 [0]) % var_1))))) ? (arr_10 [i_6] [i_4] [i_3 + 2]) : (min((arr_14 [i_3] [i_6] [i_6]), (!685)))));
                    arr_18 [i_3] [i_6] [4] [i_3] = -62;
                }
            }
        }
    }
    #pragma endscop
}
