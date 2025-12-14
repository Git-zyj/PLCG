/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70505
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
    var_13 = ((/* implicit */short) min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) (~(543350107U)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)44691)))) : (((/* implicit */int) var_2))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((var_6), (((/* implicit */short) var_5)))), (((/* implicit */short) var_9))))) ? (max((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-121)) * (((/* implicit */int) (unsigned short)65516)))) ^ (((/* implicit */int) min((var_2), (var_4)))))))));
    var_15 = max((((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_4))))))), (var_7));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -859329005)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (16907801217451051515ULL)))) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */int) (short)127)) > (((/* implicit */int) (unsigned short)43328))))))) : (((((/* implicit */int) (signed char)46)) << ((((~(((/* implicit */int) arr_1 [i_0])))) - (11965)))))));
        var_16 -= ((/* implicit */signed char) ((((((/* implicit */int) var_5)) | (((((/* implicit */int) arr_2 [i_0 - 1])) << (((((/* implicit */int) arr_0 [i_0 + 1])) + (87))))))) | ((+(((/* implicit */int) arr_2 [i_0]))))));
        var_17 += ((/* implicit */unsigned int) (+(((((/* implicit */int) var_5)) ^ (((/* implicit */int) ((1538942856258500078ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43316))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) - (401536011609932377LL)))) ? (((((/* implicit */_Bool) (unsigned short)22207)) ? (((/* implicit */int) arr_1 [9ULL])) : (((/* implicit */int) arr_1 [i_0])))) : ((-(((/* implicit */int) var_12)))))), (((((-1) - (((/* implicit */int) arr_0 [i_0 - 1])))) * (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))));
    }
}
