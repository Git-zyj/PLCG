/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78371
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
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [0LL] [(signed char)2] = ((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) || (arr_1 [i_0] [i_0])));
        arr_4 [i_0] = ((((/* implicit */int) arr_0 [(_Bool)1] [i_0])) < (((/* implicit */int) arr_0 [15U] [(_Bool)1])));
        var_17 = ((/* implicit */short) ((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [(unsigned short)7] [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [(_Bool)0] [11ULL]), (arr_0 [i_1] [4ULL]))))) ^ (min((arr_6 [i_1]), (((/* implicit */unsigned long long int) arr_5 [(signed char)0]))))))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_1 [i_1] [6ULL]), (arr_1 [(short)1] [i_1])))) < (((/* implicit */int) (!(((/* implicit */_Bool) 259351094U)))))));
        var_20 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [(signed char)8]))))))))));
    }
    var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) < (((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_5)))) ? (max((var_6), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) var_10))))));
    var_22 = ((/* implicit */unsigned long long int) max(((((+(((/* implicit */int) var_11)))) ^ (((((/* implicit */int) var_8)) & (((/* implicit */int) var_15)))))), (((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_4))))))));
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-111)), (min((303435857), (-2114153177)))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) (unsigned short)60224))))) & (var_16))))))));
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_7)))))) : (((unsigned int) var_6))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((long long int) var_0))) & (((var_16) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
}
