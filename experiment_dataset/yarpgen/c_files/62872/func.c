/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62872
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            var_20 ^= ((/* implicit */_Bool) (((_Bool)1) ? ((+(arr_3 [i_1] [10U] [i_1 + 2]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)36719)) ? (((/* implicit */int) arr_4 [i_1 + 2] [i_1 - 1] [i_1 + 2])) : (((/* implicit */int) var_1)))))));
            arr_6 [(short)17] [i_0] = ((/* implicit */signed char) 15618926293242445200ULL);
            var_21 -= ((/* implicit */unsigned char) var_14);
            arr_7 [i_0] [(short)1] [i_0] = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) var_5)), ((+(var_17))))), (max((arr_5 [i_0] [i_0]), (arr_5 [i_0] [i_0])))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (751648833U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) 2973987766U)) : (5955125784224991488ULL)))) ? (((((/* implicit */_Bool) (short)29865)) ? (((/* implicit */long long int) var_5)) : (max((var_17), (((/* implicit */long long int) 3687638145U)))))) : (((/* implicit */long long int) 1U))));
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_11 [i_0] [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)59)))))), (((long long int) arr_9 [i_0] [i_1] [i_2] [i_3]))))) ? (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 2406728925U)) ? (var_18) : (((/* implicit */unsigned long long int) arr_11 [i_1] [i_3])))))) : (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) | (var_4))) : (0U)))));
                    var_24 = ((/* implicit */int) arr_10 [i_0] [20LL] [21U]);
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((((/* implicit */_Bool) var_5)) ? (arr_9 [(unsigned short)0] [i_1] [i_2] [i_3]) : (((((/* implicit */_Bool) ((1244666997) % (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-4))))) : (751648809U)))))));
                }
            }
        }
        var_26 = (-(((arr_9 [i_0] [i_0] [i_0] [i_0]) >> (((arr_9 [i_0] [i_0] [i_0] [i_0]) - (2583668536U))))));
    }
    var_27 += ((/* implicit */unsigned long long int) 1771309817U);
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (signed char i_6 = 2; i_6 < 10; i_6 += 1) 
            {
                {
                    var_28 += ((/* implicit */unsigned long long int) max((4294967265U), ((-(666976767U)))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 2; i_7 < 10; i_7 += 4) 
                    {
                        for (int i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            {
                                var_29 -= ((/* implicit */signed char) ((((/* implicit */int) var_2)) * (((((/* implicit */int) max((var_0), (var_7)))) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)243)))))))));
                                var_30 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) arr_15 [i_4 + 1]))))) ? ((+(((/* implicit */int) arr_15 [i_4 + 3])))) : (((((/* implicit */_Bool) -3861448296502748125LL)) ? (((/* implicit */int) arr_15 [i_4 - 1])) : (((/* implicit */int) var_13))))));
                                arr_28 [i_4] [i_4] [(_Bool)1] [i_8] [i_6] = ((/* implicit */_Bool) ((int) max((arr_5 [i_4 - 1] [i_6]), (var_17))));
                                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (+(((arr_27 [(_Bool)1] [i_7 - 1] [5U] [i_7 + 1] [i_7 + 1] [i_7 - 2]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)59))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
