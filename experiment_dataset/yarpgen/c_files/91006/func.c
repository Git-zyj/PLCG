/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91006
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
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = var_1;
                    var_19 |= ((/* implicit */unsigned int) max((min((((/* implicit */long long int) var_18)), (arr_0 [i_0 + 1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [(_Bool)1]))) : (var_7)))))))));
                    var_20 = ((/* implicit */unsigned short) max((var_7), (((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_14)), (arr_0 [i_0 - 2]))), (((/* implicit */long long int) var_17)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_16);
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    arr_15 [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 11516107857193840062ULL)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_4 [12LL] [(unsigned char)8] [(unsigned char)8] [13LL])) != (((/* implicit */int) arr_5 [i_3] [i_4] [(unsigned short)7])))))))) : (min((((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) ((unsigned short) var_6)))))));
                    /* LoopSeq 2 */
                    for (signed char i_6 = 1; i_6 < 12; i_6 += 4) 
                    {
                        arr_20 [i_3] [i_6] [i_5] [i_5] = ((/* implicit */signed char) var_5);
                        arr_21 [i_3] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_6 + 1] [i_6] [i_6 - 1] [i_6]), (arr_4 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6]))))) ^ (((((/* implicit */_Bool) min((((/* implicit */short) (signed char)7)), ((short)-22969)))) ? (max((var_7), (((/* implicit */unsigned long long int) arr_2 [i_3] [i_3] [i_3])))) : (min((((/* implicit */unsigned long long int) 405877785)), (arr_16 [(short)7] [1LL] [i_6])))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 12; i_7 += 3) 
                    {
                        var_22 = ((/* implicit */signed char) max((var_22), (arr_19 [i_7 - 1] [i_5] [i_7 - 1] [i_7 - 1] [i_7 - 1] [4ULL])));
                        arr_26 [i_3] [i_4] [(short)10] [i_7] = ((/* implicit */long long int) (+(arr_22 [i_7 + 1] [i_7 - 1])));
                    }
                    var_23 = ((/* implicit */unsigned int) (short)21392);
                    var_24 = ((/* implicit */unsigned char) min((((arr_14 [i_3] [i_4] [i_5]) ? (((/* implicit */int) arr_14 [i_3] [i_4] [i_5])) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) arr_19 [i_3] [i_5] [4] [i_5] [i_5] [i_3])) ? (((/* implicit */int) arr_14 [i_4] [i_4] [i_5])) : (((/* implicit */int) var_11))))));
                }
                arr_27 [7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_4])) ? (min((((/* implicit */unsigned long long int) var_18)), (arr_13 [i_3]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (arr_13 [i_3])))));
            }
        } 
    } 
}
