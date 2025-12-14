/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65167
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
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_13))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) (unsigned char)3))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-78))))) : (max((var_9), (var_5)))));
    var_17 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))) ^ (((unsigned int) ((2251799813685247ULL) != (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (int i_3 = 1; i_3 < 13; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3 + 1] [i_3 - 1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) arr_1 [i_3 - 1])) : (min((arr_9 [i_0] [i_1] [i_2] [2U]), (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */unsigned int) (-(arr_10 [i_3 + 1] [i_3 + 1] [i_3] [i_3 - 1])))) : (((arr_8 [i_3] [i_3 + 1] [i_3 - 1] [i_3 + 1]) << (((arr_8 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]) - (1166666195U)))))));
                        var_18 -= ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-65))) ^ (1344930800U))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3 + 1])))));
                        var_19 = ((/* implicit */unsigned int) ((int) (-(((/* implicit */int) (signed char)-78)))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            arr_15 [i_4] [i_1] [i_2] [i_1] [i_4] [i_0] [9ULL] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2])))))))))) / ((~(((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_4])) ? (arr_2 [i_1] [i_3]) : (((/* implicit */long long int) arr_3 [i_1]))))))));
                            var_20 = ((((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_0] [i_3 + 1] [i_2] [i_2]))))) & (((((/* implicit */long long int) arr_9 [i_2] [i_3 + 1] [i_2] [i_4])) * (0LL))));
                            arr_16 [4ULL] [i_1] [i_1] [i_1] [(signed char)2] [i_2] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (short)21327)) / (((/* implicit */int) arr_6 [i_3])))) == (((((/* implicit */_Bool) -1792492147)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)121)))))) && (((/* implicit */_Bool) (-(arr_8 [3U] [i_3 + 1] [i_2] [(signed char)13]))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            var_21 &= ((/* implicit */signed char) arr_2 [i_5] [i_2]);
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((1792492146) >> (((((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_2] [i_2] [i_5])) - (16385)))))))) ? (((((/* implicit */int) (signed char)124)) / (((/* implicit */int) (signed char)84)))) : (((int) arr_13 [i_0] [i_1] [i_3 - 1] [i_0] [i_5]))));
                        }
                    }
                } 
            } 
            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) (unsigned char)151)))))))));
        }
        for (long long int i_6 = 1; i_6 < 13; i_6 += 4) 
        {
            arr_21 [i_0] [i_6] [i_6] = ((/* implicit */unsigned char) arr_5 [i_0] [13ULL] [i_0]);
            arr_22 [i_0] [i_0] [i_6 + 1] |= ((((((/* implicit */_Bool) arr_19 [i_6] [i_6] [i_6 + 1])) ? (arr_19 [i_0] [i_6] [i_6 + 1]) : (arr_19 [i_0] [i_6] [i_6 + 1]))) % (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_6] [i_0] [i_0]))) | (((((/* implicit */_Bool) (short)-28051)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))) : (arr_3 [i_6])))))));
        }
    }
    /* LoopNest 3 */
    for (unsigned int i_7 = 3; i_7 < 20; i_7 += 1) 
    {
        for (long long int i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) (signed char)1);
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) max((arr_25 [i_9]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) 4294967295U))) && (((/* implicit */_Bool) arr_26 [i_9] [i_8]))))))))));
                }
            } 
        } 
    } 
}
