/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98555
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
    var_15 = ((/* implicit */signed char) (-(var_3)));
    var_16 = ((/* implicit */unsigned short) (+(max((min((var_11), (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_2)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)25)) ? (3545744063569771572ULL) : (((/* implicit */unsigned long long int) var_3))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) 14901000010139780050ULL);
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))));
        var_19 = ((/* implicit */signed char) max((var_19), (((signed char) arr_1 [i_0]))));
        arr_4 [(unsigned short)18] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)212)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
    }
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_1))));
}
