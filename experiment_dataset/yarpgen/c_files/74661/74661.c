/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    var_10 = (-((-4754376928210838165 ? 3821679803476078054 : -1348932765)));
                    arr_7 [i_0] [i_1] [i_2] [6] = (((~18446744073709551615) && (!-16758)));
                    var_11 &= ((-1 ? 54 : -1348932745));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_12 *= (min(((min((((var_0 ? 23 : var_5))), (max(81, 618564042))))), ((((!(arr_10 [i_0] [i_0] [16] [4] [i_4]))) ? (min(18446744073709551615, 6)) : -var_9))));
                            var_13 = (min((max((max(1348932737, 10921687986224476197)), 9223372036854775807)), (((max(112, 2469434315437292188)) * 12694785616416025312))));
                        }
                    }
                }
                var_14 *= (max((((~(max(255, -4754376928210838169))))), (min(-18287930442857174719, -3821679803476078060))));
            }
        }
    }
    var_15 &= (min((((8292815896960014561 ? 249 : 210))), 2462140439006086818));
    var_16 &= ((-4754376928210838180 ? 1348932765 : 33));
    var_17 = ((((((-28673 <= 129) ? (112 && var_7) : -var_8))) && ((((((min(41722, var_9)))) - (((-9223372036854775807 - 1) ? var_6 : var_1)))))));
    var_18 = (min(var_18, (((((min((((var_2 ? var_8 : 3821679803476078054))), (2111062325329920 >> 3)))) && ((min(536862720, 2583282098754422483))))))));
    #pragma endscop
}
