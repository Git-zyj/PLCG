/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93073
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) -254960006);
        arr_3 [i_0] = ((/* implicit */signed char) (!(arr_1 [i_0])));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_0 [i_0]))));
        arr_4 [i_0] = ((/* implicit */signed char) -2147483639);
    }
    for (short i_1 = 2; i_1 < 14; i_1 += 4) 
    {
        var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (-(((/* implicit */int) (short)11))))), (((arr_7 [i_1 + 3]) * (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))))));
        var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-12)) ? (var_14) : (var_12))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))), (((unsigned int) ((-1875662753) - (((/* implicit */int) (short)27033)))))));
    }
    var_19 = ((((/* implicit */int) var_5)) <= (((/* implicit */int) max((max(((short)32), (var_5))), ((short)-11)))));
}
