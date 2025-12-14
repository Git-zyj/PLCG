/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, 2914489364));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_16 = (((min((max(2914489364, (arr_0 [i_0] [i_0]))), (((1792229417 ? (arr_3 [i_1 + 1]) : var_1))))) | (((1454311172 % (arr_4 [i_1] [i_1] [i_1]))))));
                var_17 = (max(var_17, ((((var_9 ? (1380477923 && 2932) : (min(var_9, (arr_1 [4] [4])))))))));
            }
        }
    }
    #pragma endscop
}
