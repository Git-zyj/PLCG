/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93563
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
    var_16 = ((/* implicit */unsigned int) (signed char)-101);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (signed char)-104);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1] [i_1 - 1]))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                var_18 *= ((/* implicit */unsigned int) (_Bool)1);
                var_19 = ((/* implicit */short) min((var_19), ((short)13098)));
            }
            /* LoopSeq 1 */
            for (unsigned int i_3 = 1; i_3 < 9; i_3 += 1) 
            {
                var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) var_15)) || ((!(((/* implicit */_Bool) var_2))))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_12))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        {
                            var_22 -= ((unsigned int) (signed char)-126);
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_1] [i_5] [i_1 + 1] [i_4] [i_4])) * (((/* implicit */int) ((_Bool) (_Bool)1))))))));
                        }
                    } 
                } 
            }
            arr_17 [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_1])) : (((/* implicit */int) (short)13764))));
        }
    }
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 3) 
    {
        for (unsigned int i_7 = 1; i_7 < 10; i_7 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    arr_25 [i_8] [i_8] [(short)0] |= ((short) ((((((/* implicit */int) arr_23 [i_6 + 1] [i_6 + 1] [(_Bool)1] [i_6])) < (((/* implicit */int) (_Bool)1)))) ? (((unsigned int) arr_20 [i_7] [i_7])) : (19U)));
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (signed char)97))));
                    arr_26 [i_8] = ((/* implicit */_Bool) ((var_5) * ((-(arr_20 [i_7] [i_7 - 1])))));
                    arr_27 [i_6] [i_8] = ((/* implicit */_Bool) arr_24 [i_6]);
                }
                var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24611)) ? (6102818631754539173LL) : (((/* implicit */long long int) ((unsigned int) (_Bool)1)))))) ? (((((arr_21 [i_6 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) & (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6] [i_6 + 1] [(_Bool)1] [i_7 + 1]))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13773))) * (6008758908139880680ULL))) : (((/* implicit */unsigned long long int) ((var_3) ? (-1795457065) : (((/* implicit */int) (_Bool)1))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
}
