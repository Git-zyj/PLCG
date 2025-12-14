/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((~(((max(var_2, var_1)) - (((max(1, 12287))))))));
                arr_8 [i_1] = (((var_2 && 12772) < var_8));
            }
        }
    }
    var_14 = (max((max(64, ((11844 ? -4912658042063879097 : 10551997669681980006)))), ((-(43790 & 504)))));
    #pragma endscop
}
