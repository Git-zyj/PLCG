/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56149
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((1012309710) & (((/* implicit */int) (short)-29787))));
        var_18 -= ((/* implicit */unsigned long long int) -1851547276);
    }
    for (unsigned char i_1 = 3; i_1 < 15; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 15; i_2 += 4) 
        {
            var_19 = ((/* implicit */short) var_9);
            arr_9 [i_1] [i_2 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)1896)) ? (((/* implicit */int) (unsigned char)118)) : (-1012309694)));
            /* LoopSeq 3 */
            for (long long int i_3 = 1; i_3 < 15; i_3 += 2) 
            {
                var_20 &= max((((/* implicit */int) max((((/* implicit */short) var_12)), ((short)-29801)))), (max(((~(((/* implicit */int) var_15)))), (((/* implicit */int) var_11)))));
                arr_12 [(unsigned char)7] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_7 [(signed char)10] [i_2])), (max((5819993216564078379ULL), (((/* implicit */unsigned long long int) (short)-14226))))));
            }
            for (unsigned char i_4 = 4; i_4 < 15; i_4 += 3) /* same iter space */
            {
                var_21 |= ((/* implicit */unsigned char) ((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-1905), ((short)29761)))))));
                var_22 *= ((/* implicit */unsigned int) (short)-29788);
            }
            for (unsigned char i_5 = 4; i_5 < 15; i_5 += 3) /* same iter space */
            {
                var_23 = ((/* implicit */int) min((var_23), ((+(min((((((/* implicit */int) arr_18 [i_1] [(signed char)8] [i_1 - 3])) * (((/* implicit */int) var_10)))), (((/* implicit */int) arr_14 [0]))))))));
                /* LoopSeq 2 */
                for (short i_6 = 1; i_6 < 15; i_6 += 3) 
                {
                    arr_21 [i_1] [i_1] [(short)10] [i_1] |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (short)29787)) ? (((/* implicit */int) max((arr_20 [i_1 - 2] [i_1 - 3] [(unsigned char)0] [i_1]), (arr_20 [i_1 + 1] [i_2 + 1] [(signed char)2] [i_6])))) : (max((arr_11 [i_1] [14] [(_Bool)0] [i_6 + 1]), (((/* implicit */int) (short)14226)))))), ((-(((/* implicit */int) arr_13 [i_5 - 1] [i_1 - 3]))))));
                    arr_22 [i_6] [i_6] [i_2] [i_6] [i_1] = ((/* implicit */long long int) (((+(((/* implicit */int) (short)32766)))) <= ((-(((/* implicit */int) arr_19 [i_5 - 2] [i_6 + 1] [i_2 - 1] [i_6] [i_6] [i_2]))))));
                    var_24 = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((-2442263076087803014LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) | (((var_10) ? (16672257805765861978ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29762)))))))));
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-29787)) / (((/* implicit */int) (short)31706)))) * (((/* implicit */int) (short)29764)))))));
                }
                for (short i_7 = 2; i_7 < 14; i_7 += 4) 
                {
                    arr_25 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_1] [i_1]))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)14226)))));
                    arr_26 [i_1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (((+(1818548886U))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1] [i_1] [i_7])))))) >> (((((((/* implicit */_Bool) (+(8284826378090042419ULL)))) ? (((/* implicit */int) arr_20 [i_5 - 2] [i_5] [i_7] [i_5])) : (((/* implicit */int) min(((short)32767), (var_6)))))) + (20461)))));
                    var_26 = (+(arr_24 [i_7] [i_5] [(short)9] [i_1]));
                }
                /* LoopNest 2 */
                for (short i_8 = 1; i_8 < 14; i_8 += 2) 
                {
                    for (signed char i_9 = 3; i_9 < 15; i_9 += 2) 
                    {
                        {
                            var_27 = (+(max((((/* implicit */unsigned long long int) min((arr_5 [(_Bool)1]), (((/* implicit */unsigned char) arr_13 [i_1] [i_8]))))), (arr_24 [i_2] [i_2] [i_8] [i_9]))));
                            var_28 = ((/* implicit */long long int) var_5);
                        }
                    } 
                } 
                arr_31 [i_5] [i_2] [i_1] = ((/* implicit */unsigned char) arr_23 [(unsigned char)2] [i_2] [i_5 - 1] [i_5] [(unsigned char)2] [i_5]);
            }
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_2 + 1])) ? ((~(((/* implicit */int) (unsigned char)7)))) : ((~(arr_7 [i_1] [i_2])))))) >= ((+(((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_24 [i_2 - 1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [(unsigned char)2] [1ULL] [i_2] [i_2] [i_2])))))))));
        }
        arr_32 [i_1] = ((/* implicit */unsigned char) (+((+(arr_27 [i_1 - 3])))));
        arr_33 [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_18 [i_1 - 2] [i_1 - 3] [i_1])), ((unsigned char)250)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [(unsigned char)10] [(unsigned char)10] [i_1])) ? (((/* implicit */int) arr_16 [i_1] [i_1] [(unsigned char)14] [i_1])) : (((/* implicit */int) (_Bool)1))))) : (((var_17) << (((var_4) - (6209721693378728492LL))))))) < (3105412743U)));
    }
    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) ((max((var_17), (((/* implicit */unsigned int) (unsigned char)253)))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) * (((((/* implicit */int) var_5)) * (((/* implicit */int) var_2))))))) : (max((((/* implicit */long long int) max(((unsigned char)6), (((/* implicit */unsigned char) var_0))))), (max((((/* implicit */long long int) var_6)), (-8881440858422768617LL))))))))));
    /* LoopSeq 1 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_38 [i_10] [(unsigned char)4] = ((/* implicit */long long int) var_6);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_11 = 1; i_11 < 15; i_11 += 2) 
        {
            var_31 -= ((/* implicit */short) (+(((/* implicit */int) arr_40 [(short)10] [i_11 - 1]))));
            arr_41 [i_11] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) arr_36 [(short)8]))))));
            arr_42 [i_11] = ((((/* implicit */_Bool) arr_35 [i_10])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_35 [i_10])) > (var_8)))) : (((/* implicit */int) ((short) (unsigned char)225))));
            var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) -1LL))));
        }
        for (signed char i_12 = 1; i_12 < 17; i_12 += 2) 
        {
            var_33 = ((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned char) ((arr_35 [i_12 - 1]) > (arr_35 [i_12 - 1]))))));
            arr_45 [i_12] [i_12 + 1] [i_12] = ((/* implicit */_Bool) arr_37 [i_10]);
            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)29761))))) || (((/* implicit */_Bool) ((unsigned int) (unsigned char)7)))));
        }
        var_35 |= ((((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_10])) & (-1012309710)))) ? ((+(((((/* implicit */int) (signed char)-117)) % (((/* implicit */int) arr_43 [4LL])))))) : (-1254073639));
    }
}
