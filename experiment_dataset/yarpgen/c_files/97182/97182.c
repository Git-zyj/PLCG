/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_13 = (min((((~-326724047) ? 1737121226124903525 : ((var_3 ? 128 : (arr_6 [i_0] [i_0] [i_0]))))), (min((3387607075 / 4982731758925357838), (((1 ? 1 : var_7)))))));
                            arr_8 [i_0] [i_0] [i_2] [i_0] [i_1 + 1] = (~126);
                            arr_9 [i_0] [i_0] [i_2] [i_2] = (((!(arr_7 [i_0] [i_0 + 3] [i_1 - 2] [i_3 + 1] [i_3]))));
                            var_14 = ((-((-(3387607071 - var_7)))));
                        }
                    }
                }
                var_15 ^= (((max(((max(var_2, (arr_2 [i_0 + 2] [i_0 + 4] [1])))), (-4979279877051082997 - -18))) + (((-70 ? (arr_0 [i_0] [3]) : var_12)))));
            }
        }
    }
    var_16 = (((((1 < 1) ? (!var_4) : 3951162571100090389)) % (((38687 ? 947632183 : 3387607071)))));
    var_17 += 3655138738;
    var_18 = (((((~((-32 ? var_0 : var_6))))) ? (min(((var_7 ? var_8 : 128)), var_9)) : var_8));
    var_19 &= ((var_0 <= (((var_8 + -671390105923675481) ? var_6 : -3387607070))));
    #pragma endscop
}
