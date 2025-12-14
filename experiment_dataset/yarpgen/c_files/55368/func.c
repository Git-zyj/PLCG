/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55368
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
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */signed char) var_1);
            var_10 = ((/* implicit */short) (!(((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (unsigned char)0))))));
            arr_7 [i_0 + 2] [i_0 + 2] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) var_0));
            arr_8 [i_0] [i_0 + 3] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
            var_11 ^= ((/* implicit */unsigned char) ((short) ((unsigned short) var_4)));
        }
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)16)) - (((/* implicit */int) (short)-32764))))) : (((((/* implicit */_Bool) (unsigned short)16384)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10))))))))));
            var_13 &= ((/* implicit */short) var_9);
        }
    }
    var_14 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_1) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) 0ULL)) ? (2147483647) : (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) (unsigned short)65516))))) - (min((((/* implicit */unsigned int) (unsigned char)0)), ((+(67108736U))))));
}
