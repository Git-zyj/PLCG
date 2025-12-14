/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84114
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_6))));
    var_13 = var_3;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 5912043369028468043ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 2]))))))))));
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                var_15 = ((/* implicit */long long int) (-(((64707038917747373ULL) ^ (((/* implicit */unsigned long long int) 4294967293U))))));
                /* LoopSeq 1 */
                for (unsigned int i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    var_16 = ((/* implicit */short) var_1);
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_2])))))));
                    var_18 *= ((/* implicit */unsigned short) var_2);
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((unsigned char) 4294967293U)))));
                }
                arr_13 [i_2] [(short)15] [i_2] [i_2] = ((/* implicit */unsigned short) var_3);
            }
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                arr_16 [i_4] = ((/* implicit */signed char) var_4);
                arr_17 [i_0] [i_1 + 1] [i_0] [i_4] = ((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1 + 1]);
                arr_18 [i_0] [i_0] |= ((/* implicit */_Bool) arr_8 [i_0] [i_0]);
                arr_19 [i_0] [i_4] [i_0] [17ULL] = ((/* implicit */signed char) ((arr_15 [i_1] [i_4] [i_1 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((((/* implicit */_Bool) arr_6 [i_0])) || (((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4])))))))) : (var_3)));
            }
            for (unsigned char i_5 = 1; i_5 < 19; i_5 += 1) 
            {
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_5 - 1])) ? (((/* implicit */int) arr_20 [i_5 - 1])) : (((/* implicit */int) arr_0 [i_5 - 1])))) - (((((/* implicit */int) arr_0 [i_5 - 1])) * (((/* implicit */int) arr_20 [i_5 - 1])))))))));
                var_21 = ((/* implicit */unsigned long long int) ((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                arr_23 [i_0] [i_0] [i_5] [i_5] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1] [i_5 - 1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_0]))))) : (min((arr_3 [i_5] [i_5 + 1] [i_5]), (((/* implicit */unsigned int) var_10)))))))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 19; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */short) var_4);
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_21 [i_1 - 1] [i_5 - 1] [i_5]))) ? (((((/* implicit */_Bool) arr_21 [i_1 - 1] [i_5 - 1] [i_5])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_28 [i_1 - 1] [i_5 - 1] [i_1 - 1] [i_5])))) : (((/* implicit */int) var_2))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) var_2);
            }
            arr_29 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 64707038917747373ULL)) ? (18382037034791804242ULL) : (((/* implicit */unsigned long long int) 1700308587))));
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) var_10))))) < (((var_11) & (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [10ULL] [i_0] [i_0]))))))))));
        }
        arr_30 [i_0] [i_0] = (+(((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0])))));
    }
}
