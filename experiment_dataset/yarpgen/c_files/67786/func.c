/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67786
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) ? (var_5) : ((+(((((/* implicit */_Bool) (unsigned char)64)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        var_12 = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_0])))), (((((((/* implicit */int) (unsigned char)181)) | (((/* implicit */int) (unsigned char)182)))) & (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (-(((8781705382953889339LL) - (((/* implicit */long long int) ((((/* implicit */_Bool) -8781705382953889340LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)69))) : (1568265651U)))))))))));
    }
    var_14 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) == (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31451))) * (6423291813881239700ULL))))))) % (-8781705382953889340LL)));
    var_15 = ((/* implicit */long long int) (((+(((var_5) + (var_5))))) + (((/* implicit */unsigned long long int) var_4))));
}
