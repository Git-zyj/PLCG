/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1669259481136819289;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = 1;
                var_12 = ((~(9914739737665433186 - 127)));
                arr_7 [i_1] = ((((var_4 && (((var_3 | (arr_4 [i_0] [i_0])))))) ? (max(var_9, (arr_4 [i_1 + 2] [i_1]))) : var_8));
                arr_8 [i_1] = (((((44 & (var_6 - -1669259481136819289)))) ? ((var_5 & ((-35718126941593647 ? 1669259481136819289 : 19220)))) : var_3));
                var_13 = (((max((max(0, 255)), (!-1))) & ((min(-1669259481136819290, (arr_0 [i_1 + 2]))))));
            }
        }
    }
    #pragma endscop
}
