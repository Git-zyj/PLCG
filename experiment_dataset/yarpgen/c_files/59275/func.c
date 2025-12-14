/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59275
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
    var_11 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) min((((unsigned int) var_1)), (((/* implicit */unsigned int) ((int) ((arr_2 [i_0]) >> (((((/* implicit */int) (unsigned char)104)) - (101))))))))))));
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_13 += ((/* implicit */unsigned short) -738696670);
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)18453))))) != (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)12455)) && (((/* implicit */_Bool) (short)18453)))))));
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) ((arr_4 [i_0] [i_0] [i_0]) || (((/* implicit */_Bool) -738696667))))) | (((/* implicit */int) (short)-18453)))))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)127)) | (((/* implicit */int) (short)18453))));
                }
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    arr_9 [(unsigned short)23] [i_1] = ((/* implicit */unsigned long long int) ((signed char) arr_6 [i_1]));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 1; i_4 < 21; i_4 += 4) 
                    {
                        arr_12 [i_1] [i_1] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_6 [i_1])), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) | (min((((/* implicit */unsigned long long int) -738696670)), (var_7)))))));
                        var_17 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_5 [i_4 + 3] [i_0] [i_4] [i_4 + 1])))) ? (((/* implicit */int) ((arr_5 [i_4 + 3] [i_0] [i_4] [i_4]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18452)))))) : (((/* implicit */int) ((unsigned char) (unsigned char)151)))));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_7))));
                        var_19 = ((/* implicit */unsigned long long int) ((int) -738696679));
                    }
                    for (short i_5 = 1; i_5 < 21; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (var_8))))) | (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (unsigned short)38932)))), (((/* implicit */int) arr_13 [i_0] [i_1])))))));
                        var_21 = ((/* implicit */signed char) ((unsigned char) ((unsigned int) min(((signed char)-90), (((/* implicit */signed char) arr_1 [i_0]))))));
                        var_22 *= ((/* implicit */unsigned short) (!(((((/* implicit */int) (unsigned short)65508)) != (((/* implicit */int) (short)18452))))));
                    }
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_17 [i_0] [i_1] = ((/* implicit */unsigned short) (unsigned char)207);
                    arr_18 [i_1] [i_0] [i_6] = ((/* implicit */unsigned short) ((((arr_6 [i_1]) ? (arr_11 [(unsigned short)11] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) - (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_6])))));
                }
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 2; i_9 < 23; i_9 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) ((arr_19 [i_0] [i_7] [i_9 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_0)));
                                arr_26 [i_0] [i_1] [i_1] [17] [i_8] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [i_0] [i_7] [i_8] [i_7]))));
                            }
                        } 
                    } 
                    var_24 += ((/* implicit */unsigned short) ((signed char) (unsigned char)255));
                }
                var_25 -= ((/* implicit */short) arr_20 [i_0] [i_1]);
                arr_27 [i_1] [i_1] = ((/* implicit */long long int) ((var_2) != ((((+(arr_11 [i_0] [i_0] [i_1]))) << (((((/* implicit */int) ((((/* implicit */int) (short)-18453)) <= (((/* implicit */int) arr_15 [i_1] [i_1]))))) - (1)))))));
            }
        } 
    } 
}
