/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96170
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
    var_10 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_11 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (var_5)))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) (~(max((((((/* implicit */_Bool) 5366447100148456190ULL)) ? (9957236900056121712ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) (_Bool)1)))))))));
        arr_3 [i_0 + 3] = ((/* implicit */long long int) arr_0 [i_0 + 4]);
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_7)), (((arr_5 [i_1] [i_1]) ? (var_8) : (((/* implicit */unsigned long long int) arr_4 [i_1]))))));
        arr_7 [i_1] = ((/* implicit */_Bool) arr_4 [i_1]);
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_4 [i_1])))) ? (min((arr_4 [i_1]), (arr_4 [i_1]))) : (((/* implicit */long long int) (+(((/* implicit */int) var_6)))))));
        var_12 = ((/* implicit */unsigned char) var_0);
        var_13 = ((/* implicit */int) max((((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)18310)))) ? (((((/* implicit */_Bool) var_3)) ? (var_5) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (+((+(((/* implicit */int) (_Bool)1)))))))));
    }
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) >> (((max((max((((/* implicit */unsigned int) (short)24576)), (3564800913U))), ((+(var_2))))) - (3564800905U)))));
    var_15 = ((/* implicit */int) var_2);
}
