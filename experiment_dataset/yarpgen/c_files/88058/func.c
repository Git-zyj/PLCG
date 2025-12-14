/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88058
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
    var_10 -= var_8;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_11 -= ((/* implicit */unsigned short) min((((((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : ((-(var_4))))), (((/* implicit */unsigned int) var_1))));
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? ((-(var_8))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) | (((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0]))))), (var_4)))))))));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) min((var_5), (((/* implicit */short) arr_1 [i_0]))))))))))));
        arr_2 [(signed char)6] |= ((/* implicit */long long int) max(((-((+(((/* implicit */int) arr_1 [i_0])))))), ((+((+(((/* implicit */int) var_2))))))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = (-((-(7641648618906583776LL))));
        var_14 = ((/* implicit */short) arr_4 [i_1]);
        var_15 = ((/* implicit */_Bool) max((var_15), ((!((!(((/* implicit */_Bool) arr_5 [i_1]))))))));
        var_16 += ((/* implicit */unsigned char) var_1);
    }
    for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        var_17 = (-(((/* implicit */int) arr_7 [i_2])));
        var_18 = ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) == (var_3))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (arr_0 [4ULL] [(signed char)1])))) : (((/* implicit */int) arr_7 [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [4]))))))) : (((1374725021U) * (2920242274U))));
        var_19 |= ((/* implicit */int) (+(((var_7) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_8 [2])))));
        var_20 = ((/* implicit */long long int) min((var_20), (var_8)));
        var_21 = ((/* implicit */int) arr_7 [i_2]);
    }
}
