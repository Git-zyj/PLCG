/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, ((32754 ? (max((max(32758, 17593191620743563547)), ((min(1, 50))))) : 17593191620743563554))));
                    arr_6 [i_0 - 2] [i_1] = max((min((min((arr_0 [i_1]), (arr_4 [i_0] [i_0] [i_1] [i_2 + 1]))), -351360413)), (35662 * 59346));
                    var_16 = (min(var_16, (arr_1 [i_2 + 1])));
                    var_17 = (min((arr_0 [i_0]), (((min(853552452965988068, 65535)) * (arr_0 [i_0 - 3])))));
                    var_18 = (max(var_18, (1 && 853552452965988069)));
                }
            }
        }
    }
    var_19 = (min(var_19, var_8));
    var_20 = var_2;
    #pragma endscop
}
