/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63124
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) (short)-8218)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
        var_20 = ((/* implicit */unsigned long long int) min((arr_2 [i_0]), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)115))))))))));
        var_21 *= ((/* implicit */unsigned short) arr_1 [(unsigned short)4]);
    }
    var_22 = ((/* implicit */signed char) (unsigned short)10601);
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17866))) : (5600135181604286002ULL)))) ? (min((((((/* implicit */_Bool) 6964691205210842210LL)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))), (var_19))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)155)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)86))) : (-2008576698573280495LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
}
