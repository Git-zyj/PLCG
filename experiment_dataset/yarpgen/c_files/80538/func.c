/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80538
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
    var_10 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_11 = max((((/* implicit */unsigned long long int) (signed char)19)), (12556599317046410207ULL));
        arr_2 [i_0] = ((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) ^ (((/* implicit */int) ((max((5890144756663141400ULL), (((/* implicit */unsigned long long int) var_5)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
        var_12 = ((/* implicit */unsigned char) var_0);
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) max((((/* implicit */short) ((signed char) arr_4 [i_1]))), ((short)32757)));
        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))));
    }
    var_15 = ((/* implicit */unsigned char) var_6);
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (signed char)24)))))) == ((~(((/* implicit */int) (unsigned short)65535))))));
}
