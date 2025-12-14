/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8834
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
    var_20 = ((/* implicit */unsigned int) (~(var_15)));
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) min((-681665845), (((/* implicit */int) ((short) 681665845))))))));
    var_22 = ((/* implicit */long long int) ((var_2) <= (((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) 7317965566856830940LL))), (((681665844) ^ (((/* implicit */int) (signed char)-115)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0 + 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_2 [i_1 - 1]), (3273614683731818941ULL)))) ? ((((+(var_4))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16673))))) : (((/* implicit */unsigned long long int) (-(5854539574863366387LL))))));
                arr_5 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (signed char)-118))));
            }
        } 
    } 
}
