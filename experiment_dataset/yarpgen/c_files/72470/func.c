/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72470
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
    var_11 = ((/* implicit */int) max((((((/* implicit */_Bool) 13717529737764041600ULL)) ? ((~(13717529737764041617ULL))) : (10209242648316338887ULL))), ((~((~(6869256836454610087ULL)))))));
    var_12 = min((((/* implicit */int) var_8)), (min((2132305649), (var_10))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                    var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(arr_4 [i_1] [i_1])))) ? (min((13717529737764041578ULL), (((/* implicit */unsigned long long int) (signed char)-1)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)127))))))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)222)))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    var_14 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 11590079783810400217ULL)) ? (13717529737764041578ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) (_Bool)1);
                                var_16 = ((/* implicit */long long int) min((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_12 [i_0] [i_5] [i_5] [i_3])), (arr_1 [(short)7])))) / ((-(arr_0 [i_0] [i_0]))))))));
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3] [(_Bool)1])) && (((/* implicit */_Bool) 1122340952U))))), (1088344022U)))) ? (arr_5 [6U]) : (arr_3 [i_5] [i_3]))))));
                                var_18 = ((/* implicit */unsigned long long int) ((min((((var_9) & (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) ((1580244641) + (-1401772152)))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) >= (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_5]))))))));
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (((_Bool)1) ? (min((2147483634), (((/* implicit */int) (unsigned char)202)))) : (arr_13 [i_0] [i_1] [i_3]))))));
                            }
                        } 
                    } 
                }
                var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */long long int) min((-1856039855), (((/* implicit */int) (signed char)81))))) : (max((((/* implicit */long long int) arr_8 [i_0])), (var_1)))))));
                var_21 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_13 [i_0] [i_1] [i_0]), (arr_8 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1580244623)))))) : (min((4729214335945510049ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])), (arr_11 [(unsigned short)4] [i_1] [i_1] [i_1]))))))) : (((((/* implicit */_Bool) -2147483635)) ? (-585474220) : (16383)))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    for (int i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */int) arr_16 [i_8] [i_7] [i_6] [6ULL] [i_1] [i_0]);
                                var_23 = ((/* implicit */_Bool) arr_4 [i_1] [i_7]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
