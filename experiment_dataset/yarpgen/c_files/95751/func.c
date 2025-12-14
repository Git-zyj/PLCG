/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95751
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 |= var_9;
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_11 = var_1;
                        arr_10 [i_0] [i_2] [i_2] [i_2] = var_1;
                        arr_11 [i_0 + 3] [i_0] [i_1] [6LL] [i_3] = arr_0 [i_0] [i_0 - 3];
                    }
                    arr_12 [i_2] = arr_1 [i_0] [i_0];
                    var_12 = arr_3 [7LL];
                    arr_13 [i_1] = max((min((-1369054105408301585LL), (1369054105408301584LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_0 - 3] [i_1 + 1]))))));
                }
            } 
        } 
    } 
    var_13 &= min((var_2), (var_3));
    var_14 = var_1;
    var_15 = var_3;
}
