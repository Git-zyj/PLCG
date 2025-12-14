/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min(((var_9 ? var_14 : var_5)), var_5))) ? ((min(var_3, (var_4 + var_1)))) : (min(((var_7 ? var_15 : var_9)), ((((-2147483647 - 1) + 2147483647)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((((((var_4 ? var_12 : (arr_1 [i_1])))) ? 2147483647 : ((max(-77, 71)))))) ? (((+(((arr_1 [3]) ? (arr_0 [1]) : 7936))))) : (arr_1 [i_0])));
                var_18 = (-262820059 < 2147483647);
            }
        }
    }
    var_19 = var_12;
    #pragma endscop
}
