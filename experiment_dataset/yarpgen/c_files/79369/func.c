/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79369
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0 + 1]))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) + (2954170392U)))));
        var_15 = ((/* implicit */signed char) (-(((((/* implicit */int) arr_2 [i_0])) >> (((arr_1 [i_0 + 1] [i_0 - 1]) + (465189129)))))));
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) (unsigned short)44567)))) / (((((/* implicit */int) (unsigned char)238)) + (arr_1 [i_0] [i_0 + 1]))))))));
        var_17 = ((/* implicit */unsigned short) (-(arr_3 [i_0 + 1])));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_18 += ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_1] [i_1]))));
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 1359456799U)) ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 + 1]))))));
        }
    }
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)0))));
        var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)27092)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))) : (1340796891U)));
        arr_9 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)0)) / (((/* implicit */int) arr_8 [i_2]))));
        arr_10 [i_2] = ((/* implicit */unsigned char) (+((((+(((/* implicit */int) arr_6 [10U] [i_2])))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)26875))) >= (4703611439891853628LL))))))));
    }
    for (unsigned short i_3 = 3; i_3 < 14; i_3 += 4) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned char) ((max((((-1) % (((/* implicit */int) (unsigned char)218)))), (((((/* implicit */int) arr_8 [i_3 + 1])) + (((/* implicit */int) arr_2 [i_3])))))) <= ((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3 - 1]))) == (arr_7 [i_3]))))))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) arr_7 [i_3])) : (arr_5 [i_3] [i_3]))), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)225)))))) ? (((((/* implicit */_Bool) ((((-4703611439891853629LL) + (9223372036854775807LL))) << (((1794764233540585191LL) - (1794764233540585191LL)))))) ? (((((/* implicit */unsigned long long int) -1656416598)) + (arr_5 [i_3 - 1] [i_3 - 1]))) : (((/* implicit */unsigned long long int) min((arr_1 [i_3 + 1] [i_3]), (((/* implicit */int) (unsigned char)40))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)58)) >> (((((/* implicit */int) (unsigned char)210)) - (189))))))))))));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                {
                    arr_21 [i_6] [i_5] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -3462361503444528716LL))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_23 [i_6] [(unsigned short)12] [i_6] [i_7] [i_6])) * (arr_19 [i_4] [i_4] [i_4] [i_7])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_4]))))) : (2031616U))))));
                        var_24 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_17 [i_4] [i_4]))));
                    }
                    for (signed char i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        var_25 ^= ((/* implicit */int) (short)6254);
                        arr_27 [i_6] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-41))) + (4703611439891853628LL)));
                        var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)59414)) && (((/* implicit */_Bool) (signed char)-41)))) ? (((-4703611439891853629LL) | (-8299147675376278942LL))) : (((/* implicit */long long int) ((int) 1676469671U)))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_5 [i_4] [i_4]))) / (((((/* implicit */_Bool) arr_2 [i_8])) ? (((/* implicit */int) (unsigned char)226)) : (-1058660475)))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)164)) == (((/* implicit */int) (signed char)-1))))) << (((((/* implicit */_Bool) arr_26 [i_4] [i_5] [i_6] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)20426)))))))));
                        arr_31 [i_4] [i_5] [i_6] [i_4] [i_4] = ((/* implicit */short) ((((((/* implicit */int) arr_4 [i_4] [i_5])) << (((((/* implicit */int) arr_20 [i_4] [i_6] [i_5] [i_4])) - (41732))))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) 583620038)) != (9249855317356921392ULL))))));
                        arr_32 [i_4] [i_5] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */unsigned int) (unsigned char)255);
                        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) arr_6 [i_6] [i_5]))));
                        arr_33 [i_4] |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 671928654)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-22928))) : (1676469663U)))));
                    }
                    for (unsigned long long int i_10 = 1; i_10 < 15; i_10 += 1) /* same iter space */
                    {
                        arr_37 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((arr_7 [i_10 + 1]) <= (arr_7 [i_10 + 2])));
                        var_30 = (+(((/* implicit */int) (signed char)112)));
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) == (7551029281236310566LL)))) * (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)255))))))))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 3) /* same iter space */
                    {
                        var_32 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_35 [i_11] [(unsigned short)13] [i_5] [i_4] [i_4])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_4])))) << (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-41)) && (((/* implicit */_Bool) 6768834840153266561LL)))))));
                        arr_41 [i_11] [i_6] [i_5] [i_11] = arr_18 [i_4];
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20427)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20))) : (arr_24 [i_6] [i_11] [i_6] [i_11])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)12170)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_30 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))) : (((((/* implicit */_Bool) -1105864382)) ? (arr_19 [i_6] [i_6] [i_5] [(signed char)13]) : (((/* implicit */unsigned long long int) arr_1 [i_4] [i_4]))))));
                        arr_42 [i_4] [i_5] [i_6] [i_5] [i_11] [i_6] = ((/* implicit */long long int) (-((~(arr_19 [i_4] [4LL] [i_4] [i_4])))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 17; i_12 += 3) /* same iter space */
                    {
                        var_34 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_25 [i_12] [i_6] [i_5] [i_4]))) * (((((/* implicit */int) (unsigned short)27356)) ^ (((/* implicit */int) (unsigned short)24))))));
                        /* LoopSeq 2 */
                        for (int i_13 = 0; i_13 < 17; i_13 += 3) 
                        {
                            arr_48 [i_12] [i_12] [i_12] [i_12] [i_12] = ((((((/* implicit */_Bool) (short)-20426)) ? (((/* implicit */int) arr_34 [i_4] [i_5])) : (((/* implicit */int) arr_8 [i_6])))) <= (((/* implicit */int) ((((/* implicit */int) arr_2 [(_Bool)0])) != (((/* implicit */int) (unsigned short)11226))))));
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_13] [i_12] [i_6] [i_5] [0])) ? (arr_1 [i_5] [i_6]) : (arr_1 [i_4] [i_4])));
                        }
                        for (long long int i_14 = 0; i_14 < 17; i_14 += 4) 
                        {
                            arr_51 [i_4] [i_14] [i_14] [14U] [i_14] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)20))));
                            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((arr_4 [i_14] [i_14]) ? (((/* implicit */int) arr_4 [i_4] [i_5])) : (((/* implicit */int) arr_4 [i_14] [i_12])))))));
                            var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) arr_3 [i_5]))));
                            var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) arr_40 [i_14] [i_14] [i_12] [i_6] [i_5] [i_4]))));
                            var_39 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4703611439891853628LL))));
                        }
                    }
                }
            } 
        } 
        var_40 = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)20426)) + (((/* implicit */int) arr_38 [i_4] [i_4] [i_4])))) + (((((/* implicit */int) arr_4 [i_4] [i_4])) + (-1034682132)))));
        var_41 *= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)1770)) ? (((/* implicit */int) arr_43 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_6 [i_4] [i_4])))));
    }
    var_42 = ((/* implicit */int) var_1);
    var_43 = ((/* implicit */int) ((3224356478U) == (((/* implicit */unsigned int) -881575800))));
}
