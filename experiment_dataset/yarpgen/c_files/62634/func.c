/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62634
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
    var_11 = ((/* implicit */signed char) (-(((((((/* implicit */_Bool) (short)20532)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)15147)))) * (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (var_8))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            {
                var_12 -= ((/* implicit */unsigned char) (short)-15165);
                var_13 = ((/* implicit */int) (!(((((/* implicit */_Bool) (short)-15147)) && (((/* implicit */_Bool) arr_1 [i_0]))))));
                var_14 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)15134))));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) (short)15135))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1] [i_0])) >> (((((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) - (122))))))))) == (-1441360437))))));
            }
        } 
    } 
    var_16 = ((signed char) (-(min((((/* implicit */long long int) 1441360436)), (-871750387507540271LL)))));
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (-(7486355463961594519LL)))) + (((((/* implicit */unsigned long long int) -1441360434)) + (var_0))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1168553922U)))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)20))) - (-576460752303423488LL))))))));
}
