/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97359
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
    var_13 -= ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) (+(3170396302084533768LL)));
                                arr_13 [i_0] [i_1] [i_1] [i_0] [i_3] [(short)2] [i_4] = ((/* implicit */int) ((unsigned short) arr_5 [i_1]));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) (_Bool)1);
                    var_16 = ((/* implicit */signed char) var_11);
                    var_17 = ((/* implicit */unsigned int) (~(arr_5 [i_1])));
                    var_18 = ((/* implicit */long long int) var_4);
                }
                for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */int) var_5)) : (max((var_8), (((/* implicit */int) (unsigned short)51974))))))));
                                var_20 = ((/* implicit */_Bool) max((((/* implicit */long long int) max(((+(((/* implicit */int) (unsigned short)51974)))), (((/* implicit */int) arr_12 [12LL] [i_6 - 1] [i_6 + 1] [i_7] [i_1]))))), ((-(arr_18 [i_1] [i_6 + 2] [i_6 - 2] [i_6 + 1] [i_6 - 2] [i_1])))));
                            }
                        } 
                    } 
                    var_21 |= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)51972))));
                    var_22 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) (unsigned short)51974)))), (((/* implicit */int) min(((unsigned short)33107), ((unsigned short)13554))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        arr_23 [i_0] [i_1] [i_8] [i_8] [i_5] [i_1] = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) arr_5 [i_1])))));
                        var_23 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_5] [i_1])) || (((/* implicit */_Bool) 6623984104160218606LL))))) <= (183562395))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_19 [i_0] [i_1] [i_0] [i_1] [i_5] [i_5] [i_8]), (arr_19 [i_0] [i_1] [i_5] [i_8] [i_8] [i_5] [i_8])))) ? (((((/* implicit */_Bool) arr_19 [i_0] [i_1] [0LL] [i_1] [i_8] [i_8] [7LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [(signed char)3] [i_1] [i_0] [i_1] [i_1] [i_0] [i_8]))) : (95851422U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_19 [i_0] [i_1] [i_5] [i_8] [i_1] [i_0] [1U]), (arr_19 [i_0] [i_1] [i_1] [i_5] [i_5] [i_5] [i_8])))))));
                    }
                }
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((((/* implicit */_Bool) max((7105082094654046324LL), (((/* implicit */long long int) var_10))))) ? (var_2) : (var_11))) <= (((/* implicit */unsigned long long int) 7639217298319806791LL)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_26 *= ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)13580)) <= (((/* implicit */int) (unsigned short)54058)))) ? (((var_12) << (((((/* implicit */int) var_10)) + (97))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2655419096606995614LL)) ? (arr_18 [(signed char)16] [i_0] [i_9] [16ULL] [i_0] [16ULL]) : (arr_3 [8LL]))))));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)51948)) ? (-6623984104160218600LL) : (-7105082094654046324LL)));
                }
            }
        } 
    } 
}
