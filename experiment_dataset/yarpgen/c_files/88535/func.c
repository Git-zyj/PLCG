/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88535
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */short) ((((2613725315455017137LL) % (((/* implicit */long long int) (+(((/* implicit */int) (signed char)31))))))) != (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (arr_4 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (~(arr_2 [(short)1] [(_Bool)1] [i_0]))))))));
            }
        } 
    } 
    var_20 -= (-(((/* implicit */int) (signed char)36)));
    var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) ((1363766072) >= (((/* implicit */int) ((var_0) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)5)))))))))));
    var_22 = ((signed char) ((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11)))));
}
