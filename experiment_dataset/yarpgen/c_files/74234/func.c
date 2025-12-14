/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74234
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
    var_11 = ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) 2998352467U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (1296614820U))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((unsigned long long int) 1296614847U)) <= (((/* implicit */unsigned long long int) ((2998352482U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 3])))))))))));
            arr_5 [i_1] = ((/* implicit */signed char) ((arr_4 [i_0 + 3]) >> (((min((max((var_6), (((/* implicit */int) var_5)))), (var_7))) - (77)))));
        }
        arr_6 [i_0 + 2] = ((/* implicit */unsigned char) min((min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 2]))), (((arr_1 [i_0 - 1]) << (((arr_1 [i_0 - 2]) - (3448078557U)))))));
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) 946860128U)))))));
        var_14 = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        arr_11 [i_2 + 1] = ((/* implicit */signed char) ((arr_7 [i_2 + 1]) << (((((/* implicit */int) var_0)) - (4649)))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 2; i_3 < 16; i_3 += 1) 
        {
            arr_14 [i_2 + 1] [i_3] [i_2 + 1] = (+(arr_12 [i_3] [i_3 - 2] [i_3 - 2]));
            arr_15 [i_2] [i_2] = ((/* implicit */short) -1324308822);
        }
        arr_16 [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) arr_1 [i_2 + 1]));
        arr_17 [i_2] = ((/* implicit */unsigned long long int) var_0);
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((signed char) arr_4 [i_4])))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2998352496U)));
    }
}
