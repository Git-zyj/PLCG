/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_18 -= (min((arr_0 [i_0] [i_1 - 3]), (!4769956550371703669)));
                var_19 = (max(var_19, ((((arr_1 [i_1 - 2]) - (min((((var_8 <= (arr_0 [16] [i_1 - 3])))), (arr_3 [i_0] [i_0]))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_1] = (((-4769956550371703645 + 9223372036854775807) << (((((arr_2 [i_0] [i_1 + 1]) + 11740)) - 35))));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = (~var_5);
                    var_20 = (min(var_20, ((((((var_3 >> (((arr_3 [i_0] [i_0]) + 8059299408714831434))))) ? -7489 : var_6)))));
                    arr_10 [i_1] [i_1] = (((-117 > 4769956550371703645) == (18757 > -4769956550371703646)));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    arr_15 [i_1] [i_1] = (min(-607293670955699612, var_15));
                    arr_16 [i_0] [18] [18] [i_1] = ((min(4769956550371703640, ((min(var_3, var_15))))));
                }
                var_21 = ((min(3706516483, 7488)));
                var_22 = ((min(((var_7 ? var_6 : 196)), ((var_12 ? 156 : 3583659015)))));
            }
        }
    }
    var_23 = (((((((992 ? 206 : 161)) & (3456580260 >= 2250873323)))) ? (min(((4294967283 ? var_5 : 199)), var_1)) : ((var_12 ^ (2709616285 < var_2)))));
    #pragma endscop
}
