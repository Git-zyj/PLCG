/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77584
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
    var_18 = ((/* implicit */int) ((unsigned int) 1792173727));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_11))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [(short)6] [i_2 - 3])) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_2 - 2] [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_0] [i_2 + 1] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_0] [i_2 - 1] [i_1 + 1])))) : (((/* implicit */int) arr_3 [i_2]))));
                    arr_7 [i_2 + 3] [i_1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_2 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)137))) : (arr_0 [i_2 + 3]))) % ((-(arr_0 [i_0])))));
                    var_20 = ((/* implicit */unsigned long long int) (unsigned char)255);
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned short) (unsigned char)118);
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        arr_12 [i_2 + 1] [i_3] [i_2 + 1] [i_1] [i_0] = ((/* implicit */int) ((unsigned long long int) (unsigned char)1));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2 + 1] [i_2])) && (((/* implicit */_Bool) arr_2 [i_2 + 3] [i_2] [i_2]))))) + (((((/* implicit */_Bool) -5279679581051152079LL)) ? (((/* implicit */int) (short)26752)) : (((/* implicit */int) (signed char)-109))))));
                        arr_13 [i_0] [i_1] [i_2 + 2] [(signed char)13] [i_0] [i_3] = ((/* implicit */long long int) (signed char)103);
                    }
                    for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (_Bool)1))));
                            arr_19 [i_5] [i_0] [i_2 - 1] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28924))) / ((-(8599070730977259462ULL)))));
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -893217478))))) + (((/* implicit */int) (!(((/* implicit */_Bool) 818152752)))))))) ? (min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_17 [i_0] [i_1 - 1] [i_0] [i_4] [i_5]))))), (((((/* implicit */_Bool) (unsigned char)207)) ? (8191ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2 + 3] [i_5] [i_5])) ? (arr_4 [i_2 - 3] [i_4] [i_5]) : (arr_4 [i_2 + 3] [i_5] [i_5]))))));
                        }
                        var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_10 [15] [i_2 - 3] [i_2 - 3] [(short)12] [i_1 + 2]), (arr_10 [i_0] [i_2 - 3] [i_0] [i_4] [i_1 + 2])))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-16722)) + (2147483647))) >> (((1669220679U) - (1669220667U)))))) : (((((/* implicit */_Bool) (unsigned char)137)) ? (arr_18 [i_0] [i_2 - 3] [i_2] [i_0] [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57522)))))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)118)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)125)) ? (87107356U) : (((/* implicit */unsigned int) -106468803))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(unsigned short)6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57522))) : (arr_10 [i_0] [i_1] [0ULL] [i_2] [i_4])))))) ? (max((((((/* implicit */_Bool) arr_18 [i_0] [i_1 + 2] [i_2 + 3] [i_4] [i_4])) ? (8106509633638587078ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (+(arr_1 [18U])))))) : (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned char)255)))) - ((-(arr_9 [i_0] [i_1] [(_Bool)1] [i_4]))))))));
                        arr_20 [i_4] [i_1 + 2] = arr_0 [(_Bool)1];
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                {
                    arr_28 [i_0] [i_6] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) min((arr_27 [i_6]), (((/* implicit */unsigned long long int) (signed char)31))))) ? (((/* implicit */int) (short)-13263)) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_0]))))));
                    /* LoopSeq 2 */
                    for (signed char i_8 = 2; i_8 < 16; i_8 += 2) 
                    {
                        arr_31 [i_0] [i_6 + 1] [(_Bool)1] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_6 + 1] [i_7] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (arr_25 [i_6] [i_8 + 3] [i_8 + 3]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_7])) - (((/* implicit */int) (_Bool)1))))))) + (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 10340234440070964537ULL)) ? (((/* implicit */int) (short)-16703)) : (((/* implicit */int) (_Bool)0)))))))));
                        var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)66))));
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 17; i_9 += 4) 
                    {
                        arr_35 [i_0] [i_0] [i_6] = ((/* implicit */short) (~((~(arr_27 [i_6])))));
                        arr_36 [i_0] [4] [18LL] [i_6] [i_0] = min(((+(((((/* implicit */_Bool) arr_33 [i_6] [(unsigned short)4])) ? (((/* implicit */int) (_Bool)1)) : (1940015382))))), (((((/* implicit */int) ((2167407437U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) + (((/* implicit */int) arr_30 [i_0] [i_6 + 1] [i_0] [i_9 + 2] [i_6])))));
                        arr_37 [i_6] [i_9] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) ((2655139521U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2006)))))) : (max((((((/* implicit */_Bool) 10340234440070964553ULL)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) (short)-18990)))), ((-(((/* implicit */int) (short)-16735))))))));
                        arr_38 [i_0] [i_6] [3ULL] [(signed char)6] [i_0] [i_0] = ((/* implicit */signed char) arr_26 [(_Bool)1] [i_6 + 1] [i_6]);
                    }
                }
            } 
        } 
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_27 -= ((/* implicit */short) ((((/* implicit */_Bool) 16354895502275617815ULL)) ? (((/* implicit */int) (((-(((/* implicit */int) (short)22314)))) > (((/* implicit */int) (_Bool)1))))) : (((arr_1 [i_10]) / (((/* implicit */int) (_Bool)1))))));
        arr_41 [(short)4] [(signed char)8] = ((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_10] [i_10] [i_10]))))), (((long long int) (unsigned short)1411))));
    }
    for (signed char i_11 = 0; i_11 < 17; i_11 += 1) 
    {
        arr_44 [i_11] = ((/* implicit */long long int) 13148955613275876535ULL);
        var_28 = ((/* implicit */signed char) (_Bool)1);
    }
}
