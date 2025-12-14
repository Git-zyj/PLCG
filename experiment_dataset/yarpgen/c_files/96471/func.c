/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96471
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_11))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (~((~(((((/* implicit */_Bool) -791485712)) ? (15984728942109218078ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(short)10]))))))))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)63)))) > (((/* implicit */int) arr_2 [i_0]))))))))));
        var_22 &= ((max((var_11), (arr_0 [i_0]))) / (max((11665726127228252925ULL), (((/* implicit */unsigned long long int) min((1542514599), (-791485712)))))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) min((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) -5173616243662883523LL)) : (6781017946481298694ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5)) ? (arr_1 [10ULL] [10ULL]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))))), (((/* implicit */unsigned long long int) arr_2 [i_0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) < (var_11)))), (arr_6 [i_1]))))));
        var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_4 [7ULL] [i_1]) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (-791485712)))) ? (min((((/* implicit */int) var_7)), (-1043989068))) : (((((/* implicit */int) arr_4 [i_1] [i_1])) * (((/* implicit */int) arr_4 [i_1] [i_1]))))));
    }
    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 4194176ULL))) ? (var_4) : (var_4)))), (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)64615)) : (((/* implicit */int) var_7))))))))))));
}
