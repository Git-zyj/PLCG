/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84805
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_0] [i_1] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)93))))) ? (((((/* implicit */_Bool) max(((unsigned char)12), ((unsigned char)136)))) ? (((((/* implicit */_Bool) (unsigned char)67)) ? (12042394628592078723ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_1] [i_2]))))))) : ((+(arr_5 [i_0] [i_1] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)157))))));
                                var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)36)), ((~(((/* implicit */int) arr_2 [i_0] [8ULL]))))));
                                arr_15 [i_4 + 2] [i_1] [12ULL] [8ULL] [8ULL] [i_1] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)250))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((+(min((var_17), (var_7))))));
    /* LoopSeq 1 */
    for (unsigned char i_5 = 2; i_5 < 12; i_5 += 3) 
    {
        var_23 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [(unsigned char)2] [(unsigned char)2])) ? (arr_10 [i_5 - 1] [i_5]) : (arr_13 [i_5 - 1] [i_5] [i_5] [i_5 - 1]))), (((/* implicit */unsigned long long int) min(((unsigned char)78), (arr_12 [2ULL] [i_5] [i_5] [i_5 - 1] [i_5]))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_17 [i_5 - 1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5 + 1])) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)0))))) ? (arr_13 [i_5] [(unsigned char)4] [i_5 - 2] [i_5 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (unsigned char)67))))))));
        var_24 = (unsigned char)188;
    }
}
