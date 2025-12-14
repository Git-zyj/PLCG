/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85664
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
    var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)10528)), (-2244556741829066021LL)))) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))))) ? (min((((/* implicit */unsigned long long int) (!((_Bool)1)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)214))) : (var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10528)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (short)-10528))));
                    var_22 = ((/* implicit */signed char) (((((-(((/* implicit */int) arr_1 [i_0])))) <= (((/* implicit */int) var_18)))) ? ((((~(((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-80))))))) : (((/* implicit */int) ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_1]))) >= (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_2 [i_0] [i_0])), (var_12)))))))));
                    var_23 = ((/* implicit */unsigned long long int) (+((((!(((/* implicit */_Bool) (unsigned char)28)))) ? ((+(((/* implicit */int) var_18)))) : ((~(((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
}
