/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86915
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) 18446744073709551612ULL);
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) / (arr_0 [i_0])))), (((((/* implicit */unsigned int) arr_0 [i_0])) + (arr_1 [i_0]))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) min(((short)-10600), (((short) var_6))))) | (((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_1])), (min((var_11), (((/* implicit */unsigned short) arr_5 [(signed char)8] [i_1])))))))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_14)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_5 [i_1] [i_1])))) : ((-(((/* implicit */int) arr_5 [i_1] [(unsigned short)15]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 3) 
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_2 - 2])) : (((/* implicit */int) (short)15221))));
        var_23 -= ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_2 + 1] [i_2 - 3]))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            for (unsigned int i_4 = 1; i_4 < 10; i_4 += 2) 
            {
                {
                    arr_14 [i_2] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (signed char)0)) * (((/* implicit */int) arr_4 [i_4])))));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_4 [i_2 - 1])))))));
                }
            } 
        } 
        var_25 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2 + 1])) | (((/* implicit */int) var_12))));
    }
    var_26 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) (signed char)0))))) > (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) min((0U), (((/* implicit */unsigned int) var_18))))) : ((+(var_4)))))));
    var_27 = ((/* implicit */unsigned long long int) ((unsigned int) (short)10332));
}
