/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/640
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1695337279)) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_4))))) : (var_10)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) var_9);
                var_16 ^= ((/* implicit */long long int) min(((~(7834399891397970101ULL))), (((/* implicit */unsigned long long int) min((arr_4 [i_1] [2ULL] [i_0]), (arr_4 [i_0] [2] [i_0]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_11), (max((10612344182311581532ULL), (((/* implicit */unsigned long long int) (unsigned char)1))))))) ? (((/* implicit */int) var_4)) : (var_13)));
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-(max((min((var_13), (((/* implicit */int) var_2)))), (((/* implicit */int) var_5)))))))));
}
