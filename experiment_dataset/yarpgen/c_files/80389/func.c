/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80389
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
    var_16 ^= ((/* implicit */signed char) (+(7511673296013250895LL)));
    var_17 = ((/* implicit */signed char) max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5251814310131580493LL)) || (((/* implicit */_Bool) var_5)))))));
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) max((((/* implicit */long long int) var_1)), (((long long int) (unsigned short)12)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_19 = ((/* implicit */_Bool) 5667108800606312126LL);
        var_20 = ((/* implicit */int) (((~(arr_2 [i_0]))) ^ (((/* implicit */unsigned int) (+(274012349))))));
        arr_3 [i_0] [18] = ((/* implicit */unsigned long long int) max((max((((arr_2 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) max((arr_1 [i_0]), (arr_1 [i_0])))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) <= (arr_2 [(unsigned short)2]))))));
    }
}
