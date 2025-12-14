/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((((min(var_4, 77)))), (((((-31090 ? var_3 : var_0))) ? var_2 : -74))));
    var_11 = var_3;
    var_12 = 2794760638021271084;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = 8574315911687930554;
                arr_5 [i_0] [i_1] = (min(((-((var_7 ? 6546236123796544412 : (arr_4 [8]))))), ((min(var_6, (min(255, 3)))))));
            }
        }
    }
    var_14 = ((((((min(var_6, 46867)))) ^ (var_3 - 220))) == 34937);
    #pragma endscop
}
