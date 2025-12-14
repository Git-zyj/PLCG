/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76166
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_8 [i_0] = (unsigned short)1572;
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned int) arr_4 [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((((/* implicit */int) var_8)) << (((/* implicit */int) (_Bool)1)))), (max((((/* implicit */int) (unsigned short)38938)), (var_3)))))) / ((((+(6LL))) * (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)38958)))))))));
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */int) max((((signed char) 18446744073709551607ULL)), (((/* implicit */signed char) (_Bool)0))))) >> (((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32767)))))) - (((var_5) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) + (7LL))))))));
}
