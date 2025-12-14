/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55429
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
    var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((unsigned short) var_5))))) >= (var_4)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 ^= ((/* implicit */signed char) ((((long long int) arr_0 [19ULL])) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_19 = ((/* implicit */unsigned int) var_9);
        arr_3 [18ULL] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) -1)), (var_5)));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_1])) + (2147483647))) >> (((142168177U) - (142168160U)))))) ? (((/* implicit */int) min(((signed char)67), ((signed char)-24)))) : ((-(((/* implicit */int) (_Bool)1))))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) var_2)) / ((+(((/* implicit */int) arr_5 [(unsigned short)0] [i_1])))))));
        var_21 = ((/* implicit */unsigned char) max((3029178689U), (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)0)), (0))))));
    }
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) max((((/* implicit */short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) max((var_14), (var_8))))))), (var_2))))));
    var_23 = ((/* implicit */long long int) min((var_1), (((/* implicit */unsigned int) ((_Bool) ((signed char) var_3))))));
}
