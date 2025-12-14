/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81714
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
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) (+(((int) 1))))) : (((((/* implicit */_Bool) ((long long int) var_12))) ? (-4434031184166107425LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)15)) && (((/* implicit */_Bool) 4434031184166107441LL)))))))))))));
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) 18446744073709551615ULL))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        arr_4 [i_0 - 1] = ((/* implicit */_Bool) (-(((arr_1 [i_0 + 3]) / (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [(unsigned char)21] [i_0 + 1])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned char) ((arr_1 [i_1 - 2]) >> ((((-(36028797018832896LL))) + (36028797018832904LL)))));
            arr_8 [i_1] [i_1] = -4434031184166107416LL;
            var_22 = ((/* implicit */long long int) ((unsigned int) 36028797018832879LL));
        }
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_23 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned char)49)))), (((/* implicit */int) (unsigned char)219))));
            var_24 |= ((/* implicit */unsigned int) arr_3 [i_0 - 1] [i_0 + 1]);
            var_25 += ((/* implicit */unsigned int) (unsigned char)5);
        }
        for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            var_26 -= ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */int) var_0)), (max((((/* implicit */int) arr_12 [i_0] [i_0] [19])), (arr_0 [i_0] [i_3]))))));
            arr_14 [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)76))) + (36028797018832896LL))));
            arr_15 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 536870911U)) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) (unsigned char)0))));
            var_27 = ((/* implicit */long long int) (short)32767);
        }
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_4] [(_Bool)1])) ? (((/* implicit */int) arr_11 [i_4] [i_4] [i_4])) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (long long int i_5 = 2; i_5 < 21; i_5 += 2) 
        {
            var_29 = (_Bool)1;
            var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) 36028797018832896LL)))));
            arr_22 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_5 + 1])) ? (((/* implicit */long long int) ((arr_2 [i_4]) + (1388765423U)))) : (((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */long long int) var_10)) : (9223372036854775804LL)))));
            arr_23 [i_5] [i_5] [i_4] = ((/* implicit */unsigned char) (short)-26084);
            arr_24 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) -36028797018832875LL);
        }
    }
    var_31 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!((_Bool)0)))), (((long long int) (unsigned char)9))))), ((-(((unsigned long long int) var_4))))));
}
