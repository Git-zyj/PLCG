/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72971
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
    var_10 = ((/* implicit */long long int) ((max((var_2), (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)31384))))))) | (((/* implicit */unsigned long long int) (~(((var_0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))))))));
    var_11 = ((/* implicit */unsigned short) (!(var_6)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_12 += ((/* implicit */unsigned short) (+(((((/* implicit */int) (!((_Bool)1)))) & (((/* implicit */int) (!((_Bool)1))))))));
        arr_3 [i_0] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)0), (((/* implicit */unsigned char) arr_1 [i_0]))))) ? (((/* implicit */int) arr_1 [13U])) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [(unsigned short)2])) : (((/* implicit */int) (_Bool)1)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_0 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0])))))));
        var_13 |= ((/* implicit */unsigned char) max(((+(((/* implicit */int) (unsigned short)21248)))), (max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))), (((((/* implicit */int) (unsigned short)33004)) * (((/* implicit */int) (_Bool)1))))))));
        arr_5 [i_0] = ((/* implicit */int) (~(((max(((_Bool)1), (var_6))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)25396))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29810))) | (531511471U)))))));
    }
    var_14 = ((/* implicit */signed char) var_7);
}
