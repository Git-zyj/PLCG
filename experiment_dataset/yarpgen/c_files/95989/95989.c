/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 126;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_2] = 32640;
                    var_13 = (!(arr_1 [i_0] [i_1]));
                    arr_9 [i_0] [18] [i_2] [i_1] = ((!(24520 || 159)));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    arr_12 [i_0] [14] [14] = ((-1558520319 > ((32895 ? 255 : 32895))));
                    var_14 = (arr_1 [i_1] [i_0]);
                }
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    var_15 = ((!((((!1815) ? 32640 : 0)))));
                    arr_16 [i_4] [18] [i_4] = ((((((376275379 < 1) > 32915))) < (((238 || (((32895 ? (-32767 - 1) : -1558520319))))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_16 = (((arr_0 [i_0] [i_1]) ? (arr_13 [i_0] [i_5]) : ((1 ? (arr_7 [14] [i_1] [i_0]) : -32753))));
                    var_17 = (arr_18 [i_0] [i_1] [18] [i_0]);
                }
                var_18 *= 47072;
            }
        }
    }
    var_19 ^= (!var_4);
    #pragma endscop
}
