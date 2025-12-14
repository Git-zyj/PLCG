/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58651
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [(unsigned short)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1428535532)) ? (((/* implicit */int) arr_1 [i_0])) : (1428535524)))) ? (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))) : (((/* implicit */int) arr_1 [i_0]))));
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) arr_1 [(signed char)15])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (-1252227706370271036LL))))) != (((/* implicit */long long int) ((((var_11) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))))) - (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0] [i_0])))))))))))));
        arr_3 [i_0] = ((/* implicit */signed char) min((-1428535535), (((/* implicit */int) arr_1 [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_1 [i_0]))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
    {
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) arr_5 [1LL]))));
        var_14 = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) (unsigned short)32665)) ? (15ULL) : (arr_5 [i_1]))), (max((((/* implicit */unsigned long long int) arr_8 [i_1 - 1] [i_1 + 1])), (arr_5 [i_1 + 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_6 [i_1 - 1]) : (((/* implicit */int) arr_0 [i_1 + 1] [i_1]))))) | (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_7 [i_1]))))))));
    }
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((signed char) (+(-1428535532))))) : (((/* implicit */int) (short)26346))));
}
