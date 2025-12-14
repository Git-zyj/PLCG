/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94901
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
    var_11 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
                var_13 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) >> (((max((((/* implicit */int) var_9)), (arr_5 [i_0] [i_1] [i_1]))) - (75813696)))))), (min((min((var_2), (((/* implicit */long long int) arr_0 [i_0] [i_1])))), (((/* implicit */long long int) arr_4 [10ULL]))))));
            }
        } 
    } 
    var_14 = var_8;
    var_15 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) : ((~(18446744073709551593ULL))))) | (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */long long int) var_1)), (5318541883708017170LL)))))));
}
