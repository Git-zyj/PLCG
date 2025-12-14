/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85536
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_15)))) ? (((/* implicit */int) ((885381216) != (-1104117867)))) : (((((/* implicit */int) ((short) arr_2 [i_0]))) | ((~(var_4)))))));
                    var_18 = ((/* implicit */long long int) (!(((((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_7))) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_16) : (-885381206))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) min((var_19), (max((max(((+(-626477151248464950LL))), (((/* implicit */long long int) var_4)))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) var_14)))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
    var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (+(var_2)))) ? (min((var_8), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) <= (var_8)))))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_12)) : ((+(((/* implicit */int) ((unsigned char) 1567081371)))))));
}
