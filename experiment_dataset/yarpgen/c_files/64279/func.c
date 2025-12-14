/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64279
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
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((unsigned short) var_5)))));
    var_17 = var_7;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */short) (((+(((/* implicit */int) arr_2 [i_0])))) / (((/* implicit */int) arr_2 [i_0]))));
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [2ULL] [i_2])) ? (((var_15) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_1]))))));
                arr_8 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_0 - 1])) + (2147483647))) << (((((((/* implicit */int) arr_1 [i_0 + 2])) + (141))) - (19)))));
                var_19 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_2)) % (((/* implicit */int) (unsigned short)40459))))));
            }
            arr_9 [i_0] [i_0 + 2] [i_0 - 1] = (-(((/* implicit */int) arr_1 [i_1])));
        }
        for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) var_3);
            arr_12 [i_0] [i_0] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 3] [i_0 + 1])) : (((/* implicit */int) var_14)));
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0 - 3])) ? (((/* implicit */int) arr_10 [i_0 - 4])) : (((/* implicit */int) (unsigned short)23141))));
            arr_14 [i_0] [i_0 - 3] [i_3] = ((/* implicit */unsigned int) ((short) ((unsigned int) (unsigned short)23141)));
            arr_15 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)42396))) > (-6021208905015011446LL)));
        }
        arr_16 [i_0] [i_0 - 3] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)37))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_21 = (((+(((/* implicit */int) arr_3 [i_4] [i_4])))) & (((/* implicit */int) max(((unsigned short)42396), (((/* implicit */unsigned short) arr_3 [i_4] [i_4]))))));
        arr_19 [i_4] [i_4] |= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)23141)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))) : (10260343583023423445ULL)));
        arr_20 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) 67092480U))) ? (((((/* implicit */int) (unsigned short)23140)) >> (((((/* implicit */int) arr_3 [i_4] [i_4])) + (20450))))) : (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))));
    }
}
