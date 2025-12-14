/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55930
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
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        arr_2 [13LL] = ((/* implicit */long long int) (unsigned char)247);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_16 += ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((int) arr_8 [12LL] [i_1] [i_2]))) : (arr_0 [i_3])));
                        arr_12 [i_0 + 1] [i_0] [(short)11] [i_0] [i_0 + 1] [(signed char)11] = ((/* implicit */long long int) (((!((!(((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 + 2])))))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) max((arr_11 [i_0 - 1] [i_0 + 2] [i_0 - 3] [i_0 - 2] [i_0 + 1]), (arr_11 [i_0 + 1] [i_0 - 1] [(unsigned char)4] [i_0 + 1] [i_0 + 3]))))));
                        var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */long long int) ((int) arr_7 [i_0 + 3] [i_0 + 3] [i_0 + 2]))) & (max((arr_7 [i_1] [i_2] [i_3]), (arr_7 [i_0 + 3] [i_0 - 3] [i_0])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                for (unsigned short i_6 = 3; i_6 < 16; i_6 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) min((max((2106810045), (max((((/* implicit */int) (signed char)43)), (arr_15 [i_0] [i_0] [i_6 - 3]))))), (((/* implicit */int) (unsigned char)0)))))));
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned int) arr_4 [i_0 - 1]);
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) -223853740)), (1768844594U)))))) ? (min((((((/* implicit */_Bool) 4271060118U)) ? (((/* implicit */int) arr_8 [i_0] [i_5] [i_0])) : (((/* implicit */int) (signed char)43)))), (((/* implicit */int) (unsigned char)249)))) : (((/* implicit */int) arr_13 [i_6] [i_6] [i_0 - 1]))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                {
                    arr_28 [i_0] [i_8] [i_9] = ((/* implicit */unsigned char) (-(arr_21 [i_0] [i_0] [i_8] [i_8] [i_9] [15LL] [i_9])));
                    var_21 = ((/* implicit */unsigned char) ((short) arr_26 [i_0] [i_8] [i_9]));
                }
            } 
        } 
    }
    var_22 = min(((~(-5744798332553117435LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)22)), (var_4)))) ? (var_9) : (((/* implicit */int) min((var_15), ((signed char)43))))))));
}
