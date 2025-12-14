/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69853
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((unsigned int) var_6)) & (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) : (((/* implicit */int) var_13))));
    var_21 = ((/* implicit */signed char) ((unsigned char) var_17));
    var_22 = ((/* implicit */long long int) (+(((var_10) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_12)))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_23 = (((!((!((_Bool)0))))) ? (((/* implicit */int) ((_Bool) -1341769290))) : (((/* implicit */int) min((min((arr_3 [6] [6]), (arr_1 [i_0 - 1] [i_0 - 1]))), (arr_1 [i_0] [(_Bool)1])))));
        arr_4 [i_0] = min(((-(((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])))), (((((/* implicit */_Bool) min((((/* implicit */short) arr_2 [23ULL] [i_0])), (arr_0 [i_0 - 1])))) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])) : ((-(((/* implicit */int) var_1)))))));
        var_24 += (!(((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0 - 1] [i_0 - 1]))));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_25 = ((/* implicit */int) ((11081557335264909689ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        arr_8 [i_1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [24ULL] [i_1]))))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)68)), (((unsigned char) arr_6 [i_1] [i_1]))))) : (((/* implicit */int) max((max((var_4), (((/* implicit */unsigned char) arr_2 [i_1] [2])))), (((/* implicit */unsigned char) arr_6 [i_1] [i_1])))))));
    }
    for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_2])) & (((/* implicit */int) arr_10 [i_2])))) & (((((/* implicit */int) arr_0 [i_2])) ^ (((/* implicit */int) arr_10 [i_2]))))));
        var_26 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_1 [i_2] [i_2])))), (((/* implicit */int) arr_1 [i_2] [i_2]))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_3 [i_3] [i_3]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (((/* implicit */int) arr_2 [i_3] [i_3])) : (((/* implicit */int) (short)4088))))) ? (((arr_3 [i_3] [i_3]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_12 [i_3])))) : (((/* implicit */int) (!(arr_1 [1LL] [i_3])))))))));
        var_28 -= ((/* implicit */int) (-(((min((var_19), (((/* implicit */unsigned long long int) arr_0 [i_3])))) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)27341)))))))));
    }
}
