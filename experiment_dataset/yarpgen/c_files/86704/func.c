/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86704
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
    for (unsigned long long int i_0 = 4; i_0 < 13; i_0 += 1) /* same iter space */
    {
        var_19 *= ((/* implicit */_Bool) (~((~(((((/* implicit */int) (unsigned short)42408)) + (((/* implicit */int) (unsigned char)152))))))));
        arr_3 [i_0 - 1] = ((/* implicit */unsigned char) ((arr_0 [i_0 + 2] [i_0]) ? (((unsigned int) arr_0 [i_0 + 2] [i_0 + 2])) : (((/* implicit */unsigned int) ((arr_0 [i_0 + 2] [i_0]) ? (((/* implicit */int) arr_0 [i_0 + 2] [i_0])) : (((/* implicit */int) arr_0 [i_0 + 2] [i_0])))))));
    }
    for (unsigned long long int i_1 = 4; i_1 < 13; i_1 += 1) /* same iter space */
    {
        arr_6 [(unsigned short)10] [i_1] = ((/* implicit */_Bool) max(((+(arr_5 [i_1 - 3]))), (((/* implicit */int) ((_Bool) arr_5 [i_1 - 3])))));
        var_20 += ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
        arr_7 [4U] [i_1 - 1] = ((/* implicit */unsigned char) 9223372036854775782LL);
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned short)0)))))));
    }
    var_22 = ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) var_5))), ((~(((/* implicit */int) max((((/* implicit */short) var_6)), (var_17))))))));
    var_23 = (-(((/* implicit */int) ((_Bool) (short)-32087))));
    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_5))));
}
