/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55701
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) max((min((((/* implicit */short) (unsigned char)108)), ((short)31))), (((/* implicit */short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_3)))))))) > (((/* implicit */int) max(((unsigned short)65528), (((/* implicit */unsigned short) (_Bool)1)))))));
        var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)16616))));
    }
    var_12 = ((/* implicit */signed char) max((18446744073709551614ULL), (((/* implicit */unsigned long long int) (short)32760))));
}
