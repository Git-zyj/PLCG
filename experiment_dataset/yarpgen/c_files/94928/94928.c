/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (arr_1 [i_0] [i_1])));
                var_15 += (min(1, (min(1, 16464))));
                arr_5 [i_0] [i_0] [i_1] = (min(((-((16464 ? -6408630660651043324 : 61440)))), (((var_3 * ((((arr_0 [i_0] [i_1]) <= (arr_2 [i_0] [i_0])))))))));
                var_16 -= ((((min(var_2, -3662522701228792395))) ? 1720 : 3839491592502914935));
            }
        }
    }
    var_17 = (min(var_17, ((((1 - var_6) > ((((min(var_2, var_7))) ? var_2 : (!-904745794))))))));
    var_18 ^= (((--4101) ? 4096 : var_8));
    var_19 += (var_9 - var_1);
    #pragma endscop
}
