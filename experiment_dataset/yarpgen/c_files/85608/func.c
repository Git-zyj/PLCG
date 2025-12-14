/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85608
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
    var_11 *= ((/* implicit */short) max((((min((((/* implicit */int) var_7)), (var_3))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)46))))))), ((((_Bool)1) ? (((/* implicit */int) max((var_8), (((/* implicit */short) (signed char)-26))))) : (((/* implicit */int) var_9))))));
    var_12 = ((/* implicit */_Bool) min(((short)-12726), (((/* implicit */short) var_9))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_13 = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 3]))))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-105)) == (684112803))))))));
        arr_4 [(signed char)13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (964351401794621595ULL)))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (signed char)-70))))));
    }
    for (int i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_8 [i_1]), (((/* implicit */unsigned short) var_4)))))) : (((13258279031152067501ULL) * (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_1])))))));
        arr_9 [i_1] = ((/* implicit */short) max((((signed char) var_8)), (max(((signed char)26), ((signed char)37)))));
        arr_10 [i_1] = ((/* implicit */unsigned char) ((max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_2)) ? (-684112803) : (((/* implicit */int) (signed char)95)))))) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) 17482392671914930021ULL)) ? (arr_6 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1])))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_6 [i_1]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
    }
}
