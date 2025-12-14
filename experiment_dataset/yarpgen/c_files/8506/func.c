/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8506
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
    for (int i_0 = 1; i_0 < 17; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) max((((/* implicit */short) (!(var_11)))), ((short)-23980)));
        arr_3 [12LL] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) max(((unsigned char)15), (((/* implicit */unsigned char) (_Bool)0))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned char) (signed char)31)), (arr_0 [i_0] [i_0]))));
        arr_5 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0] [i_0 + 1]))))));
        arr_6 [i_0] = ((/* implicit */long long int) ((unsigned char) arr_0 [i_0] [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17; i_1 += 2) /* same iter space */
    {
        arr_9 [0ULL] = ((/* implicit */long long int) (+(((/* implicit */int) (short)29589))));
        arr_10 [i_1] = ((/* implicit */unsigned int) ((((var_11) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 + 2] [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 17; i_2 += 2) /* same iter space */
    {
        arr_13 [i_2] [i_2] &= (+(((/* implicit */int) (_Bool)1)));
        arr_14 [i_2] = ((/* implicit */unsigned char) ((((arr_7 [16U] [(signed char)0]) && (((/* implicit */_Bool) arr_12 [i_2] [i_2 - 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_1 [i_2 + 2]) : (((/* implicit */unsigned long long int) arr_11 [5ULL] [5ULL])))))));
        arr_15 [i_2 + 1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_2] [14ULL]))));
        arr_16 [(signed char)8] = ((/* implicit */signed char) arr_0 [0LL] [i_2 + 2]);
    }
    var_13 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (short i_3 = 3; i_3 < 9; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            {
                arr_21 [i_3] [2U] [i_4] = ((/* implicit */unsigned char) (((!((!((_Bool)0))))) ? (arr_11 [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3] [i_4])))));
                arr_22 [i_3] [i_4] [i_4] = ((/* implicit */short) arr_20 [i_3] [i_4]);
            }
        } 
    } 
}
