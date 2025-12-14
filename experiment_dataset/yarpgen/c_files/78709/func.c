/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78709
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
    var_19 = min((max((((((/* implicit */_Bool) (unsigned char)1)) ? (0ULL) : (((/* implicit */unsigned long long int) 1357024662)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)2)) ? (4557842237703806271LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6)))))))), (((/* implicit */unsigned long long int) var_4)));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) || ((!((!(((/* implicit */_Bool) 10051297956883629813ULL))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */unsigned long long int) max(((+(arr_0 [i_0] [i_0]))), (min((var_0), (arr_0 [i_0] [i_0])))))) + ((+(12413781963663892855ULL))))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0])))))))) < (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37))))))) : (-5373582730880405323LL)))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 4557842237703806271LL)) >= (((((/* implicit */_Bool) 1893920654)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_2 [i_1]))))));
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127)))))));
        arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -3)) ? (2198748280U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65119)))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) arr_3 [i_1]);
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned long long int) arr_2 [8ULL]);
        var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_2 [(signed char)4])))) ? (((/* implicit */unsigned long long int) arr_2 [(unsigned short)16])) : (((var_18) ? (((/* implicit */unsigned long long int) 1758403868U)) : (14556349542365774156ULL)))));
        arr_10 [i_2] &= ((/* implicit */unsigned char) min(((+(-960440162))), (((/* implicit */int) arr_4 [8]))));
        arr_11 [i_2] |= ((/* implicit */_Bool) max((var_9), (((/* implicit */int) arr_4 [i_2]))));
    }
}
