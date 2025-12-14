/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79732
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [(signed char)5] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (-(4294967295U)));
                    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) -1135170337)) : (9223372036854775807LL))))));
                    /* LoopSeq 3 */
                    for (int i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        arr_11 [i_0] [17LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (2130706432U) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-16)) % (arr_2 [i_3 + 1]))))));
                        var_20 = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) arr_1 [i_1])))))) ? (max((((((/* implicit */int) arr_0 [i_0])) - (var_2))), (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) (unsigned short)65518))))))) : (((/* implicit */int) arr_4 [i_1 - 1] [i_2 + 1]))));
                    }
                    for (int i_4 = 1; i_4 < 17; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) -1938366310)) & (8758236796140485878LL)));
                        arr_16 [i_0] [i_1 + 4] [4U] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_13 [i_0] [i_2 + 1] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_1))))) ? (((var_17) + (var_17))) : (((/* implicit */long long int) ((1938366310) / (((/* implicit */int) (unsigned short)32654)))))));
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) var_15);
                            var_23 = ((/* implicit */int) var_13);
                            arr_20 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) 0ULL);
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            arr_25 [i_6] [i_4 + 3] [i_0] [12] [12] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_0] [i_0] [i_2 + 2] [i_0] [i_0]))))) ? (min((((((/* implicit */_Bool) var_18)) ? (882910229399606543LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) var_16)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) * (arr_1 [i_6])))) ? ((-(((/* implicit */int) (unsigned char)33)))) : (((/* implicit */int) (signed char)-3))))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_6] [i_1] [i_1] [i_4 + 3] [i_6])) ? (((/* implicit */long long int) 7680)) : (var_13)))) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0] [i_1] [i_2] [i_4] [i_0])), (arr_7 [i_1] [i_2] [i_4])))))))) : (((((/* implicit */_Bool) (signed char)2)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)75))) | (arr_7 [i_0] [0LL] [i_6]))) : ((-(arr_7 [i_0] [i_1] [i_2])))))));
                        }
                        var_25 = ((/* implicit */int) (~((~(arr_13 [i_0] [i_0] [i_2] [i_4])))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        arr_29 [i_1 + 1] [i_0] [i_7] = ((/* implicit */unsigned char) (-(arr_27 [i_0] [i_2 + 4] [i_1 - 1])));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_0] [i_1] [(signed char)11] [i_0])) >= (((/* implicit */int) arr_10 [i_0] [i_1] [i_2 + 2] [i_7]))));
                        var_27 = ((/* implicit */unsigned short) ((arr_17 [i_0] [i_2 - 1] [i_7] [i_7] [i_7]) >= (((/* implicit */unsigned long long int) 882910229399606558LL))));
                        var_28 = ((/* implicit */unsigned long long int) var_8);
                    }
                    arr_30 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((((+(-882910229399606536LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 281474976710655LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_11)))))) < (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_0]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 18; i_8 += 2) 
                    {
                        arr_33 [i_0] [i_1] [i_2 + 4] [i_2] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned char)171)) : (((/* implicit */int) (unsigned char)222)))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) 882910229399606558LL)))))));
                        arr_34 [i_1] [i_1 + 1] [i_2 + 2] [i_8 - 2] [i_0] = ((/* implicit */int) var_13);
                        var_29 = ((/* implicit */unsigned char) (+((+(1670585807U)))));
                        arr_35 [i_8 + 1] [i_0] [i_0] [5LL] = ((/* implicit */unsigned char) (~(((((-1938366314) + (2147483647))) << (((((((/* implicit */int) (signed char)-17)) + (26))) - (9)))))));
                        arr_36 [i_8 + 1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_8 - 2] [i_0] [i_1 - 1] [2] [i_0])) ? (((/* implicit */int) arr_23 [i_0] [i_1] [i_0] [i_8] [i_1])) : (((/* implicit */int) arr_23 [i_8 - 2] [i_8] [i_2] [i_1 + 2] [i_0]))));
                    }
                }
            } 
        } 
        arr_37 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_12)) * (arr_13 [i_0] [i_0] [i_0] [i_0]))) - (((/* implicit */unsigned long long int) (+(var_2))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [(unsigned char)8] [i_0] [5ULL]))))) : ((-((-(((/* implicit */int) (signed char)88))))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_9 = 1; i_9 < 7; i_9 += 1) 
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    {
                        arr_48 [i_9] [i_10] [i_9] = min(((~(((((/* implicit */_Bool) (unsigned short)64810)) ? (((/* implicit */int) (signed char)83)) : (1938366290))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_9])) ? (arr_13 [i_9] [12LL] [i_11] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)83))))))));
                        /* LoopSeq 1 */
                        for (signed char i_13 = 2; i_13 < 9; i_13 += 2) 
                        {
                            arr_53 [(unsigned char)4] [i_10] [(unsigned char)5] [i_12] [(unsigned char)5] [i_9] = min((((arr_43 [i_9 - 1]) + (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((((/* implicit */_Bool) arr_43 [i_9 + 3])) ? (arr_43 [i_9 + 3]) : (arr_43 [i_9 + 3]))));
                            arr_54 [i_13] [i_9] [i_11] [i_11] [i_9] [i_9] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_50 [i_9] [i_10] [i_11] [i_12] [i_13]))));
                        }
                        arr_55 [i_9] [i_9] [i_9] [i_9] [i_9] [0ULL] = ((/* implicit */long long int) arr_31 [i_9]);
                        var_30 = ((/* implicit */int) arr_52 [i_10]);
                    }
                } 
            } 
        } 
        arr_56 [i_9] = ((/* implicit */unsigned long long int) (signed char)-62);
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 8; i_14 += 3) 
        {
            for (unsigned short i_15 = 0; i_15 < 10; i_15 += 3) 
            {
                {
                    arr_61 [i_9] [i_9] [i_14 - 1] [i_14 - 1] = ((/* implicit */unsigned short) arr_1 [i_9]);
                    var_31 = ((/* implicit */unsigned short) var_1);
                }
            } 
        } 
    }
    var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) var_16))));
    var_33 = ((/* implicit */unsigned char) (-(var_12)));
    var_34 = ((/* implicit */long long int) var_6);
}
