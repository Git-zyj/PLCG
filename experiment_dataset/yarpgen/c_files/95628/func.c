/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95628
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
    var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) (short)15518)))))))));
    var_18 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_5)) ? (2980054198U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) ^ (min((var_1), (((4233459063539227663LL) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
        var_20 = ((/* implicit */unsigned long long int) arr_1 [(short)8]);
    }
    for (unsigned char i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)-15518)) ? (((/* implicit */int) ((unsigned char) (short)-15518))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))), ((-(((/* implicit */int) var_14))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_4 = 1; i_4 < 18; i_4 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        arr_17 [10ULL] [i_2] [(signed char)11] [i_1] [4ULL] [6ULL] = var_0;
                        var_21 = ((/* implicit */unsigned char) ((short) 382762445));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((arr_11 [i_4 - 1] [i_4 + 2] [i_4 + 3] [i_4 + 1] [i_4 + 1]) ? (((/* implicit */int) arr_11 [i_1 + 1] [i_2] [i_3] [(short)4] [i_6])) : (((/* implicit */int) ((unsigned short) arr_13 [i_2 + 2] [i_1] [i_1] [i_1 + 1])))));
                        arr_20 [i_6] [(_Bool)1] [(unsigned char)15] [i_1] [i_2] [(_Bool)1] [(unsigned char)19] = ((/* implicit */unsigned long long int) arr_6 [i_1 + 1]);
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)11406)) ? (((/* implicit */int) (unsigned short)2871)) : (((/* implicit */int) (unsigned char)13)))))));
                    }
                    arr_21 [i_1] [i_1] [(short)3] [16] = ((((((/* implicit */long long int) 1277942482)) >= (arr_15 [(_Bool)1] [i_2] [i_2] [(signed char)0] [i_3] [(signed char)20]))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) arr_5 [i_1] [i_2 + 2])));
                }
                var_24 = ((/* implicit */signed char) 0);
                arr_22 [i_1] [(signed char)14] [i_3] [(short)18] &= ((/* implicit */unsigned char) arr_2 [i_1 - 1]);
                arr_23 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((_Bool) ((arr_15 [i_1] [i_1] [i_2 + 2] [i_2] [5ULL] [i_3]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned char)6] [i_2 + 2] [i_1])))))) ? (min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (var_5))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (arr_14 [i_1]))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)62664)) + (((/* implicit */int) (unsigned char)233)))))))));
                arr_24 [i_1 + 2] [i_2 - 1] [i_1] = ((/* implicit */unsigned short) var_8);
            }
            for (unsigned char i_7 = 2; i_7 < 19; i_7 += 3) 
            {
                arr_28 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_15);
                var_25 = ((/* implicit */short) min((((signed char) (!(((/* implicit */_Bool) arr_26 [i_1] [i_2] [13ULL] [i_7 + 1]))))), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1 + 2] [i_1 - 1] [i_1])) || (((/* implicit */_Bool) arr_2 [i_1 + 2])))))));
            }
        }
        var_26 = ((/* implicit */unsigned char) var_4);
        arr_29 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 8333956366166112715ULL)) || (((/* implicit */_Bool) arr_5 [i_1] [i_1]))))), (arr_25 [i_1 + 2] [i_1 + 2]))));
    }
}
