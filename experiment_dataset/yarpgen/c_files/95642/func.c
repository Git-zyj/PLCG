/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95642
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_11)))) && (((/* implicit */_Bool) var_17))))))));
    var_19 -= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((short) var_0))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((unsigned long long int) max((max((var_1), (arr_4 [i_0]))), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) >= (arr_1 [i_0] [(signed char)3]))))))))));
                    var_21 = ((/* implicit */long long int) max((var_21), ((-(max((-5087688444363383764LL), (((/* implicit */long long int) (+(((/* implicit */int) var_16)))))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_3);
}
