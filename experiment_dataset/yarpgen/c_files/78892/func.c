/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78892
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
    var_18 = ((short) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_7))), (((long long int) var_6))));
    var_19 = (+(((/* implicit */int) var_9)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_7)) : (var_5))) : (((((/* implicit */_Bool) var_0)) ? (var_0) : (var_5)))))) ? (((((/* implicit */_Bool) var_8)) ? ((+(var_15))) : (((unsigned long long int) 2551785961733020723LL)))) : (((unsigned long long int) (!(((/* implicit */_Bool) (short)-1)))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    var_21 = var_8;
                    arr_8 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned long long int) var_2))))))));
                }
            }
        } 
    } 
}
