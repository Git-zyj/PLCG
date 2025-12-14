/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81614
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
    var_16 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_0))) || (((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) 7388293415818530905LL))))))));
                arr_6 [i_0] [i_1 - 1] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12)))));
                var_18 = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) 7388293415818530909LL)))));
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) 1966080)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) -7388293415818530900LL)) ? (12544858195790574225ULL) : (arr_3 [21LL] [i_1 + 3] [i_1 + 1]))))))));
                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~((~(arr_0 [i_1]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_3)))));
}
