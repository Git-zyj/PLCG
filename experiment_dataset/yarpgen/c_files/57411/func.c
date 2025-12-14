/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57411
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
    var_20 = (short)(-32767 - 1);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [(signed char)10] [i_0] &= ((/* implicit */unsigned char) ((_Bool) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32752))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0])))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) (short)32756)) % (((/* implicit */int) (signed char)9))))));
            arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */int) ((arr_6 [i_1]) < (arr_6 [i_1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1])))))));
            arr_9 [i_1] [(unsigned char)9] = ((/* implicit */_Bool) (short)-32738);
            arr_10 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_1]))))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) - (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (8372224U)))))));
        }
    }
    for (short i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (max((arr_12 [i_2] [i_2]), (((/* implicit */unsigned int) arr_13 [i_2])))) : (((var_4) ? (arr_12 [i_2] [i_2]) : (((/* implicit */unsigned int) var_5))))));
        arr_14 [14LL] |= ((/* implicit */short) (+(((((/* implicit */_Bool) (short)32730)) ? (arr_12 [i_2] [i_2]) : (arr_12 [i_2] [i_2])))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
    {
        arr_18 [i_3] [(unsigned short)12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */int) arr_15 [i_3])) : (((/* implicit */int) arr_15 [i_3]))));
        var_23 = (unsigned char)31;
        arr_19 [(_Bool)1] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((var_5) + (((/* implicit */int) arr_15 [i_3]))))) <= (arr_11 [i_3])));
        arr_20 [i_3] = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_4)))) == (arr_13 [i_3])));
    }
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_10)))), (((/* implicit */int) var_3)))))));
}
