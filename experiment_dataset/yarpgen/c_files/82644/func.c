/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82644
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
    var_10 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_11 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12143)) ? (18446744073709551602ULL) : (((/* implicit */unsigned long long int) arr_6 [i_0] [(signed char)8] [i_3]))))) ? (arr_6 [i_0] [12U] [i_3]) : (((arr_6 [i_0] [8] [i_2]) / (((/* implicit */long long int) arr_0 [i_2]))))));
                        arr_11 [(unsigned char)6] [i_1] [i_1] [i_3] [i_0] |= ((/* implicit */unsigned short) ((short) arr_3 [i_3] [i_2]));
                        arr_12 [i_0] [i_2] = ((/* implicit */unsigned int) ((arr_10 [i_0] [i_3 + 1] [i_3] [i_3 - 1] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28672)))));
                    }
                } 
            } 
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) (unsigned short)36864))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_1])))) : (((arr_10 [i_0] [i_1] [i_1] [i_1] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63)))))));
            var_12 ^= ((/* implicit */unsigned int) (-(((arr_10 [4ULL] [4] [i_0] [i_1] [4ULL]) | (((/* implicit */unsigned long long int) -3423031142456399436LL))))));
        }
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            for (unsigned int i_5 = 1; i_5 < 12; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    {
                        arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(max((((arr_2 [i_0]) >> (((/* implicit */int) arr_19 [i_0] [i_0])))), (((/* implicit */unsigned long long int) arr_7 [i_0] [(signed char)1] [(unsigned char)9] [i_6]))))));
                        var_13 ^= ((/* implicit */unsigned char) min((var_7), (((/* implicit */long long int) (unsigned short)36845))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((unsigned short) ((arr_19 [6ULL] [6ULL]) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (arr_16 [i_0] [i_0])))) : (((/* implicit */int) arr_20 [i_0] [(unsigned short)1] [i_0] [i_0]))))))));
    }
    var_15 = ((/* implicit */unsigned int) (unsigned short)36882);
}
