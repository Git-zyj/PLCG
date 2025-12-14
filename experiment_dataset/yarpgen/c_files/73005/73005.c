/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 &= (((((max(163, 235)))) < (((13696 && var_8) | ((var_8 / (arr_0 [9])))))));

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            arr_6 [1] = (((max((2622 / -32759), 62613)) - (((arr_3 [i_0]) << (((var_6 + 5073897061516728303) - 16))))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_0] = (((((var_9 + 2147483647) << (1549504355 - 1549504355))) >= (235 == var_1)));
                        var_12 = (((1 - 16251884701561891078) && (110 - 1028122676)));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_13 = (max(var_13, (((((((max(61, (arr_3 [i_0]))) / 124))) / (min((arr_7 [i_0] [i_0] [i_4] [i_4]), 13245291504279565504)))))));
            arr_17 [3] [i_4] = (((17605 || 1187759941) | (-1 | 33554368)));
            var_14 += (min((1116892707587883008 / 21), (((max(1298123444127535412, (arr_2 [i_0] [5]))) / (var_4 < 15)))));
            arr_18 [i_0] [i_0] [i_4] = (min((((((max(1, 72))) + 0))), (min((((620239845 << (((arr_12 [i_0] [16] [i_0] [11] [i_4] [i_0]) - 232))))), 3518371305))));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_15 = (((((((max(255, 15213033386710635292)) < (0 * 7928249318091770052))))) < (min(((((arr_19 [i_5]) & var_2))), (var_9 ^ var_1)))));
            arr_21 [i_0] [i_0] [i_5] = ((((((arr_4 [i_5]) < 1457456291))) << (((((arr_8 [7] [i_5] [i_5] [i_0]) * (arr_0 [i_0]))) + 1584))));
        }
    }
    #pragma endscop
}
