/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59655
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)6)) ? (-1471906711) : (((/* implicit */int) (signed char)-120))))) : (arr_2 [i_0])));
        var_14 = ((/* implicit */signed char) (-(arr_0 [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_1] [i_1])) == (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [i_1])) <= (((/* implicit */int) ((var_0) < (((/* implicit */int) arr_1 [i_1] [i_1]))))))))));
        var_15 = ((/* implicit */short) ((signed char) ((arr_0 [i_1]) >> ((((_Bool)1) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (var_3))))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) (signed char)-120);
        arr_9 [i_1] = min((((((/* implicit */_Bool) min((arr_0 [i_1]), (((/* implicit */long long int) arr_5 [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((arr_1 [i_1] [i_1]) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)0))))) : ((+(2207522254U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_1] [i_1]))) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))));
        arr_10 [i_1] [(signed char)3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) arr_4 [i_1] [i_1])))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [i_1])) < (((var_2) - (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */int) ((var_2) == (((/* implicit */int) arr_5 [i_1] [i_1]))))) << (((((unsigned int) var_7)) - (4294950996U)))))));
    }
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_8) % (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) | (var_0))) ^ (((/* implicit */int) ((unsigned char) var_1)))))) : (((((/* implicit */_Bool) (-(1471906711)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))) : (((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22482)))))))));
    var_17 = ((/* implicit */_Bool) var_5);
}
