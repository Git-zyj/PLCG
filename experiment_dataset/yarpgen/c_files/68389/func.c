/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68389
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
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */long long int) 1588056789))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) var_16)) / (var_7))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((long long int) ((((((/* implicit */_Bool) (short)-16692)) ? (3271108685U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) == (((/* implicit */unsigned int) max((var_7), (((/* implicit */int) (_Bool)0))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [(short)0] [i_0])) ? (arr_0 [(short)12] [(short)12]) : (arr_0 [(unsigned char)12] [i_2]))))));
                arr_9 [(short)0] [i_1] [i_2] [i_0] |= ((/* implicit */long long int) (_Bool)1);
                var_19 = ((/* implicit */unsigned char) arr_5 [i_0]);
            }
            arr_10 [i_0] = ((/* implicit */short) min((((unsigned long long int) arr_7 [4LL] [i_0] [i_0])), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4095U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) : (arr_2 [i_0]))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) (unsigned char)5)) : (-1326318116)))))))));
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (_Bool)1))));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (unsigned short)31416)))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 3; i_4 < 13; i_4 += 1) 
                {
                    for (unsigned short i_5 = 1; i_5 < 12; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((arr_13 [i_0]), (arr_8 [(short)4] [i_4] [(short)4])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_15 [i_0] [i_1] [(short)2] [i_5 - 1])) : (((/* implicit */int) (short)10022))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-21622)) >= ((-2147483647 - 1)))))) : (((((/* implicit */_Bool) arr_2 [2])) ? (1152921504606846975LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 906532229)))))))));
                            arr_18 [i_5 + 2] [(_Bool)1] [i_0] [(_Bool)1] [i_0] &= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (arr_0 [8LL] [6]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [(short)12] [(short)12] [i_5 + 1])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [4] [i_0])) : (((/* implicit */int) var_0))))))) + (9223372036854775807LL))) << (((((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (arr_15 [i_4 + 1] [i_5 + 1] [(unsigned short)0] [i_5])))) - (8807)))));
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) arr_7 [4ULL] [2ULL] [(_Bool)1]))));
                        }
                    } 
                } 
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_24 = ((/* implicit */_Bool) arr_0 [i_0] [i_6]);
                arr_21 [i_0] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 344952295U)) ? (((/* implicit */long long int) -1946857301)) : (arr_2 [i_0])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (arr_6 [i_0]))) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((max((arr_2 [i_0]), (((/* implicit */long long int) arr_11 [(short)0] [i_0] [6U])))) > (((/* implicit */long long int) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) (short)-16327)) : (-1996896776)))))))));
            }
            arr_22 [i_0] = ((/* implicit */unsigned long long int) var_7);
        }
    }
    var_25 -= ((/* implicit */signed char) (short)22253);
    var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) min((var_9), ((unsigned char)182)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */int) (unsigned short)65535))))))))));
    /* LoopSeq 1 */
    for (short i_7 = 0; i_7 < 21; i_7 += 3) 
    {
        var_27 = ((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */int) arr_23 [i_7])), (var_7)))) ? (((/* implicit */int) ((arr_24 [i_7]) == (arr_24 [i_7])))) : (((/* implicit */int) (!((_Bool)1)))))), (((/* implicit */int) arr_23 [i_7]))));
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_1)))))))));
        var_29 -= ((/* implicit */unsigned int) arr_23 [i_7]);
        var_30 = ((/* implicit */signed char) min((var_30), (min((((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)13634))))), (arr_23 [(_Bool)1])))));
    }
}
