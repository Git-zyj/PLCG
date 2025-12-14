/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98675
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */short) (-(7856549342406329602LL)));
                var_16 ^= ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_15) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))) % (((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))) : (arr_3 [i_0] [i_0]))))), ((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_1])))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_3 [i_0] [i_1]) : (((/* implicit */long long int) var_10)))) : (max((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_1])))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            arr_14 [i_3] [i_3] = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [11LL] [11LL])) ? (arr_8 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_2])))))) ^ (((((/* implicit */_Bool) arr_5 [i_2] [i_3] [i_3])) ? (var_11) : (var_0))))), (((/* implicit */unsigned long long int) arr_13 [i_3] [i_2] [i_2]))));
            /* LoopSeq 3 */
            for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                var_17 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4004))) : (18014398501093376ULL)))))) ? (((((/* implicit */_Bool) 7856549342406329602LL)) ? (15767460192862671246ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))) : (((/* implicit */unsigned long long int) 7856549342406329607LL)));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        {
                            arr_24 [i_2] [i_2] [i_4] [i_5] [10U] |= ((/* implicit */unsigned char) ((_Bool) ((max((1862345284U), (((/* implicit */unsigned int) -76256774)))) << (((max((arr_19 [(_Bool)0] [i_5]), (((/* implicit */long long int) arr_16 [i_6] [(_Bool)1] [(_Bool)1])))) - (893087506500289720LL))))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7856549342406329607LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)30715))) : (-9223372036854775790LL)));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                arr_29 [i_3] [i_3] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_2] [i_3])) ? (((/* implicit */int) arr_9 [(signed char)12] [i_3])) : (((/* implicit */int) arr_9 [i_7] [i_2]))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_2] [i_3] [i_7])) > (var_10)))) == (((/* implicit */int) arr_21 [i_2] [i_2] [i_3] [i_7]))));
                var_20 = ((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2] [i_3] [i_7]))) : (((((/* implicit */_Bool) -7856549342406329608LL)) ? (7856549342406329595LL) : (-7856549342406329604LL))));
                arr_30 [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_2] [i_3] [i_7] [i_2] [i_7] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) : (arr_23 [i_2] [i_3] [i_7] [i_7] [i_7] [i_2])));
                /* LoopSeq 3 */
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        var_21 = arr_16 [i_2] [i_3] [i_7];
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_4))));
                        var_23 = (+(((/* implicit */int) arr_15 [i_9])));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        arr_38 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_15))) ? (arr_28 [i_10] [i_2]) : (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_10])) % (((/* implicit */int) var_14)))))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_17 [i_10] [i_8] [i_7] [i_2]) && (((/* implicit */_Bool) arr_13 [i_10] [(short)5] [i_2])))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_2] [i_3] [i_7]))) : (arr_25 [i_2] [i_3])))));
                    }
                    arr_39 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65512)) ? (7856549342406329581LL) : (9223372036854775780LL)));
                }
                for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_2] [i_2] [(_Bool)1] [i_2])) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 5506445784568721639ULL))))) : (((((/* implicit */_Bool) var_2)) ? (var_15) : (((/* implicit */int) arr_9 [i_7] [i_3])))))))));
                    var_26 = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_7] [i_2])) != (((/* implicit */int) var_9))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 1) /* same iter space */
                {
                    var_27 ^= (-(((/* implicit */int) (unsigned short)16384)));
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) var_6))));
                }
            }
            for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                arr_48 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4)) ? (((/* implicit */int) (unsigned short)26994)) : (((/* implicit */int) (unsigned short)0))))) ? (((arr_43 [i_2] [i_3] [i_3] [i_3]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_15) : (((/* implicit */int) arr_21 [i_2] [i_2] [i_3] [i_13]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_13] [i_13] [i_13] [i_13])))));
                var_29 = ((/* implicit */_Bool) (((_Bool)1) ? (63LL) : (((((/* implicit */_Bool) 9223372036854775780LL)) ? (((/* implicit */long long int) 1073725440)) : (7856549342406329604LL)))));
            }
        }
        var_30 = ((/* implicit */short) max((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_41 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_37 [i_2] [i_2])) : (((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_2]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)122))) * (1002149628U)))))));
        arr_49 [i_2] = ((/* implicit */long long int) min((((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-1027), (((/* implicit */short) (unsigned char)55)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2] [i_2]))) : (min((((/* implicit */long long int) var_4)), (arr_42 [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 21; i_14 += 3) 
    {
        arr_52 [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) 3175300994U)) ? (1564642530U) : (1002149637U)));
        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_14] [i_14])) ? (arr_3 [i_14] [i_14]) : (arr_3 [i_14] [i_14])));
        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_14] [i_14])) ? (((/* implicit */int) arr_5 [i_14] [i_14] [i_14])) : (((/* implicit */int) arr_50 [i_14]))));
    }
}
