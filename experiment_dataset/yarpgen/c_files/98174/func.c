/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98174
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) | (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_4)))) : (min((arr_1 [i_0 + 1]), (((/* implicit */unsigned long long int) -1879316911925158342LL))))));
        arr_4 [10ULL] |= ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (arr_1 [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
        arr_5 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((int) ((((((/* implicit */int) arr_3 [i_0] [i_0])) >= (((/* implicit */int) arr_2 [11U])))) ? (((((/* implicit */int) arr_0 [i_0 + 1] [i_0])) ^ (((/* implicit */int) (signed char)-110)))) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 2])))));
        arr_6 [(signed char)20] [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_14 = (!(((/* implicit */_Bool) (unsigned short)65525)));
        arr_10 [i_1] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) arr_2 [i_1 - 1])))));
        arr_11 [i_1] = ((/* implicit */unsigned long long int) ((int) arr_3 [(signed char)14] [i_1 - 2]));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((arr_9 [i_1 - 2] [i_1 - 1]) + (((/* implicit */unsigned long long int) var_4))));
                    var_16 = ((/* implicit */unsigned long long int) ((long long int) arr_15 [i_1]));
                }
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        var_17 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */long long int) ((unsigned int) var_6))) : (min((arr_19 [i_4]), (((/* implicit */long long int) arr_20 [i_4])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)194))))) ? (((/* implicit */long long int) arr_12 [i_4] [13U])) : (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_16 [i_4] [i_4] [(unsigned short)11] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
        var_18 = ((/* implicit */unsigned short) ((arr_18 [i_4]) ? (((/* implicit */int) ((((/* implicit */int) arr_18 [i_4])) < (((/* implicit */int) var_10))))) : ((~(((/* implicit */int) (short)7893))))));
        var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(var_7)))), (((unsigned int) var_0))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        arr_23 [(signed char)6] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */long long int) 915634156)) < (-7466247626324291698LL))))));
        var_20 = ((/* implicit */unsigned char) ((long long int) arr_17 [i_5] [i_5] [i_5]));
    }
    var_21 += ((/* implicit */unsigned int) var_10);
}
