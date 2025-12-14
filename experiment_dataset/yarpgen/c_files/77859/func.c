/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77859
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
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = var_4;
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_1 [(unsigned char)7]))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (~(((/* implicit */int) ((var_1) == (((/* implicit */int) (unsigned char)69))))))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) min((var_5), ((unsigned char)175)))), (((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))) : (9787527542772156412ULL))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)6))))) ? (((/* implicit */int) (unsigned char)117)) : (min((((/* implicit */int) (unsigned char)139)), (var_3))))))));
    }
    var_18 = ((/* implicit */short) min((((/* implicit */unsigned short) var_0)), (var_8)));
}
