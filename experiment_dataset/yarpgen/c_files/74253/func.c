/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74253
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
    var_16 = ((/* implicit */signed char) min((var_5), (var_4)));
    var_17 = ((/* implicit */signed char) (!(((((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))) >= (var_9)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-12980)))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_19 -= ((/* implicit */signed char) (!(min((((_Bool) (unsigned short)30155)), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) var_11))))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_20 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) (signed char)39)))));
            var_21 = ((/* implicit */unsigned short) ((((arr_1 [i_0] [i_1]) >= (arr_1 [i_1] [i_1]))) ? (((((/* implicit */_Bool) ((unsigned char) 13509145499720213165ULL))) ? (((/* implicit */unsigned long long int) (-(arr_3 [i_0] [i_0] [(_Bool)1])))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (0ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12979)))));
            var_22 = ((/* implicit */unsigned int) (+(var_12)));
            var_23 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)30151)) : (((/* implicit */int) arr_0 [i_0] [i_1])))) >= (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)21407)) : (((/* implicit */int) var_0)))))))));
        }
        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
    {
        var_25 += ((/* implicit */unsigned short) max((max((max((var_5), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) arr_4 [(unsigned short)12])))), (((/* implicit */long long int) arr_5 [12ULL]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            var_26 = ((/* implicit */signed char) (~(var_13)));
            var_27 = ((/* implicit */_Bool) ((arr_5 [i_3]) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)124)) != (((/* implicit */int) (signed char)0))))))));
            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3])) ? (arr_2 [i_2] [i_2]) : (((/* implicit */int) var_0))));
        }
    }
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */int) min((max((arr_10 [i_4] [6U]), (((/* implicit */long long int) arr_0 [i_4] [i_4])))), (max((9223372036854775807LL), (((/* implicit */long long int) var_0))))));
        var_30 = ((/* implicit */unsigned long long int) 0U);
    }
}
