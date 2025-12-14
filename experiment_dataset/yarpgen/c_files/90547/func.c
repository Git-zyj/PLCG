/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90547
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
    var_19 = ((/* implicit */unsigned int) min(((-(((((/* implicit */int) (unsigned char)33)) + (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) max((var_14), (var_13))))) && (((((/* implicit */int) ((signed char) (_Bool)1))) <= ((+(((/* implicit */int) var_8))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((max((2147483647), (((/* implicit */int) (unsigned short)4964)))) * (((/* implicit */int) ((unsigned short) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)3304))))))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [(unsigned short)0])), (arr_1 [i_0]))))));
    }
}
