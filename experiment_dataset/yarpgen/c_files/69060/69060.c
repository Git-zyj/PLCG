/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((((((~var_9) ? ((-2082364580932943923 ? -282083219555465235 : 7065241372563210852)) : (!var_0)))) && -4107474535164066712)))));
    var_16 = (((((4107474535164066712 ? -7084160611939618336 : -7546531522085209467))) ? (-4107474535164066711 / 4107474535164066698) : (var_6 / var_1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] = var_14;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = -4107474535164066711;
                                var_18 = ((3280781821264417665 ? ((((arr_15 [i_3] [i_3 + 2]) || (!-4107474535164066713)))) : (!var_7)));
                                arr_17 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] [i_4] = var_2;
                                arr_18 [i_1] [i_1] [i_2 + 1] [i_3] [i_4] [i_4] [i_2] = max((!var_12), (((max(-6832060281200595358, 1042786901393594494)) + var_5)));
                            }
                        }
                    }
                    var_19 = -4478343579920294564;
                }
            }
        }
    }
    #pragma endscop
}
