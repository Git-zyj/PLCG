/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81130
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((2225698982088537636LL) < (((/* implicit */long long int) ((/* implicit */int) var_8))))))) ? (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 313349640)) : (var_2))), (((/* implicit */unsigned long long int) ((int) var_11))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_7))))), (max((var_2), (((/* implicit */unsigned long long int) (short)-64))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-1148))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_13 = ((/* implicit */unsigned int) arr_3 [i_0] [(_Bool)1]);
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)1] [i_0])) || (((/* implicit */_Bool) (short)1168))));
        }
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            arr_10 [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((/* implicit */int) (unsigned short)34249)) : (((/* implicit */int) arr_0 [i_2] [i_2]))));
            /* LoopSeq 4 */
            for (long long int i_3 = 3; i_3 < 16; i_3 += 3) /* same iter space */
            {
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) arr_6 [i_2] [i_2] [i_0]))));
                arr_15 [i_3] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) (unsigned char)213)))));
            }
            for (long long int i_4 = 3; i_4 < 16; i_4 += 3) /* same iter space */
            {
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_0))));
                arr_18 [i_4 - 3] [i_4] [i_4 - 3] [i_4 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) arr_17 [(signed char)0] [i_2] [i_4 - 3] [i_4 - 2])) + (((/* implicit */int) var_10)))) : (((((/* implicit */int) (unsigned char)59)) - (((/* implicit */int) arr_13 [i_0] [i_0] [i_4]))))));
            }
            for (short i_5 = 3; i_5 < 14; i_5 += 4) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned char) arr_1 [i_0] [i_5]);
                arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_3);
                /* LoopSeq 3 */
                for (short i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    var_18 *= ((/* implicit */_Bool) (~(((/* implicit */int) var_9))));
                    var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [i_2] [i_0] [i_6] [i_0] [i_5])))))) <= (((((/* implicit */_Bool) -2762861107280167450LL)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
                }
                for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    var_20 = ((/* implicit */signed char) (~(34557411)));
                    var_21 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_23 [i_7])) ? (arr_19 [(unsigned short)3] [i_2] [i_2]) : (((/* implicit */unsigned long long int) 34557414)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5 + 1])))));
                }
                for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */int) var_4)) << (((((/* implicit */int) arr_31 [15] [15] [i_9] [i_8])) - (44201)))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)75)) <= (17)));
                        arr_34 [5ULL] [i_2] [(short)6] [i_8] [i_9] = ((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) ((((/* implicit */int) arr_11 [i_0])) != (((/* implicit */int) var_9))))) : (((/* implicit */int) arr_17 [i_5 - 3] [i_5 - 1] [i_5 - 3] [i_5 - 1]))));
                    }
                    arr_35 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) ((var_0) ? (((((/* implicit */int) (unsigned char)156)) + (34557400))) : (((((/* implicit */int) var_7)) - (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_2] [i_5 + 1] [i_8]))))));
                }
                arr_36 [i_0] [i_2] [i_5] = ((/* implicit */unsigned char) ((34557414) >= (((/* implicit */int) (short)-9086))));
            }
            for (short i_10 = 3; i_10 < 14; i_10 += 4) /* same iter space */
            {
                arr_40 [i_10] = ((/* implicit */signed char) arr_6 [i_10 + 2] [i_10 + 2] [i_10]);
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (!(var_1))))));
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_10 + 1] [i_2] [i_10 + 1] [6] [i_10 + 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [(short)9] [(signed char)16])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-5))))))))));
            }
        }
        var_26 ^= ((/* implicit */short) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(unsigned short)16])) <= (((/* implicit */int) var_7))));
    }
    var_27 *= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (var_9)))) <= (((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_9)) - (115))))))));
    var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) var_9))));
}
