/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95627
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_9 [4LL] [i_1] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_2 [i_0] [(short)8] [i_3])), ((~(arr_1 [5U] [i_1])))))) < (max((arr_0 [i_2]), (max((((/* implicit */unsigned long long int) var_0)), (arr_0 [i_3])))))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            arr_13 [i_3] [i_1] = arr_8 [i_0] [i_4] [(signed char)6];
                            arr_14 [i_0 - 1] [4ULL] [i_2] [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_3] [i_2] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [2U] [i_2] [i_3] [i_4] [i_2]))) : (18446744073709551615ULL)));
                            arr_15 [i_3] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (((/* implicit */int) arr_6 [i_0 - 1])) : (((/* implicit */int) arr_6 [i_0 - 1]))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_0] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_16))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_5] [i_3]))))) : (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52765))) : (arr_0 [i_0])))));
                            arr_19 [i_5] [i_5] [i_5] [i_5] [i_3] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned char)85))))));
                            arr_20 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */signed char) ((((_Bool) arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) arr_5 [i_5] [i_2] [i_2] [i_0])) : (min((arr_11 [i_0] [i_1] [i_1] [i_3] [i_2] [i_3]), (arr_11 [i_0 - 1] [i_1] [i_1] [i_3] [i_2] [0])))));
                        }
                        arr_21 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)27836))));
                        arr_22 [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_7 [i_3] [i_3] [i_3] [i_0 - 1] [i_0 - 1] [i_3])) : (((/* implicit */int) arr_7 [i_3] [i_0] [i_0] [i_0 - 1] [i_0] [i_3]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)52765)) || (((/* implicit */_Bool) (unsigned char)0))))) : (((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_0] [i_0 - 1] [i_0] [i_3])) ? (((/* implicit */int) arr_7 [i_3] [i_2] [i_2] [i_0 - 1] [i_0] [i_3])) : (((/* implicit */int) arr_7 [i_3] [i_0] [i_0] [i_0 - 1] [i_0] [i_3])))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            arr_26 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) / (((arr_0 [i_0 - 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_8)))))))));
            arr_27 [(unsigned short)8] [i_6] [i_6] = (!(((/* implicit */_Bool) ((var_12) % (((/* implicit */int) arr_12 [6U] [i_0] [i_0 - 1] [8ULL] [i_6]))))));
        }
        arr_28 [9ULL] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) (~(var_14)))))));
        arr_29 [i_0] = ((/* implicit */long long int) var_2);
        arr_30 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) 4294967295U)), (((((/* implicit */_Bool) arr_12 [4ULL] [i_0] [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (max((arr_11 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [4] [i_0] [(unsigned char)2] [i_0 - 1]))))))));
    }
    var_17 = min((max((((/* implicit */unsigned long long int) max((2766673972U), (((/* implicit */unsigned int) (signed char)127))))), (7469491386212360840ULL))), (((/* implicit */unsigned long long int) var_7)));
}
