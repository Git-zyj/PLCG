/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79559
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
    var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 10077129404156190499ULL)))))));
    var_21 ^= ((/* implicit */unsigned int) var_14);
    var_22 = ((/* implicit */_Bool) 10077129404156190483ULL);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) min((arr_0 [i_0]), (((arr_1 [i_0]) != (max((arr_1 [i_0]), (8369614669553361113ULL)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)-1);
    }
    for (long long int i_1 = 2; i_1 < 20; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] [i_1 - 1] = ((/* implicit */unsigned char) arr_5 [i_1]);
        var_23 |= ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? ((-(((/* implicit */int) arr_7 [i_1 + 1] [i_1])))) : (((-580709624) + (((/* implicit */int) ((arr_5 [i_1]) != (arr_5 [i_1])))))));
        arr_9 [i_1] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_4 [i_1 + 1]) != (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1])))))))) != (((/* implicit */int) ((short) var_16)))));
    }
    for (long long int i_2 = 2; i_2 < 20; i_2 += 2) /* same iter space */
    {
        var_24 ^= ((/* implicit */_Bool) (((~(((/* implicit */int) arr_7 [i_2] [i_2 + 1])))) + (((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) arr_10 [i_2 - 1])) : (((/* implicit */int) arr_10 [i_2 - 1]))))));
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 580709629)))) : (((((((/* implicit */long long int) 3633161032U)) & (9223372036854775794LL))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))));
        arr_13 [i_2 - 1] [i_2 + 1] = ((/* implicit */int) arr_4 [i_2]);
    }
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_15)) : (var_11)));
}
