/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85660
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((arr_5 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [(short)18]))))), (((/* implicit */unsigned long long int) max(((short)22071), (((/* implicit */short) arr_7 [i_0] [i_1] [i_3])))))));
                        var_18 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_3]))))) ? (((/* implicit */int) ((var_17) && (((/* implicit */_Bool) arr_1 [i_2]))))) : (((/* implicit */int) arr_11 [i_3] [i_2] [i_1] [i_0])))));
                        var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_1])), (min((arr_11 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */unsigned short) var_11))))))), (((arr_1 [i_1]) - (arr_1 [i_0])))));
                        arr_13 [(unsigned char)0] [i_2] [i_1] [(unsigned char)0] = ((/* implicit */short) (!((!(((((/* implicit */_Bool) 5320563166619024143ULL)) && (((/* implicit */_Bool) 5320563166619024173ULL))))))));
                        var_20 = ((/* implicit */signed char) (+(((int) arr_9 [i_0] [i_0]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 22; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 3; i_5 < 23; i_5 += 2) 
                        {
                            {
                                arr_18 [i_5] [i_4] [(short)18] [i_2] [i_1] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_14 [i_0] [i_1] [i_2] [i_4 - 1] [i_5]), (arr_14 [i_0] [i_1] [i_0] [i_4] [i_5])))) ? ((~(arr_10 [i_0] [i_0] [i_2] [i_0]))) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [(signed char)9] [i_0]))));
                                arr_19 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_5 [i_0]), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [i_1] [i_2] [i_4 + 2]), (arr_4 [i_0]))))) : (max((var_4), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_2] [i_4]))))))) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_0] [i_5] [i_1] [i_5 - 3])) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)77)) * (((/* implicit */int) var_2))))))));
                                arr_20 [i_0] [i_0] [i_2] [i_4] [i_5 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) (unsigned char)124)))) : ((-(((/* implicit */int) arr_11 [i_5] [i_5 - 3] [i_5 - 3] [i_4 - 1]))))));
                                arr_21 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_0);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_15)))))) : (((/* implicit */int) var_6))));
    var_22 &= ((/* implicit */unsigned int) ((((/* implicit */int) (((+(((/* implicit */int) var_12)))) < (((((/* implicit */int) var_14)) - (((/* implicit */int) (signed char)18))))))) < ((-(((((/* implicit */int) var_16)) - (((/* implicit */int) var_2))))))));
}
