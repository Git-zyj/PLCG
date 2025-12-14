/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96833
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0])) ? (((5377588339788125647LL) % (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 16123622716096847744ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */int) arr_0 [i_0]);
                var_20 ^= arr_4 [i_1];
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_2 = 1; i_2 < 20; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_8 [i_2 + 2])) : (arr_9 [i_2] [i_2])));
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                for (unsigned char i_5 = 1; i_5 < 18; i_5 += 1) 
                {
                    for (long long int i_6 = 2; i_6 < 19; i_6 += 2) 
                    {
                        {
                            var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_15 [i_5 + 1] [i_6 + 1] [i_4] [i_5]), (arr_15 [i_5 + 1] [i_6 + 1] [i_4] [i_6])))) ? (((/* implicit */int) ((((/* implicit */int) arr_15 [i_5 + 1] [i_6 + 1] [i_4] [i_4])) == (1866245192)))) : (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_15 [i_5 + 1] [i_6 + 1] [i_6 + 1] [i_5 + 1])) - (4320)))))));
                            var_22 -= ((/* implicit */signed char) arr_20 [i_5] [i_5] [i_5] [i_5 + 3] [i_5]);
                            arr_21 [i_5] [i_4] [i_5] = min((((((/* implicit */int) (_Bool)1)) >> (((-288152624176630384LL) + (288152624176630398LL))))), (arr_19 [i_5 + 2] [i_5 + 4] [i_5 + 2] [i_5 + 2]));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) arr_20 [i_2] [i_2] [i_2] [i_2 + 2] [i_2])) : (((/* implicit */int) (signed char)-92)))), (min((((/* implicit */int) arr_14 [i_2 + 2] [i_2 + 2] [i_2])), (arr_19 [i_3] [i_3] [i_2] [i_2])))));
        }
        for (int i_7 = 1; i_7 < 18; i_7 += 1) 
        {
            arr_25 [i_7] [i_7] [i_7] &= ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (~(arr_16 [i_2] [i_2] [i_2] [i_2] [i_7] [i_7])))) ? ((((_Bool)1) ? (14ULL) : (((/* implicit */unsigned long long int) arr_6 [i_2])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [8LL]))))))));
            arr_26 [i_7] [i_2] = ((/* implicit */int) ((long long int) (-(((/* implicit */int) (short)-15432)))));
        }
        var_24 = ((/* implicit */long long int) arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 15; i_8 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_9 = 2; i_9 < 13; i_9 += 3) 
        {
            arr_32 [i_8] [i_8] = ((/* implicit */unsigned short) arr_14 [i_8] [i_9] [i_8]);
            arr_33 [i_8] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_9 - 2])) ? (((/* implicit */int) arr_12 [i_9 - 1])) : (((/* implicit */int) arr_12 [i_9 - 1]))));
            var_25 -= ((/* implicit */unsigned long long int) 1891039025);
            arr_34 [i_8] [i_8] = ((/* implicit */signed char) (_Bool)1);
        }
        for (int i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            arr_38 [i_10] = ((/* implicit */unsigned char) arr_16 [i_8] [i_10] [i_10] [i_10] [i_10] [i_10]);
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 15; i_11 += 1) 
            {
                for (unsigned int i_12 = 3; i_12 < 13; i_12 += 4) 
                {
                    {
                        arr_44 [i_12] [i_10] [i_11] [i_10] [i_8] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_8] [i_8]))) % ((~(3872649788132415218LL)))));
                        var_26 = ((/* implicit */long long int) (~(arr_42 [i_12 + 2] [i_8] [i_8] [i_12 + 2])));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */int) (short)32752)) >> ((((-(((/* implicit */int) (_Bool)1)))) + (30))))))));
                        arr_45 [i_8] [i_8] [i_11] [i_11] [i_10] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_8] [i_12 - 2])) ? (((/* implicit */int) arr_7 [i_10] [i_12 - 1])) : (((/* implicit */int) arr_29 [i_10] [i_12 - 2]))));
                    }
                } 
            } 
        }
        for (unsigned int i_13 = 0; i_13 < 15; i_13 += 3) 
        {
            var_28 *= (signed char)124;
            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_36 [i_8])) / (arr_11 [i_8] [i_13])));
            arr_49 [i_8] [i_13] = ((/* implicit */int) ((unsigned short) arr_28 [i_8] [i_8]));
            arr_50 [i_13] [i_13] = ((/* implicit */signed char) arr_24 [i_8] [i_13]);
            arr_51 [i_13] = ((/* implicit */long long int) arr_36 [i_8]);
        }
        arr_52 [i_8] = ((((/* implicit */_Bool) arr_17 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_17 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_17 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])));
        /* LoopNest 2 */
        for (unsigned short i_14 = 2; i_14 < 14; i_14 += 1) 
        {
            for (signed char i_15 = 0; i_15 < 15; i_15 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_16 = 1; i_16 < 14; i_16 += 1) 
                    {
                        for (long long int i_17 = 1; i_17 < 14; i_17 += 3) 
                        {
                            {
                                var_30 *= ((/* implicit */short) (((_Bool)1) ? (33554431) : (arr_40 [i_15] [i_16 - 1] [i_17 - 1])));
                                var_31 |= ((unsigned long long int) ((int) (_Bool)1));
                                var_32 *= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 64049719)) % (arr_18 [i_8] [i_14]))) / (((/* implicit */unsigned long long int) ((1554788956666687298LL) % (144115188073758720LL))))));
                                var_33 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_41 [i_17] [i_17 + 1] [i_17] [i_14]))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) -7170253888654048963LL))));
                    arr_65 [i_14] [i_14] [i_14] = ((/* implicit */unsigned int) arr_57 [i_8] [i_8] [i_8]);
                    arr_66 [i_14] [i_14] = ((/* implicit */short) arr_60 [i_8] [i_14] [i_8]);
                }
            } 
        } 
        var_35 -= ((/* implicit */signed char) ((((arr_35 [i_8] [i_8]) ? (((/* implicit */unsigned long long int) -288152624176630382LL)) : (9600327506737606078ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)1705))))));
        var_36 *= ((/* implicit */long long int) (-(((arr_3 [i_8] [i_8] [i_8]) % (((/* implicit */int) arr_43 [i_8] [i_8] [i_8] [i_8] [i_8]))))));
    }
    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
    {
        arr_70 [i_18] = ((/* implicit */signed char) arr_69 [i_18]);
        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) arr_68 [i_18 - 1]))));
        var_38 = ((/* implicit */signed char) arr_67 [i_18]);
        var_39 = ((/* implicit */int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_67 [i_18])) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (_Bool)1))))) / (-1554788956666687284LL))) == (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 14054775070809836321ULL))))) % (((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) (_Bool)1)))))))));
    }
    var_40 = ((/* implicit */long long int) (short)32172);
}
