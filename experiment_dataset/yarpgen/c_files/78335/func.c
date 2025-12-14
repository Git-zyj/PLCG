/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78335
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
    var_19 *= ((/* implicit */_Bool) min((((unsigned int) var_4)), (((/* implicit */unsigned int) var_4))));
    var_20 *= max((min((((var_11) & (((/* implicit */int) (short)-24696)))), (((/* implicit */int) (short)25718)))), (((/* implicit */int) var_16)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */_Bool) (signed char)115);
            arr_7 [i_0] &= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0] [i_0]))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((4221378525U) > (var_15)))))));
            arr_8 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_0 [i_1] [i_0])) >> (((((/* implicit */int) arr_0 [i_0] [i_1])) - (206)))))));
            var_21 |= ((/* implicit */short) min((73588771U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((4221378527U), (((/* implicit */unsigned int) arr_2 [i_1]))))) || ((_Bool)1))))));
            arr_9 [i_0] = ((((/* implicit */_Bool) ((long long int) arr_4 [i_0] [i_1]))) ? ((-((-(4221378527U))))) : (4221378525U));
        }
        for (signed char i_2 = 2; i_2 < 8; i_2 += 2) 
        {
            arr_14 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) arr_10 [i_0] [i_2 - 2])) / (arr_4 [i_0] [i_2 + 1])))));
            arr_15 [i_2] &= ((/* implicit */signed char) ((((int) arr_12 [i_2 + 1])) / (((/* implicit */int) ((((/* implicit */_Bool) 73588743U)) || (((/* implicit */_Bool) 73588768U)))))));
            arr_16 [i_2] = (-(((long long int) arr_12 [i_2 - 1])));
            var_22 = ((/* implicit */unsigned int) (signed char)112);
        }
        var_23 = ((((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) >> (((/* implicit */int) ((arr_4 [i_0] [i_0]) < (arr_4 [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)93)))) : (min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_10 [i_0] [i_0]))));
        arr_17 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])) - (16602407753597179340ULL)))));
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((unsigned int) max((2067671231), (arr_2 [i_0])))))));
        arr_18 [i_0] = ((/* implicit */unsigned short) max((((unsigned long long int) ((short) (signed char)-112))), ((-(arr_3 [i_0] [i_0])))));
    }
}
