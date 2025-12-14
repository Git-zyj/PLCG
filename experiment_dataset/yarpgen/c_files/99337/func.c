/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99337
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
    var_19 = ((/* implicit */short) var_15);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) min((arr_0 [i_0]), (((/* implicit */unsigned int) -819208752))))) - (1384640658836243144ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_4 [12] [(signed char)13])))) ? (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) arr_2 [19]))))) : (((/* implicit */int) ((-1602802294) >= (((/* implicit */int) var_4))))))))));
                var_21 = ((/* implicit */long long int) min((0ULL), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_0 [i_1])), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32745))) : (1049428531398547925LL))))))));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) 1704528688U))) << (((min((((/* implicit */unsigned int) 2147483647)), (arr_0 [i_0]))) - (2147483646U)))))) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) arr_3 [i_0] [i_1]))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-2LL), (((/* implicit */long long int) (signed char)0))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-13)))))))), (var_15)));
}
