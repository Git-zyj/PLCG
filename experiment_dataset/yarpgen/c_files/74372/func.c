/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74372
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
    var_11 = ((/* implicit */signed char) min(((short)24117), ((short)12)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) arr_1 [i_0]);
        var_13 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) (!(var_5)))) : (((((/* implicit */int) var_5)) * (((/* implicit */int) arr_1 [i_0]))))));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (short)-11))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_15 -= ((/* implicit */unsigned short) ((19ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16)))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551603ULL)) ? (4294967040ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-66)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [(_Bool)1] [(_Bool)1])), (var_0)))) : (min((((((/* implicit */int) (unsigned short)7168)) >> (((((/* implicit */int) (unsigned short)2048)) - (2035))))), (((/* implicit */int) ((((/* implicit */int) (short)-15)) > (((/* implicit */int) (_Bool)1)))))))));
    }
}
