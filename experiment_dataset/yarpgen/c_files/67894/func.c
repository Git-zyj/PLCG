/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67894
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            arr_14 [i_0 + 2] [i_1] [i_2] [i_3] [i_1] |= ((/* implicit */short) arr_1 [i_0]);
                            arr_15 [i_0] [i_0] [i_0] [i_3] [i_0] [i_4] [i_3] = ((/* implicit */signed char) (-(max((((/* implicit */long long int) (-(var_11)))), ((~(var_0)))))));
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (~(max((((/* implicit */int) arr_9 [(signed char)9] [i_1] [(signed char)9] [(signed char)9])), ((~(((/* implicit */int) (short)-12037)))))))))));
                        }
                        arr_16 [i_0] = ((/* implicit */short) (~(min((arr_5 [i_2 - 1] [i_2] [i_2] [i_2 - 1]), (arr_5 [i_1] [i_1] [i_1] [i_2 - 1])))));
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */int) (-(var_7)));
                        var_19 *= ((/* implicit */long long int) (-(((var_6) ? (((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2 - 1] [i_2 - 1])))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_20 ^= ((/* implicit */int) (((((-(var_3))) < (((/* implicit */unsigned int) (~(arr_21 [i_5] [i_2] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)12036)) | (var_11)))) ? (((/* implicit */unsigned int) arr_21 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])) : (arr_3 [i_0 + 3]))) : (((/* implicit */unsigned int) ((min((((/* implicit */int) (short)-12037)), (206513120))) % (arr_4 [i_0 + 1] [i_1]))))));
                        var_21 *= ((/* implicit */short) max((((/* implicit */unsigned int) var_17)), ((~(4294967295U)))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_7 [4] [i_1] [i_2] [i_5]) : (379970429U)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) 206513116)) >= (2097151U)))) : (((/* implicit */int) arr_10 [(_Bool)1] [i_1] [i_1]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_16))))))) : (arr_2 [i_0] [12U])));
                        var_23 = ((/* implicit */int) (~(max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)0)), (var_15)))), (arr_3 [(_Bool)1])))));
                    }
                    for (short i_6 = 2; i_6 < 14; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) min((arr_22 [i_0] [i_1] [i_2] [i_1] [i_6] [i_0 - 1]), (((/* implicit */signed char) (_Bool)1))))) / (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_23 [i_0] [(_Bool)1] [(_Bool)1] [i_1] [i_6] [2U]))))));
                        arr_25 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) (((~(((/* implicit */int) var_15)))) / (-206513120)));
                        var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((((/* implicit */int) var_17)) + (2147483647))) << (((var_13) - (12871555906494237227ULL))))) : ((~(((/* implicit */int) (_Bool)1))))));
                        var_26 += (_Bool)1;
                    }
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (arr_7 [i_0] [i_0] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) max((((_Bool) var_3)), (arr_20 [i_2 - 1] [i_1] [i_2 - 1] [i_2] [i_0 + 1] [(signed char)13])))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 2; i_7 < 12; i_7 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned char) min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) 1933534207U)) ? (2147483647) : (((/* implicit */int) (signed char)31))))));
                        arr_28 [i_0] [i_0] [i_0] [i_7] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) var_8);
                    }
                    for (int i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        var_29 *= ((/* implicit */int) 899164000U);
                        var_30 += ((/* implicit */short) max((max((((/* implicit */signed char) (_Bool)1)), ((signed char)-35))), (((/* implicit */signed char) arr_24 [i_0 + 2] [i_1] [i_1] [i_2] [i_8]))));
                        var_31 = ((/* implicit */unsigned char) (-(((((/* implicit */int) min((var_14), (var_14)))) % (((/* implicit */int) var_17))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_9 = 2; i_9 < 15; i_9 += 4) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned char i_11 = 2; i_11 < 14; i_11 += 1) 
            {
                {
                    var_32 &= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)198))) >= (var_13))));
                    var_33 &= ((/* implicit */short) ((((unsigned long long int) ((short) arr_38 [i_10] [i_10]))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) var_7))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 12; i_12 += 4) 
    {
        for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
        {
            {
                arr_47 [(unsigned char)5] [i_12] [i_12] = (~((-(((/* implicit */int) (unsigned char)183)))));
                arr_48 [i_12] [i_12] [4LL] &= (-((~(((/* implicit */int) (short)9438)))));
            }
        } 
    } 
    var_34 |= ((/* implicit */signed char) var_7);
}
