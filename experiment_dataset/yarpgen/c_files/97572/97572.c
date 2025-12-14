/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 0;
    var_14 = (max((min(2335392655, ((var_9 ? var_1 : 1959574641)))), 127));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((-var_7 & (min(((min(var_12, (arr_4 [i_0] [i_0] [0])))), var_8)))))));
                var_16 *= (((((((1801156574 != (arr_4 [i_0] [i_1] [i_1])))) != var_2)) ? (((~(2493810721 & 1801156574)))) : (max(((var_1 ? var_8 : 255)), (arr_2 [i_0])))));
                var_17 = (min(var_17, (((((16425545094577678929 ^ ((min(2493810721, 1959574640))))) + (((max((arr_1 [i_1]), (arr_4 [i_0] [i_1] [i_0]))))))))));
            }
        }
    }
    var_18 = 1801156591;
    #pragma endscop
}
