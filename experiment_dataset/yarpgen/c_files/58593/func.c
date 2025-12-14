/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58593
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
    for (signed char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_10 = ((/* implicit */signed char) ((((/* implicit */int) ((short) var_4))) + (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) var_0))))));
                    var_11 = ((/* implicit */int) var_1);
                }
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */int) 0U);
                                arr_18 [i_0] [i_1] [i_0] [i_4 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) + (((((/* implicit */_Bool) ((var_2) & (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)11))))));
                                arr_19 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0 - 2]))))), (var_1)))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))) + (min((arr_8 [i_3]), (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) 0))));
                                var_13 |= ((/* implicit */unsigned int) ((var_3) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((7958498323154096683LL) != (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                                arr_20 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) var_9);
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_0] = (unsigned short)8;
                    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_1])) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) ((signed char) (signed char)48)))))) || (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_4 [i_3] [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))));
                    arr_22 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_4 [i_0 - 1] [i_0] [i_0 - 2]) + (arr_4 [i_0 + 1] [i_0 + 1] [i_0])))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_3]))))))) : (((unsigned int) arr_17 [i_0 - 2] [i_0]))));
                }
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_17 [10LL] [10LL]))));
                var_16 = ((/* implicit */unsigned char) max((((((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_0))))) - (((/* implicit */int) (signed char)-86)))), (((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_0])) != (((/* implicit */int) var_8)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_6 = 2; i_6 < 9; i_6 += 2) 
    {
        for (short i_7 = 1; i_7 < 11; i_7 += 3) 
        {
            {
                var_17 = ((/* implicit */signed char) var_6);
                var_18 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_6 - 2])) ? (((((/* implicit */_Bool) (unsigned short)59036)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)6500)))) : (((/* implicit */int) ((arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_7]) == (((/* implicit */int) (unsigned char)255)))))))) ? (((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) - (arr_7 [i_6]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_6 + 3] [i_7 - 1])) && (((/* implicit */_Bool) arr_16 [i_6] [i_6 - 1] [i_7 - 1] [i_7 - 1] [i_6]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))) * (((var_0) ? (16384243054117012604ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))) ? (((/* implicit */int) var_4)) : (((((var_4) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))) & (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_9)))))))));
}
