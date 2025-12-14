/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8417
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
    var_16 &= ((/* implicit */unsigned short) var_9);
    var_17 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (unsigned short)25197)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3668411712143200903ULL)) ? (((/* implicit */int) (unsigned short)40719)) : (((/* implicit */int) (unsigned short)61989))))) : (9743642549813810640ULL))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((signed char) ((var_3) >> (((var_6) + (3536473739002983862LL))))))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 + 3] [i_0 + 3] [i_0 - 1])) || (((/* implicit */_Bool) var_3)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 3) 
                {
                    for (long long int i_3 = 3; i_3 < 14; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((unsigned short) (~((+(((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_1] [i_2 + 4] [i_3] [(unsigned char)15])))))));
                                var_20 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_14 [i_3] [i_0] [i_0]))))));
                                var_21 |= arr_4 [i_2] [i_1];
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0 - 1]))))) == (((unsigned long long int) arr_9 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_5 = 3; i_5 < 17; i_5 += 1) 
    {
        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_10 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 + 1])))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((arr_14 [12LL] [12ULL] [12ULL]), (((/* implicit */unsigned short) arr_2 [i_5] [i_5])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 36445324525059888ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18973))) : (var_1)))) ? (min((((/* implicit */unsigned int) arr_7 [(_Bool)1] [(_Bool)1] [(unsigned short)14])), (var_12))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [12ULL] [i_5] [i_5] [9])) ? (((/* implicit */int) arr_8 [16ULL])) : (((/* implicit */int) arr_12 [i_5] [i_5 - 1] [i_5] [12LL] [i_5] [i_5]))))))))))));
        /* LoopNest 2 */
        for (unsigned int i_6 = 3; i_6 < 16; i_6 += 3) 
        {
            for (unsigned short i_7 = 1; i_7 < 15; i_7 += 2) 
            {
                {
                    arr_23 [i_5] [i_6] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_5 - 3] [0] [(_Bool)1] [0] [i_5 - 3]))))) / ((-(max((((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_6] [i_7] [i_7])), (471816535)))))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 2; i_9 < 16; i_9 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_9 - 1] [i_6 + 1] [i_5 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_7 - 1] [i_6 - 3]))))), (((unsigned int) var_0))));
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)43937)) + (((/* implicit */int) (unsigned char)78))));
                                var_27 = ((/* implicit */unsigned int) ((((((int) arr_13 [i_5] [1LL] [5] [i_9] [i_5 + 1])) > (((((/* implicit */int) (signed char)-3)) / (((/* implicit */int) arr_16 [i_5] [i_5])))))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_15))))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned long long int) ((((long long int) ((7207618007842166336ULL) | (((/* implicit */unsigned long long int) arr_6 [(unsigned char)16] [i_6] [(unsigned char)16] [i_5]))))) & (((/* implicit */long long int) min((min((((/* implicit */int) var_4)), (arr_10 [(_Bool)1] [i_5 - 2] [i_5] [i_5 - 2]))), (((/* implicit */int) arr_24 [i_7 + 2] [i_5] [i_5] [i_5])))))));
                }
            } 
        } 
    }
}
