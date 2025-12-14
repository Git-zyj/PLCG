/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61850
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned char) var_8))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */int) (short)-2411)) : (((/* implicit */int) (signed char)107))))) : (min((((/* implicit */unsigned int) (unsigned char)231)), (var_3)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (274877874176ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (18446743798831677432ULL))))))) : (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) var_5))))))))));
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) : (max((((/* implicit */unsigned long long int) var_6)), (274877874176ULL))))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) max((max((((((/* implicit */int) (unsigned short)57838)) + (-1723928627))), (((/* implicit */int) min((((/* implicit */short) (unsigned char)91)), (arr_0 [i_0])))))), (((/* implicit */int) ((short) ((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) (unsigned short)7687))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [0] [i_0])) || (((/* implicit */_Bool) 4561869614449992380ULL)))) ? (min((var_1), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((10616288774939998098ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_9);
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_1]) << (((((/* implicit */int) (unsigned short)57828)) - (57816)))))) ? (((/* implicit */unsigned long long int) ((int) 7830455298769553496ULL))) : (max((var_0), (var_5)))))) ? (((/* implicit */int) max((var_13), (min((var_10), (((/* implicit */unsigned short) (unsigned char)255))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) arr_0 [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)57837))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            arr_12 [i_1] = ((unsigned char) arr_1 [i_1] [i_1]);
            arr_13 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) arr_1 [i_1] [i_1])))));
            arr_14 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(7757016598750771082ULL))))));
            arr_15 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_5 [i_2])));
        }
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (unsigned char i_4 = 1; i_4 < 10; i_4 += 2) 
            {
                {
                    arr_22 [i_1] [0ULL] [0ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) var_13)) : (max((((/* implicit */int) ((unsigned short) 10616288774939998112ULL))), ((~(((/* implicit */int) (unsigned short)7707))))))));
                    arr_23 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((13565672808943053749ULL), (7240045337857510369ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)-7650)))) : (((((((/* implicit */_Bool) (unsigned char)209)) ? (var_3) : (var_3))) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_1] [i_3] [i_4])) & (((/* implicit */int) arr_9 [i_1])))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                arr_29 [i_5] [3ULL] = ((/* implicit */unsigned short) (short)(-32767 - 1));
                                arr_30 [i_1] [i_1] [4U] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) (short)7667)) > (((/* implicit */int) var_6))))), (((unsigned short) (unsigned char)193))))) < (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)7667)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (274877874176ULL)))))));
                            }
                        } 
                    } 
                    arr_31 [i_4] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) min(((unsigned short)21394), (((/* implicit */unsigned short) (unsigned char)163))))) : (((((/* implicit */int) var_13)) << (((((/* implicit */int) (short)-7636)) + (7643)))))))) ? (((((((/* implicit */_Bool) arr_21 [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))) ^ ((~(((/* implicit */int) var_14)))))) : (((((((/* implicit */_Bool) arr_19 [(unsigned short)2] [i_3] [(unsigned short)3])) && (arr_24 [i_1] [i_1]))) ? (((/* implicit */int) arr_27 [i_4 + 1] [i_4 - 1] [0ULL] [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) var_7))))));
                    arr_32 [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) var_10);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
    {
        arr_36 [i_7] = ((/* implicit */unsigned long long int) arr_20 [i_7] [i_7]);
        arr_37 [i_7] = ((((((/* implicit */int) (unsigned char)8)) < (arr_20 [i_7] [(unsigned char)0]))) ? (((/* implicit */unsigned long long int) -1723928627)) : (14452969029622039797ULL));
        arr_38 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)7661)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-7677)))) : (452317426)));
        arr_39 [i_7] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)7714)) < (((/* implicit */int) var_13)))))) | (((((/* implicit */_Bool) 2147483637)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))));
    }
    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            for (short i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                {
                    arr_48 [i_8] [2ULL] [i_8] = ((/* implicit */short) (unsigned short)57835);
                    arr_49 [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_9 [i_8])))), (((/* implicit */int) (unsigned short)22168))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_14)), ((unsigned short)9796)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 2147483647)))) : (((((/* implicit */_Bool) arr_10 [i_9] [i_10])) ? (11065564637344570331ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
                    arr_50 [i_9] [i_10] = ((/* implicit */short) 0U);
                    arr_51 [i_8] [i_9] [i_10] = ((/* implicit */unsigned char) (~(var_1)));
                }
            } 
        } 
        arr_52 [i_8] = ((/* implicit */short) (~((+(((/* implicit */int) var_9))))));
        arr_53 [i_8] [i_8] = ((((/* implicit */_Bool) max((((/* implicit */int) (!((_Bool)0)))), (min((((/* implicit */int) (unsigned short)27773)), (1723928619)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_8] [i_8] [i_8])) ? (((/* implicit */int) (short)-20238)) : (((/* implicit */int) arr_34 [i_8]))))) ? (var_3) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_8] [i_8] [i_8])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1)))))))));
        arr_54 [i_8] [i_8] = ((/* implicit */_Bool) ((unsigned int) max((((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_8] [i_8]))))), (((/* implicit */unsigned long long int) var_6)))));
        arr_55 [i_8] [1] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)30286)), ((unsigned short)56009)))), (((((/* implicit */_Bool) (short)7262)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_0))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)196))) + (((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
    }
}
