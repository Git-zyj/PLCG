/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96987
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
    var_13 = ((/* implicit */long long int) var_0);
    var_14 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 6; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((short) (~(((/* implicit */int) (unsigned char)228)))))), (max((max((var_2), (((/* implicit */unsigned int) (unsigned char)23)))), (var_9)))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), ((unsigned short)2441)))) ? (min((396753575), (((/* implicit */int) ((_Bool) 693012283))))) : (((/* implicit */int) var_3))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) max(((+(var_2))), (max((((/* implicit */unsigned int) var_6)), (var_12)))));
                var_17 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned char)33)), (32768LL)));
                arr_8 [i_1] [i_1 - 1] [i_1] = ((/* implicit */int) min(((unsigned char)18), ((unsigned char)11)));
            }
        } 
    } 
}
