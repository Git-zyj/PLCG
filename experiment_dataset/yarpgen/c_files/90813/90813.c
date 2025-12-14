/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_11 = ((~((~(~853639707719641790)))));
        var_12 = (((!var_9) != ((~(arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_13 += var_4;
            arr_5 [i_1] [i_1] [i_0] = (max((((!(arr_0 [i_0 + 1] [i_1])))), (max((arr_4 [i_0] [i_0 + 1]), var_8))));
            var_14 = ((((((91 && 3) & (((arr_4 [i_0] [i_0]) ? 236 : 3556499011291339571))))) ? ((((((arr_0 [i_0] [i_0]) ? 24 : 1374000993))) ? 62238 : 132)) : ((((var_7 || (arr_2 [i_0])))))));
        }
    }
    var_15 = ((~(8191 ^ 59)));
    #pragma endscop
}
