/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!((min((!var_4), ((var_1 ? 47871 : var_11)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min(var_13, -1263270741));
                var_15 = (((arr_0 [i_0]) ? (((!(!17664)))) : (17664 && 7239547208850928752)));
                arr_6 [i_0] [17] = (arr_1 [i_0] [i_0]);
            }
        }
    }
    var_16 = ((((max(2411, ((8454 ? var_1 : 59168))))) ? 17664 : ((64 ? (min(13935, -1705175882)) : var_10))));
    var_17 = (min(var_17, ((max((min(((min(58593, 20461))), (var_0 + var_2))), var_0)))));
    #pragma endscop
}
