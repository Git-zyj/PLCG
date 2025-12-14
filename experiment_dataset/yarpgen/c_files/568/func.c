/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/568
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = (i_0 % 2 == 0) ? (min((((arr_1 [i_0]) >> (((((/* implicit */int) (unsigned char)236)) - (236))))), (((/* implicit */long long int) ((-8913511124516587556LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236)))))))) : (min((((((arr_1 [i_0]) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)236)) - (236))))), (((/* implicit */long long int) ((-8913511124516587556LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236))))))));
        var_13 += ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) / ((-(arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(24717362)))) ? (min((var_10), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)128))))) ? (((/* implicit */long long int) ((/* implicit */int) (((-(var_1))) >= (((/* implicit */long long int) -24717362)))))) : (((long long int) ((((/* implicit */int) var_3)) != (var_6)))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) max((((/* implicit */int) ((arr_4 [i_1]) <= (var_10)))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_5 [i_1] [i_1]) : (arr_4 [i_1])))));
    }
    var_15 = ((/* implicit */_Bool) var_9);
    var_16 = (unsigned char)20;
    var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) var_12))));
}
