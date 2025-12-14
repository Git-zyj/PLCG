/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88114
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
    var_14 = ((/* implicit */signed char) var_1);
    var_15 = ((/* implicit */short) min(((~(((/* implicit */int) var_9)))), (((/* implicit */int) (short)24605))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_1 [i_0])), (((unsigned int) (~(((/* implicit */int) arr_0 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */_Bool) (+(max((((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)37))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (-((-(var_2))))))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (unsigned char)219);
    }
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_8 [(short)12] [(short)12])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [(unsigned char)6]))))) : (arr_7 [(signed char)11]))))))));
        var_19 = ((/* implicit */signed char) arr_9 [i_2]);
        arr_10 [i_2] = ((/* implicit */_Bool) var_2);
    }
    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        arr_14 [i_3] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_13 [i_3])))) & (((/* implicit */int) max((arr_13 [i_3]), (arr_13 [i_3]))))));
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_19 [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-8))))) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_13 [i_4])))) < (((/* implicit */int) ((((/* implicit */_Bool) 1099511627775ULL)) && (((/* implicit */_Bool) arr_1 [i_4])))))));
            var_20 = ((/* implicit */signed char) 9223372036854710272LL);
            arr_20 [2LL] [i_4] &= ((/* implicit */unsigned char) var_2);
        }
        for (short i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            arr_24 [i_3] [(signed char)10] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_3] [i_3]))))))));
            var_21 = ((/* implicit */unsigned long long int) arr_12 [i_5]);
            var_22 &= ((/* implicit */signed char) (unsigned char)24);
        }
        arr_25 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_13 [i_3]), (arr_13 [i_3])))) ? (((/* implicit */int) min((arr_13 [i_3]), (arr_13 [i_3])))) : (((/* implicit */int) max((arr_13 [i_3]), (arr_13 [i_3]))))));
    }
    var_23 = ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) var_4)))) : (((((/* implicit */int) ((signed char) (unsigned char)24))) + (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)62)))))));
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -5222725218716047318LL)) >= (((((/* implicit */_Bool) ((unsigned char) (unsigned char)172))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)218), ((unsigned char)228))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)45))) | (1099511627775ULL)))))));
}
