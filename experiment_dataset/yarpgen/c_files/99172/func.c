/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99172
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
    var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [1LL]))))) ? ((+(((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0 + 1]))))))))));
        var_15 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) arr_0 [(signed char)8] [2ULL]))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0 + 1]))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned char)2])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [9LL])) : (((/* implicit */int) arr_2 [i_0]))))))) : ((-(-17LL)))));
    }
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_0))))))) ? (var_13) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
}
