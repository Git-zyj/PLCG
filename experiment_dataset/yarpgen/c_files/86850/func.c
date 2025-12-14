/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86850
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) var_3);
                var_16 ^= ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) var_2))))) == ((-(min((-7149715747161323650LL), (((/* implicit */long long int) arr_5 [i_1] [i_0]))))))));
                var_17 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_2 [i_0])))) - (((/* implicit */int) arr_2 [i_1]))));
                var_18 = ((/* implicit */long long int) (-(-1946635382)));
            }
        } 
    } 
    var_19 = 1946635372;
    var_20 = ((((var_9) > (((/* implicit */int) ((var_9) <= (242895853)))))) ? (var_5) : (var_6));
    var_21 = 0;
}
