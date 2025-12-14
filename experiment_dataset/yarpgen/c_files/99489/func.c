/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99489
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
    var_13 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))));
    var_14 = ((/* implicit */int) var_8);
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (min((((/* implicit */long long int) var_5)), (var_1)))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (1363654398) : (((/* implicit */int) var_8))))) - ((((_Bool)1) ? (var_2) : (((/* implicit */long long int) var_10)))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)176))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 += ((/* implicit */signed char) arr_0 [(short)8]);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) var_11);
    }
    for (long long int i_1 = 3; i_1 < 7; i_1 += 3) 
    {
        var_17 += (unsigned char)176;
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) min((((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (arr_2 [i_1 + 3]) : (arr_2 [i_1 + 3]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        var_19 *= ((/* implicit */short) min((((/* implicit */int) (_Bool)1)), (min((((((/* implicit */_Bool) arr_9 [(unsigned short)6] [i_2])) ? (((/* implicit */int) (short)-31207)) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) var_5))))))));
        var_20 *= ((/* implicit */_Bool) ((long long int) max((((/* implicit */long long int) ((unsigned short) var_2))), (var_1))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)79))) ? (((((/* implicit */_Bool) var_4)) ? (arr_2 [i_2]) : (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))))) ? (arr_9 [i_2] [(signed char)19]) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((unsigned char) var_8)))))));
    }
    var_22 = ((/* implicit */short) var_3);
}
