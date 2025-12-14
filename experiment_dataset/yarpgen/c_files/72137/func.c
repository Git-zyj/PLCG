/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72137
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) var_7);
                                arr_13 [9LL] [9ULL] [3LL] [3LL] [3LL] = ((((((/* implicit */_Bool) arr_10 [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_4 - 2] [(unsigned char)5])) ? (arr_10 [i_4 + 3] [i_4 - 1] [(short)13] [i_4 + 3] [i_4 + 3]) : (arr_10 [i_4 + 1] [i_4 - 1] [i_4 + 1] [(unsigned char)20] [19U]))) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                                arr_14 [i_2] [(unsigned short)18] [(unsigned short)18] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-1))));
                                var_15 = ((/* implicit */unsigned char) min(((short)1), ((short)-1)));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */short) (((_Bool)0) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) (short)-15))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4683244007476581591LL)) ? (((/* implicit */int) arr_12 [6ULL] [(short)0] [6ULL] [(signed char)6] [(signed char)6] [(signed char)6] [6ULL])) : (((/* implicit */int) (short)18))));
                }
            } 
        } 
    } 
    var_17 &= ((((((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) > (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9106918249092710600ULL))))) : (((/* implicit */int) var_10)))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 1) 
    {
        for (unsigned char i_6 = 2; i_6 < 11; i_6 += 1) 
        {
            {
                arr_22 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_20 [(signed char)6])) ? (((/* implicit */int) arr_4 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_9 [17ULL] [17ULL] [(signed char)9] [(signed char)12])))))) ? (((/* implicit */int) ((signed char) arr_19 [i_5 + 2]))) : (((/* implicit */int) ((signed char) arr_2 [i_5 + 2])))));
                arr_23 [i_5] = ((/* implicit */signed char) ((((unsigned long long int) ((signed char) var_0))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (1968334046U))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) < ((~(var_0))))))) != (((unsigned long long int) (short)-1))));
}
