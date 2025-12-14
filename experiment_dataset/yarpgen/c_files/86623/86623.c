/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_5;
    var_16 = (max(var_16, (((+-2240824632) ? ((max((max(var_0, 2054142678)), var_11))) : (max((max(var_1, var_12)), (var_9 - -1208540478)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [1] [i_0] = 42528;
                arr_6 [i_0] = (((2882800481572259474 ? -2882800481572259467 : -2882800481572259482)));
            }
        }
    }
    var_17 = -var_8;
    var_18 = (min(2054142678, (((((max(var_0, 15422981860547808055))) && var_11)))));
    #pragma endscop
}
