/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56896
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
    for (short i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)1)), (arr_0 [i_0])))), (((unsigned int) 828896941U))))) ? (10627665143254917087ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (arr_1 [i_0])))))))));
        arr_2 [i_0] = ((((((/* implicit */int) ((((/* implicit */int) (short)32767)) > (((/* implicit */int) (short)32758))))) % (((/* implicit */int) arr_1 [i_0])))) >= (((/* implicit */int) ((unsigned short) arr_1 [i_0 + 2]))));
        var_17 += ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1])))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((short) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_4)))));
        var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) min((((int) 17412613551572168971ULL)), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1])))))))) ? (((((/* implicit */_Bool) 7U)) ? ((-2147483647 - 1)) : (((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (signed char)23)))))) : ((~(((/* implicit */int) arr_0 [i_0 - 2]))))))));
    }
    var_19 = (signed char)127;
}
