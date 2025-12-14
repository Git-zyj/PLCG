/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98023
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_15 |= ((/* implicit */unsigned short) ((max((arr_4 [i_0 - 1]), (((/* implicit */unsigned int) (signed char)63)))) / (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)127), ((signed char)-41)))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */signed char) var_4);
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) max((arr_1 [i_0 - 1]), (arr_1 [i_0 + 2]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_1);
    /* LoopSeq 2 */
    for (int i_2 = 1; i_2 < 19; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) (signed char)-17)) : (var_5)))), (min((((/* implicit */unsigned long long int) var_3)), (arr_8 [i_2 + 2] [i_2])))))) ? (((((/* implicit */int) (unsigned char)76)) ^ (((/* implicit */int) (short)32767)))) : (((/* implicit */int) var_7))));
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) (unsigned char)32)) & (((/* implicit */int) (short)32767)))) : (((/* implicit */int) arr_9 [i_2])))) ^ ((((~(((/* implicit */int) var_3)))) | (0)))));
    }
    for (unsigned short i_3 = 3; i_3 < 8; i_3 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-26043)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)63488)))) >> (((-87715764651243432LL) + (87715764651243448LL)))))), (((((/* implicit */_Bool) var_6)) ? (arr_8 [i_3 - 3] [i_3]) : (arr_8 [i_3 - 1] [i_3]))))))));
        var_20 |= ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3 - 3]))) - ((((_Bool)1) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [(short)2])) && (((/* implicit */_Bool) arr_7 [(unsigned short)16])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 2; i_4 < 7; i_4 += 4) 
        {
            for (long long int i_5 = 4; i_5 < 6; i_5 += 2) 
            {
                {
                    arr_17 [i_4] [i_5] [i_4] [i_4] |= ((/* implicit */signed char) (unsigned char)194);
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((((unsigned int) var_4)) * (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5]))))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))))))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_5 - 4] [i_5 + 3] [i_3]))))) ? (((/* implicit */int) arr_0 [i_5])) : (((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((((/* implicit */int) (unsigned short)25085)) + (arr_11 [i_4 + 2]))) : (((/* implicit */int) arr_3 [i_3] [i_3]))))));
                    var_23 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) max(((unsigned char)76), (var_3))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */short) min(((+(arr_11 [i_3 - 1]))), (((/* implicit */int) (short)-1))));
    }
}
