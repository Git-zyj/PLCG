/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64101
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (max((((((/* implicit */_Bool) 17179867136ULL)) ? (((/* implicit */unsigned long long int) var_12)) : (18446744056529684479ULL))), (((/* implicit */unsigned long long int) ((signed char) -2322299856234908948LL))))) : (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_12)) : (var_9))) << (((-2322299856234908926LL) + (2322299856234908958LL)))))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_15)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) ? (((int) ((short) var_10))) : (((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) 2322299856234908948LL))), (arr_9 [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */int) var_13)) - (min((var_11), (((/* implicit */int) arr_4 [i_0]))))))) : (min((((/* implicit */long long int) var_16)), (((arr_0 [i_1]) | (var_17))))))))));
                    var_21 = (i_1 % 2 == zero) ? (((/* implicit */short) ((arr_9 [i_1]) << (((max((arr_9 [i_1]), (var_12))) - (1250820086)))))) : (((/* implicit */short) ((((arr_9 [i_1]) + (2147483647))) << (((((((max((arr_9 [i_1]), (var_12))) - (1250820086))) + (49030937))) - (10))))));
                }
            } 
        } 
    } 
}
