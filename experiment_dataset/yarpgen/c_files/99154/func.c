/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99154
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 6; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) max((arr_0 [i_0]), (var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_2 - 2])))))) : (((((/* implicit */_Bool) max(((unsigned short)62774), (((/* implicit */unsigned short) (short)28635))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)511)) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_1 [9])) ? (arr_1 [9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned char)0])))))))));
                    arr_8 [2ULL] |= ((/* implicit */unsigned char) arr_1 [i_1]);
                }
            } 
        } 
    } 
    var_19 = (+(max((((/* implicit */unsigned long long int) var_4)), (min((var_2), (((/* implicit */unsigned long long int) var_16)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_4] [(short)4]))));
                    arr_16 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-90)) + (2147483647))) << (((63) - (63)))))) || (((/* implicit */_Bool) (+(arr_10 [i_5]))))));
                    arr_17 [i_3] [i_3] [i_4] [i_5] = var_14;
                    var_21 = ((/* implicit */long long int) arr_14 [i_3]);
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) arr_12 [i_3] [i_3]);
        var_23 = ((/* implicit */unsigned long long int) arr_9 [i_3]);
    }
    for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) max((arr_20 [14]), ((short)28635)))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_7), (((/* implicit */unsigned short) arr_18 [0])))))) : (((var_1) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20594)))))))))));
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) max((min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_21 [i_6])))))), (((((/* implicit */_Bool) 72057594037927935LL)) ? (72057594037927935LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)219))))))))));
    }
}
