/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((((((((-32767 - 1) - -9168936765706187587))) ? ((1 ? 34 : 0)) : (156282162 <= 13))) >> (((30435 <= (156282164 ^ -9168936765706187587))))));
    var_11 = -156282165;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_12 = (min(var_12, 156282162));
            var_13 = (min(var_13, ((((17881 ? 245 : 6206956479513601251)) >= (34 * 342564103)))));
        }
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            var_14 = (((((68451041280 >> (13592958008615882389 - 13592958008615882363)))) ? (2612255724 * -32745) : 127));
            var_15 = (((3952403210 | 68451041280) || 0));
            var_16 = ((0 != 65506) && 47);
            var_17 = 109;
        }
        var_18 = (min(var_18, 1));

        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            arr_10 [i_0] [i_0] = 14801;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_19 = 50735;
                            arr_19 [i_0] [i_3] [i_4] [i_5] [i_6] [i_0] [i_3 - 1] = ((50072 >> ((((0 ? 0 : 32742)) - 32740))));
                        }
                        var_20 = 22148;
                        var_21 *= 4294967274;
                    }
                }
            }
        }
        var_22 = -79;
    }
    #pragma endscop
}
