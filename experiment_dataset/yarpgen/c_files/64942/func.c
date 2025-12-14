/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64942
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
    var_16 = ((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) var_6))));
    var_17 = ((/* implicit */_Bool) var_5);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 4; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_7 [i_0] [i_2])))), (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_2 [i_1]))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */int) arr_10 [i_0 + 2] [i_0 + 2] [i_2 + 1] [i_2])) : (((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [11]))))));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (short)1020)) >= (((/* implicit */int) arr_4 [i_0]))))) + (((/* implicit */int) arr_6 [i_1 + 1] [i_1] [i_1 + 1] [i_1]))));
                        arr_12 [i_0] [i_1] [i_2] [i_2 - 2] [4] = arr_5 [i_0] [i_1] [(signed char)0];
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_2] [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_2 [i_2])))) ? (((/* implicit */int) (short)-12506)) : ((+(((/* implicit */int) arr_2 [i_0]))))));
                        arr_18 [i_4] [i_4] [i_4] [i_4] [i_4] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1 + 1] [i_2] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) arr_15 [i_1 + 1] [i_2] [i_2 - 1] [i_1 + 1] [i_2] [i_4])) : (arr_5 [i_0 - 1] [i_1 + 1] [i_2])))) ? (((((/* implicit */int) max(((signed char)55), (arr_1 [i_0])))) | (((/* implicit */int) max((arr_13 [(_Bool)1] [i_2] [(_Bool)1] [i_2]), (((/* implicit */unsigned short) arr_7 [i_1] [i_2]))))))) : ((+(((/* implicit */int) arr_10 [i_1 - 1] [(unsigned char)13] [i_1 - 1] [i_1]))))));
                        var_19 = ((/* implicit */signed char) (+(((((/* implicit */int) var_13)) + (((/* implicit */int) arr_2 [i_2 - 1]))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        arr_21 [i_0] [i_2] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_2 + 1] [i_2] [i_5])) ? (((arr_16 [i_0] [i_1 - 1] [i_1 - 1] [i_2 + 1] [i_5] [i_5]) ? (((/* implicit */int) arr_16 [i_0] [i_1 + 1] [i_1] [i_2 - 1] [i_2 - 1] [(_Bool)1])) : (((/* implicit */int) (short)1015)))) : (((/* implicit */int) max((arr_16 [i_2 - 2] [i_2 - 4] [i_2 - 3] [i_2 - 1] [i_2] [i_2]), (arr_10 [i_2 + 1] [i_1] [i_0 - 1] [i_5]))))));
                        var_20 |= ((arr_15 [i_0 - 1] [10LL] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1]) == (max(((+(((/* implicit */int) arr_7 [i_1] [(_Bool)1])))), (((/* implicit */int) max(((short)32767), (arr_7 [i_0] [8])))))));
                        var_21 = ((/* implicit */unsigned long long int) arr_3 [i_0 + 2]);
                    }
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        var_22 ^= ((/* implicit */unsigned short) ((((_Bool) arr_25 [i_0 + 1])) ? (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) arr_25 [i_0 - 1]))))) : (((/* implicit */int) arr_25 [i_0 - 1]))));
                        arr_26 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12508)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_0 [i_0] [i_1 + 1])), (var_2)))) : (max((18014123631575040ULL), (((/* implicit */unsigned long long int) arr_2 [i_0 + 1]))))))) ? (((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */long long int) ((var_15) ? (((/* implicit */int) arr_16 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0])) : (((/* implicit */int) var_13))))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned short) ((signed char) arr_1 [(_Bool)1])))))))));
                    }
                    arr_27 [i_0 + 1] [i_2] = ((/* implicit */short) arr_4 [i_0]);
                }
            } 
        } 
    } 
}
