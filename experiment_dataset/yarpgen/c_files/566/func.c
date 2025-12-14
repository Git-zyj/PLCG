/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/566
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
    var_10 = ((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_4))))))));
    var_11 = ((/* implicit */_Bool) (signed char)102);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (_Bool)0);
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11))) : (18446744073709551615ULL)))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) (signed char)-17))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            var_14 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-34)))))));
            /* LoopSeq 2 */
            for (long long int i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6948820842764850508LL)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (short)-8058)))))));
                var_16 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) (signed char)-97)))))));
                arr_7 [i_2] [i_2] = ((/* implicit */unsigned char) (+(241707453U)));
                /* LoopSeq 2 */
                for (signed char i_3 = 3; i_3 < 21; i_3 += 1) 
                {
                    /* LoopSeq 4 */
                    for (short i_4 = 4; i_4 < 21; i_4 += 4) 
                    {
                        var_17 += ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                        var_18 += ((unsigned int) (signed char)97);
                        arr_12 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)103))));
                    }
                    for (short i_5 = 1; i_5 < 21; i_5 += 4) /* same iter space */
                    {
                        var_19 = (unsigned char)81;
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2 + 1])) ? (arr_5 [i_0] [(unsigned char)7] [i_5 - 1]) : (arr_5 [i_0] [i_0] [i_0]))))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((long long int) (-(((/* implicit */int) (signed char)11))))))));
                    }
                    for (short i_6 = 1; i_6 < 21; i_6 += 4) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [i_6 + 3] [i_3] [i_2 - 1] [i_1] [i_0]))));
                        var_22 = ((/* implicit */int) (-(arr_18 [i_6 + 1] [i_3 - 3] [i_2] [i_2] [i_1 - 1] [i_0] [i_0])));
                    }
                    for (unsigned char i_7 = 3; i_7 < 22; i_7 += 1) 
                    {
                        arr_23 [i_3] [i_3 + 2] [i_3] [i_7] [i_7 - 3] = ((/* implicit */signed char) (~(arr_13 [i_7] [i_7] [i_2 + 1] [i_7] [i_0])));
                        var_23 = ((((/* implicit */_Bool) arr_18 [i_1 - 1] [i_1 - 1] [i_7] [i_7 - 3] [i_7 - 1] [i_7] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_21 [i_0] [i_1 + 1] [i_0] [i_3 - 3] [i_2 - 1]));
                        arr_24 [i_7] [i_1 + 1] [i_7] [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))));
                    }
                    arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                }
                for (short i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    var_24 = ((/* implicit */long long int) 18446744073709551613ULL);
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (signed char)28))));
                }
            }
            for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
                var_27 = ((/* implicit */unsigned short) arr_3 [i_1 + 1] [i_9]);
            }
            var_28 = ((signed char) arr_9 [i_0] [6] [i_0] [i_1 - 1]);
        }
        var_29 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [(_Bool)1] [i_0] [(signed char)8] [(_Bool)1] [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)5))))) : ((-(arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
}
