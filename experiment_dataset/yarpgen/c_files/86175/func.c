/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86175
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
    var_15 = ((/* implicit */long long int) var_0);
    var_16 ^= ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_17 -= ((/* implicit */long long int) var_4);
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)1053)) + (((/* implicit */int) (unsigned short)2))))) : ((-(arr_2 [i_0] [i_1] [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_2 = 4; i_2 < 9; i_2 += 3) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)28))));
        var_18 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_2] [i_2] [i_2])), (var_11)))) + (((/* implicit */int) arr_5 [1LL] [i_2 + 2]))))) * (((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-99)))))) : (((((/* implicit */long long int) ((/* implicit */int) (short)21580))) + (arr_0 [i_2])))))));
    }
    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 3) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((unsigned long long int) ((((/* implicit */_Bool) (short)-15137)) || (((/* implicit */_Bool) (unsigned char)253))))) : (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_10 [(short)10])))), (((/* implicit */int) var_7)))))));
        arr_11 [i_3] [i_3] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_10 [i_3]), (((/* implicit */unsigned char) var_7))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_3 - 2] [i_3 - 1] [i_3 - 2])) : (((/* implicit */int) (signed char)28)))) : (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_6)))))))), (((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3]))) : (arr_0 [i_3 - 1])))));
        var_20 = (i_3 % 2 == 0) ? (((((((((/* implicit */_Bool) (unsigned short)52049)) ? (arr_2 [i_3 - 2] [i_3 - 2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(short)10] [i_3] [i_3]))))) / (((arr_2 [i_3] [i_3] [i_3]) / (arr_2 [i_3 - 2] [i_3] [i_3]))))) >> (((arr_2 [i_3 + 2] [i_3 + 2] [i_3]) - (798558194223672593ULL))))) : (((((((((/* implicit */_Bool) (unsigned short)52049)) ? (arr_2 [i_3 - 2] [i_3 - 2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(short)10] [i_3] [i_3]))))) / (((arr_2 [i_3] [i_3] [i_3]) / (arr_2 [i_3 - 2] [i_3] [i_3]))))) >> (((((arr_2 [i_3 + 2] [i_3 + 2] [i_3]) - (798558194223672593ULL))) - (8385573819312327446ULL)))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15137)) ? (((/* implicit */int) (short)-8865)) : (((/* implicit */int) (unsigned char)255))))) ? (min((((((/* implicit */int) var_2)) + (((/* implicit */int) (unsigned char)247)))), (((/* implicit */int) (unsigned short)52049)))) : (((/* implicit */int) min((((/* implicit */short) arr_5 [i_4] [i_4])), (max((((/* implicit */short) (signed char)-122)), ((short)5943)))))))))));
        var_22 -= ((/* implicit */unsigned char) ((short) ((((((/* implicit */int) ((signed char) var_5))) + (2147483647))) >> (((min((17126564711135939483ULL), (10411952907250647307ULL))) - (10411952907250647281ULL))))));
    }
    for (short i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) ((unsigned short) min(((unsigned char)6), (((unsigned char) (signed char)22)))));
                    var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_6] [(unsigned short)9] [i_7 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (arr_9 [i_5]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_6] [i_6])))));
                    arr_22 [i_5] [i_6] [i_5] [i_5] = 10ULL;
                }
            } 
        } 
        var_25 -= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_5]))) == (max((arr_9 [(unsigned char)18]), (((/* implicit */unsigned long long int) (short)15125)))))) ? (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (17707349524830695701ULL))), (((/* implicit */unsigned long long int) ((unsigned short) arr_17 [(short)6] [6ULL] [i_5]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_5] [i_5] [(signed char)20]) < (arr_2 [i_5] [i_5] [(signed char)10])))))));
        var_26 = ((/* implicit */signed char) (+(((/* implicit */int) max((max((((/* implicit */unsigned char) (signed char)-95)), ((unsigned char)84))), (((/* implicit */unsigned char) arr_21 [i_5] [i_5] [i_5] [i_5])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
        {
            arr_25 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_8]))) + (((((/* implicit */_Bool) 1320179362573612154ULL)) ? (17203071087114070113ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4710)))))));
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 1; i_9 < 13; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 3; i_10 < 13; i_10 += 2) 
                {
                    for (long long int i_11 = 4; i_11 < 13; i_11 += 1) 
                    {
                        {
                            arr_34 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_5] [i_9 + 2] [i_10 - 2])) ? (((/* implicit */int) arr_20 [i_5] [i_9 - 1] [i_10 - 3])) : (((/* implicit */int) arr_20 [i_5] [i_9 + 2] [i_10 + 2]))));
                            arr_35 [i_5] [i_5] [(short)7] [i_5] [i_5] [i_5] = ((/* implicit */signed char) var_11);
                            arr_36 [i_5] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_20 [i_5] [i_8] [i_9 - 1]))));
                            var_27 = ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_9 + 1] [i_9 + 1] [i_9 - 1]))));
                        }
                    } 
                } 
            } 
            arr_37 [i_5] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_5]))))) ? (((((/* implicit */int) var_9)) - (((/* implicit */int) var_12)))) : (((/* implicit */int) arr_1 [i_5]))));
            arr_38 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (((/* implicit */int) arr_16 [i_5] [i_8])) : (((/* implicit */int) var_9))));
        }
        for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) /* same iter space */
        {
            arr_43 [i_5] = ((/* implicit */short) ((signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_5])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)14750))))), (((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_5] [i_5]))) ^ (arr_0 [i_5]))))));
            arr_44 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned char) var_14))))), (var_3)))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_33 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_39 [i_5] [i_5] [i_12]))))), (((var_3) - (var_8))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((((/* implicit */int) (unsigned short)2131)) | (((/* implicit */int) var_14)))) : (((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_14 [i_5])) - (22833))))))))));
        }
        /* vectorizable */
        for (unsigned char i_13 = 0; i_13 < 15; i_13 += 2) /* same iter space */
        {
            var_28 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_27 [i_5] [i_13] [i_5])) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_20 [i_5] [i_5] [i_5]))))));
            arr_49 [i_5] = ((/* implicit */unsigned long long int) (short)20504);
        }
        var_29 = (signed char)-11;
    }
}
