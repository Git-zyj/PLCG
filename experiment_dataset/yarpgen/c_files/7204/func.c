/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7204
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
    var_13 = max((((/* implicit */long long int) ((unsigned char) max((((/* implicit */signed char) (_Bool)0)), ((signed char)1))))), (max((((/* implicit */long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))))), (var_3))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) ((arr_0 [i_0]) && (((/* implicit */_Bool) var_3))))) != (((/* implicit */int) arr_0 [(short)16])))))));
        var_15 = ((/* implicit */unsigned char) 12646832138655324575ULL);
        var_16 = ((/* implicit */signed char) (+(max(((+(-5280780689901317719LL))), ((-(0LL)))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) ((min((((/* implicit */long long int) arr_4 [i_1] [i_1])), (arr_1 [(unsigned short)11]))) > (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))))) : (((((/* implicit */int) (unsigned short)55888)) & (((/* implicit */int) (short)5022))))));
        var_18 += ((/* implicit */signed char) max((((/* implicit */unsigned short) (((~(((/* implicit */int) arr_3 [i_1])))) >= (((/* implicit */int) (signed char)0))))), (arr_3 [i_1])));
    }
    var_19 = var_7;
}
