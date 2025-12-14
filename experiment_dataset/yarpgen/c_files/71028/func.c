/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71028
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_10 [(unsigned char)16] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((~(((/* implicit */int) arr_8 [i_0] [i_1] [13LL] [i_1])))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (arr_1 [i_0] [i_0]))))))));
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_11))));
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8448797102071778239ULL))));
}
