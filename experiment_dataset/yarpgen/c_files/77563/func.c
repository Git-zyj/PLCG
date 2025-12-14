/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77563
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_1 - 1] = min((((/* implicit */int) (short)-12640)), (-1));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((+(-7194881887387418084LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)96)) : ((-2147483647 - 1)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)12639))) : (var_2)))) : (((((/* implicit */_Bool) (-(arr_4 [i_0] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((584789554312288667LL), (((/* implicit */long long int) -758469195))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_16)))) : ((((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_18)))) : (((/* implicit */int) var_16))))));
}
