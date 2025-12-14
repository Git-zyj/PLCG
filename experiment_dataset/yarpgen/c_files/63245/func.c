/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63245
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
    var_19 = ((/* implicit */long long int) var_6);
    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) ^ (((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_21 = ((/* implicit */long long int) (~(((/* implicit */int) ((arr_0 [i_0] [i_0]) < (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1] [(_Bool)1]))) : (arr_0 [i_0] [5LL]))))))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)43)))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 2) /* same iter space */
        {
            arr_6 [i_1] = ((/* implicit */int) (_Bool)1);
            arr_7 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)119))));
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */signed char) arr_9 [i_1 + 1] [i_1 - 1] [i_1])), (arr_1 [i_1 + 1] [i_1 + 1])))))))));
                arr_10 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) (+(var_5)))))));
            }
        }
        for (unsigned short i_3 = 1; i_3 < 15; i_3 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    for (unsigned short i_6 = 3; i_6 < 13; i_6 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_4 [2LL] [i_3 + 1])))) ? (arr_4 [i_0] [i_3 + 1]) : (max((arr_4 [i_0] [i_3 - 1]), (arr_4 [i_3] [i_3 + 1]))))))));
                            arr_21 [i_0] [i_3] [i_6] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-42)) % (((/* implicit */int) (signed char)42))));
                            var_25 = ((/* implicit */_Bool) max((((/* implicit */int) (signed char)48)), ((+(((/* implicit */int) arr_16 [(signed char)4]))))));
                            var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) & (var_15)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 16515072U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (arr_11 [10U]) : (((/* implicit */long long int) (+(((/* implicit */int) arr_12 [4ULL] [i_3])))))))));
                        }
                    } 
                } 
            } 
            var_27 = ((unsigned int) ((((/* implicit */_Bool) max((12495261892404943452ULL), (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? (((int) 15738635950171348100ULL)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_3])) || ((_Bool)1))))));
            var_28 = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3 + 1])))));
            /* LoopSeq 3 */
            for (signed char i_7 = 2; i_7 < 15; i_7 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    arr_27 [i_7] [i_0] [i_7] [(unsigned short)5] [11] [(signed char)7] = ((/* implicit */unsigned short) ((unsigned int) (+(((/* implicit */int) arr_2 [i_7])))));
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((var_18) & (var_18))) + (1242506875))))));
                    arr_28 [i_7] [i_7] [i_3] [i_7] = ((((/* implicit */_Bool) (unsigned short)64584)) || (((/* implicit */_Bool) arr_14 [i_0] [i_3 + 1])));
                    var_30 = ((/* implicit */signed char) ((int) ((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))));
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_3] [(short)14] [i_3] [i_3 - 1] [i_7 - 2] [(unsigned char)12])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [12ULL] [i_3] [i_3 + 1] [i_7 - 2] [i_7 - 2])))));
                }
                var_32 = ((/* implicit */signed char) arr_9 [5] [i_0] [i_0]);
            }
            /* vectorizable */
            for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                arr_32 [i_0] = ((/* implicit */signed char) (+(arr_0 [i_0] [15])));
                var_33 = ((/* implicit */unsigned int) ((arr_26 [i_0] [i_3 + 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_3 - 1])))));
                var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) arr_20 [(signed char)4] [(signed char)4] [(signed char)6] [i_9] [2ULL] [i_0] [i_3 - 1]))));
                arr_33 [i_3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) -177413152)))) ? (arr_26 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-19)))));
            }
            for (signed char i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_39 [i_11] [i_3 - 1] [i_10] = ((/* implicit */unsigned short) ((signed char) arr_31 [i_0] [i_3] [i_10]));
                    var_35 |= ((/* implicit */unsigned char) var_15);
                    arr_40 [i_11] [i_0] [(short)4] [i_0] [i_0] &= ((/* implicit */long long int) (+(max((arr_23 [i_11] [i_3 + 1]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_3 + 1] [i_10]))))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    var_36 &= ((/* implicit */unsigned long long int) ((arr_38 [i_3 - 1] [(unsigned char)1] [i_3 - 1] [i_3 + 1] [i_3 - 1]) / ((-(((((/* implicit */int) arr_18 [i_0] [2] [i_3] [i_10] [i_12])) * (((/* implicit */int) arr_43 [i_0]))))))));
                    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((((unsigned long long int) 60077586)) | (393678189087020253ULL))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_38 = ((/* implicit */short) arr_0 [i_3 + 1] [i_3 - 1]);
                        arr_47 [7] [i_3] [i_10] [i_12] [i_13] = ((/* implicit */unsigned char) (+(arr_13 [i_0] [i_10])));
                        var_39 = ((/* implicit */unsigned long long int) arr_25 [(short)7] [i_10] [i_3 + 1] [i_10] [i_3 + 1]);
                        var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) (+(arr_25 [i_0] [i_0] [(_Bool)1] [i_3 + 1] [i_13]))))));
                        var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) arr_36 [i_0] [i_3 - 1] [i_3 + 1]))));
                    }
                    for (long long int i_14 = 2; i_14 < 15; i_14 += 4) 
                    {
                        var_42 = ((/* implicit */short) (!(((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) arr_15 [i_3 + 1] [i_10])))))));
                        var_43 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_3 [i_14 + 1] [14U] [i_3 - 1])) - (((/* implicit */int) arr_3 [i_14 - 2] [i_3 - 1] [i_3 - 1])))));
                        var_44 &= (!(((/* implicit */_Bool) (unsigned char)27)));
                        var_45 = ((/* implicit */_Bool) arr_23 [(_Bool)1] [i_14]);
                        arr_50 [i_0] [(_Bool)1] [3U] [(short)5] [i_10] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((60077586) << (((((-7481455491558102589LL) + (7481455491558102599LL))) - (7LL))))))));
                    }
                    var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_14)))) ? (min((((/* implicit */int) arr_2 [i_0])), (var_18))) : (2130706432)))) ? ((-((~(var_5))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_3 + 1] [i_3 + 1] [(signed char)6] [i_3] [i_0])) ? (arr_19 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3] [i_0]) : (arr_19 [i_3 - 1] [i_3 - 1] [(unsigned short)4] [(_Bool)1] [i_0])))))))));
                }
                var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (18446744073709551615ULL))))));
                var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) (((!(((/* implicit */_Bool) ((unsigned long long int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_24 [i_10] [i_10] [(_Bool)1] [2ULL] [15ULL] [(unsigned char)13])), (arr_11 [i_10])))) ? (arr_35 [i_0] [i_3 + 1] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47480)))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) 1069387198)) : (17552487829759523853ULL))))))));
                var_49 = ((/* implicit */unsigned short) arr_23 [i_3 - 1] [i_3 + 1]);
                arr_51 [i_10] = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0]);
            }
        }
        for (unsigned short i_15 = 1; i_15 < 15; i_15 += 2) /* same iter space */
        {
            arr_54 [(unsigned short)10] = ((/* implicit */int) min((((_Bool) arr_49 [i_0] [i_15 + 1] [i_15 - 1] [i_15] [10])), ((!(((/* implicit */_Bool) (+(757311543U))))))));
            var_50 += ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-43)) ? (arr_0 [i_0] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (-607563574))))) < (18053065884622531352ULL)))))));
        }
    }
    for (long long int i_16 = 0; i_16 < 20; i_16 += 3) 
    {
        var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) (!(((/* implicit */_Bool) max((arr_55 [(signed char)6] [i_16]), (arr_55 [(unsigned char)6] [(unsigned char)6])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 4) 
        {
            arr_61 [(unsigned short)1] [i_16] [i_16] = ((/* implicit */unsigned short) arr_57 [i_16]);
            var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) ((signed char) ((unsigned short) var_15))))));
            var_53 = ((/* implicit */long long int) ((unsigned short) (-(((/* implicit */int) arr_56 [i_16] [i_17])))));
        }
    }
}
