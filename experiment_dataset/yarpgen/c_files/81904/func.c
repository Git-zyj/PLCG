/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81904
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
    for (long long int i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */short) arr_0 [i_1 - 1]);
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 20; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_12 [i_3] [i_2] [i_1] [i_1] [i_0 + 1] [i_0] = ((/* implicit */long long int) ((((int) (signed char)72)) * (((((((/* implicit */int) arr_8 [i_1] [i_2 + 1] [i_3 - 2])) - (((/* implicit */int) arr_2 [i_1] [i_2] [i_1])))) / (max((((/* implicit */int) (short)29804)), (arr_0 [i_3 + 2])))))));
                            arr_13 [i_1] [i_2 - 2] [i_1 + 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29821))) + (6603109717564323486ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-29821)) * (((/* implicit */int) arr_7 [i_3] [i_2] [i_0] [i_0])))))))));
                            arr_14 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */int) arr_2 [i_0 - 3] [i_0 + 1] [i_1]))))) == (((var_10) << (((var_4) + (2037341585)))))));
                            var_15 = ((/* implicit */short) max((((((/* implicit */int) (short)-13383)) % (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1 + 1] [i_2 - 1] [i_3] [i_3 - 1])))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (unsigned char)217))));
            }
        } 
    } 
    var_17 &= ((/* implicit */unsigned char) var_11);
    /* LoopSeq 2 */
    for (signed char i_4 = 1; i_4 < 21; i_4 += 1) 
    {
        arr_17 [i_4] [i_4] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)32762))));
        arr_18 [i_4] = min((((((/* implicit */_Bool) arr_16 [i_4 - 1] [i_4 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4 + 4] [i_4 + 2]))) : (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_4 + 1] [i_4 + 3]))))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
    }
    /* vectorizable */
    for (short i_5 = 1; i_5 < 21; i_5 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) var_12);
        arr_23 [i_5] = ((/* implicit */unsigned short) arr_16 [i_5 + 2] [i_5]);
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 22; i_6 += 4) 
        {
            for (unsigned char i_7 = 2; i_7 < 22; i_7 += 1) 
            {
                for (int i_8 = 1; i_8 < 22; i_8 += 4) 
                {
                    {
                        var_19 -= ((/* implicit */unsigned long long int) arr_11 [i_6 + 1] [i_6]);
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (unsigned short)43159))));
                        var_21 = ((/* implicit */long long int) (_Bool)1);
                        arr_30 [i_5] [i_7 + 1] [i_6 - 1] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_20 [i_5])) % (((unsigned long long int) (unsigned short)43159))));
                        var_22 = ((/* implicit */int) arr_16 [i_6] [i_8]);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (short i_10 = 1; i_10 < 22; i_10 += 3) 
            {
                for (short i_11 = 4; i_11 < 20; i_11 += 4) 
                {
                    {
                        var_23 = ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-29808)) : (((/* implicit */int) var_2)))) >= ((-(((/* implicit */int) (unsigned char)255)))));
                        arr_39 [i_5 + 2] [i_9] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32758)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43159))) : (arr_3 [i_5] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5])))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))));
}
