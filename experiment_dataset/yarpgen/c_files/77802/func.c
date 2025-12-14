/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77802
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
    var_15 *= ((/* implicit */unsigned int) var_6);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) 348455270U)) ? (-7456412208298898085LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_1] [i_0])) - (((((/* implicit */_Bool) (~(var_3)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((unsigned char) (unsigned short)9001)))))));
                    arr_10 [i_0 + 1] [(unsigned short)3] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9019))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [(signed char)3] [i_2]))))))));
                    arr_11 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */_Bool) (unsigned short)65535);
                    var_18 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56534)))))));
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_1)), ((unsigned short)9001)))))) ? (((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_0] [i_0 - 1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))))) : (var_5)));
        var_20 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (2267772231U)))), (arr_0 [i_0 + 2] [i_0])))));
        arr_12 [i_0] = ((((((/* implicit */int) arr_1 [i_0 - 1] [i_0])) - (((/* implicit */int) ((short) (unsigned short)9001))))) - ((-(((/* implicit */int) arr_8 [i_0 - 2] [i_0] [i_0] [i_0])))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 3; i_7 < 16; i_7 += 4) 
                        {
                            {
                                var_21 = ((((/* implicit */_Bool) ((short) arr_17 [i_3]))) ? (max((max((var_12), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) max(((unsigned short)56534), (((/* implicit */unsigned short) (short)-31034))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_24 [i_7] [(unsigned short)7] [i_7] [i_7] [i_7] [i_7] [i_7 - 3]), (arr_24 [i_7 + 1] [i_7 + 2] [i_7] [i_7] [i_7 - 3] [i_7 + 2] [i_7 - 1]))))));
                                var_22 = ((/* implicit */long long int) var_0);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) var_8);
                                arr_29 [i_4] [i_8] = arr_21 [i_4];
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_10 = 4; i_10 < 14; i_10 += 4) /* same iter space */
                    {
                        var_24 += (+(((3266868641U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56548))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 3; i_11 < 16; i_11 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_32 [i_11] [0ULL] [i_11 + 2] [i_11 - 1] [i_11]))));
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) arr_27 [i_3] [(short)2] [i_5] [i_10] [i_4]))));
                            arr_34 [i_5] [i_5] = ((/* implicit */short) ((int) ((signed char) 1187515988)));
                            arr_35 [i_3] [i_4] [i_5] [i_10 + 4] [i_11] = (~(((/* implicit */int) (unsigned short)56534)));
                        }
                        for (signed char i_12 = 2; i_12 < 17; i_12 += 1) 
                        {
                            var_27 ^= ((/* implicit */unsigned char) 1169581664U);
                            arr_38 [i_3] [i_10] [i_5] [i_10 + 4] [i_12 - 2] [i_5] = ((/* implicit */long long int) (-(((((/* implicit */int) (unsigned short)56534)) & (((/* implicit */int) arr_17 [i_5]))))));
                            var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(arr_28 [i_4] [i_4] [i_4] [i_4] [i_4])))) - (((arr_23 [i_3] [i_3]) & (arr_36 [i_3] [i_4] [i_5] [i_10] [i_5])))));
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) arr_32 [i_3] [i_12] [i_5] [i_10] [i_12]))));
                        }
                        /* LoopSeq 2 */
                        for (short i_13 = 0; i_13 < 18; i_13 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (+(((unsigned long long int) var_7)))))));
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_32 [i_5] [i_5] [i_5] [i_10 - 4] [i_10])) - (((/* implicit */int) var_11))));
                            arr_43 [i_10] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & ((~(3125385654U)))));
                        }
                        for (short i_14 = 0; i_14 < 18; i_14 += 4) /* same iter space */
                        {
                            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_4))) ? (1169581648U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            arr_48 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)9019)) - (((/* implicit */int) var_4))));
                            var_33 = ((/* implicit */_Bool) ((unsigned char) var_11));
                        }
                        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (~(((arr_44 [(unsigned short)12] [(unsigned short)12] [i_5] [i_5] [i_5]) & (((/* implicit */long long int) 1169581683U)))))))));
                    }
                    /* vectorizable */
                    for (signed char i_15 = 4; i_15 < 14; i_15 += 4) /* same iter space */
                    {
                        arr_51 [i_3] [i_4] [i_5] [i_15] = ((/* implicit */unsigned char) var_3);
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_40 [8] [i_5] [i_5] [i_4] [i_4]))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_50 [i_3] [i_4] [i_5])) : (arr_49 [i_4]))) : (((/* implicit */int) var_8))));
                    }
                }
            } 
        } 
        arr_52 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)1280)) ? (((/* implicit */int) ((_Bool) ((unsigned char) 3266868643U)))) : ((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (var_0)))))));
        /* LoopNest 2 */
        for (long long int i_16 = 0; i_16 < 18; i_16 += 1) 
        {
            for (int i_17 = 0; i_17 < 18; i_17 += 3) 
            {
                {
                    arr_59 [16ULL] [i_16] [i_17] &= ((/* implicit */int) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (var_14))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14386))))), (((/* implicit */unsigned long long int) (short)17274))));
                    var_36 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_17 [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_42 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 3) 
        {
            for (long long int i_19 = 0; i_19 < 18; i_19 += 3) 
            {
                for (int i_20 = 0; i_20 < 18; i_20 += 3) 
                {
                    {
                        var_37 |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) min((arr_18 [i_3] [i_3]), (((/* implicit */short) (unsigned char)162))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */int) arr_50 [i_18] [(_Bool)1] [i_18])) : (((((/* implicit */_Bool) 1169581687U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_33 [0ULL] [i_19] [3] [i_19] [i_20])))))) : (arr_26 [i_3] [(short)3] [i_3] [i_3] [i_3] [i_3])));
                        var_38 |= ((/* implicit */_Bool) (~(((/* implicit */int) ((short) (+(3266868635U)))))));
                    }
                } 
            } 
        } 
    }
    var_39 = ((/* implicit */long long int) ((max((min((((/* implicit */unsigned long long int) var_8)), (var_13))), (((/* implicit */unsigned long long int) ((var_12) - (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) - (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -5568060711587436198LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_6)))))));
}
