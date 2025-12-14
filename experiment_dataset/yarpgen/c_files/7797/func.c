/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7797
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        var_16 ^= ((/* implicit */unsigned long long int) arr_0 [i_0 - 1]);
        arr_2 [i_0] = ((/* implicit */short) ((int) min((arr_1 [i_0 - 2]), (arr_1 [i_0 - 1]))));
        arr_3 [i_0] = ((/* implicit */long long int) arr_0 [11]);
        var_17 += ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((int) ((((/* implicit */unsigned int) 1192622187)) * (1143254217U))))), (min((((/* implicit */long long int) ((((/* implicit */unsigned int) 205258951)) ^ (3151713079U)))), (((((/* implicit */_Bool) 9721390819076441246ULL)) ? (-1LL) : (1125230894186944858LL)))))));
        arr_4 [i_0] = ((/* implicit */int) ((short) arr_1 [i_0 + 2]));
    }
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_8)) : (var_13)))) || (((/* implicit */_Bool) ((((var_8) + (2147483647))) >> (((-1192622188) + (1192622212))))))));
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) max((((signed char) var_6)), (var_4)))), (((var_8) | (((/* implicit */int) ((short) var_11)))))));
}
