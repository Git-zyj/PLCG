/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((~var_0), ((min((max(var_7, var_8)), 159)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((var_2 != ((var_1 ? ((11522 ? 7 : var_4)) : var_3))));
                var_13 = ((var_10 ^ (arr_2 [i_0] [i_1])));
                var_14 = (min(var_14, ((((((((((arr_4 [i_0] [i_1]) ? -40 : var_6))) ? ((-(arr_4 [i_0] [8]))) : (arr_2 [i_0] [i_1])))) ? (((min(-142758664, 398091784919031688)) * (11 / -17440))) : (((min(var_11, (arr_4 [i_0] [i_1]))))))))));
                arr_7 [i_0] [i_1] = (min(((5 ? (arr_2 [i_0] [i_1]) : var_7)), ((max(var_3, var_3)))));
            }
        }
    }
    #pragma endscop
}
