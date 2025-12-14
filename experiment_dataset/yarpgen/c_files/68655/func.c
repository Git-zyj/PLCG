/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68655
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) ((((arr_5 [i_2 + 1] [i_2 + 1] [(unsigned short)4]) >> (((/* implicit */int) (unsigned char)0)))) * ((+(arr_5 [i_2 - 3] [i_2] [i_2])))));
                    arr_6 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */long long int) (((-9223372036854775807LL - 1LL)) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 - 1] [i_0]))))))));
                    var_20 = ((/* implicit */int) arr_3 [(_Bool)1]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        var_21 = (+(arr_2 [i_0] [i_2 + 1] [i_2 + 3]));
                        arr_10 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))))));
                        var_22 = arr_4 [i_1] [i_1] [11LL] [i_3];
                    }
                    for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        arr_14 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_1] [2U] = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_4 [i_1] [i_1 + 1] [i_2 + 3] [i_1]), (((/* implicit */signed char) ((((/* implicit */int) arr_12 [8LL] [i_1] [i_1] [i_4] [i_1] [i_2])) <= (((/* implicit */int) var_4))))))))));
                        arr_15 [(signed char)6] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) min((-151625009), ((-(((/* implicit */int) (((-9223372036854775807LL - 1LL)) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) 1015808U);
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 3; i_8 < 14; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            {
                                arr_34 [i_5] [i_5] [i_7] [i_5] [i_8 - 1] [i_9] = ((/* implicit */unsigned char) arr_17 [i_8]);
                                var_24 = var_6;
                            }
                        } 
                    } 
                    arr_35 [i_5] = ((/* implicit */_Bool) (short)-1);
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 18; i_11 += 2) 
                        {
                            {
                                arr_40 [1] [1] [i_5] [1] = ((/* implicit */signed char) -764257814799433736LL);
                                arr_41 [i_5] = ((/* implicit */short) (+((-(((/* implicit */int) (_Bool)1))))));
                                arr_42 [i_6] [i_6] [8] [i_6] [i_6] [i_5] = (-(((/* implicit */int) (_Bool)1)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
