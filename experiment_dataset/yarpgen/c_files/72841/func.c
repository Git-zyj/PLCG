/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72841
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
    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)81))));
    var_16 = ((/* implicit */long long int) var_12);
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((((var_12) ? (((/* implicit */unsigned int) var_11)) : (4294967295U))) / (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)22)) | (var_11)))))) >> (((var_14) + (247040960434617568LL))))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (unsigned char)170);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            arr_6 [5LL] [i_0] = ((/* implicit */signed char) var_9);
            /* LoopNest 2 */
            for (unsigned short i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((unsigned short) max(((~(var_2))), (((/* implicit */int) (signed char)-67)))));
                        arr_14 [0U] [i_2] [(signed char)10] [(unsigned char)2] = ((/* implicit */unsigned char) arr_9 [i_2] [i_2]);
                    }
                } 
            } 
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_18 = ((/* implicit */short) min(((~(((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4])))), ((~(((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4]))))));
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) arr_4 [i_4] [i_4] [i_4])) < (2147483647))));
    }
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_6 = 4; i_6 < 18; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_7 = 2; i_7 < 18; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    {
                        arr_28 [i_5] [i_6] [i_7 - 1] [(signed char)19] = ((/* implicit */unsigned short) var_9);
                        arr_29 [i_5] [i_5] = max((arr_26 [i_8] [i_7] [i_6] [(short)13] [11ULL]), (var_2));
                        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (signed char)61)))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                var_20 ^= ((/* implicit */unsigned int) (-(-375817389)));
                var_21 = ((/* implicit */int) var_3);
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (unsigned char)18))));
            }
            for (unsigned char i_10 = 3; i_10 < 17; i_10 += 4) 
            {
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (~(3244092040703083059ULL))))));
                var_24 *= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [(signed char)11] [i_6])) && (((/* implicit */_Bool) (signed char)-1))))) : (((/* implicit */int) arr_22 [i_5] [(short)0])))));
                arr_36 [i_5] [i_5] = (_Bool)1;
                arr_37 [i_5] [i_5] [i_10] = (-((-(((/* implicit */int) (signed char)-62)))));
                var_25 |= ((/* implicit */unsigned int) 6040922776657419916LL);
            }
        }
        for (int i_11 = 0; i_11 < 20; i_11 += 3) 
        {
            arr_40 [i_5] [i_5] = (unsigned char)17;
            arr_41 [i_5] [i_11] [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */int) min(((signed char)96), (((/* implicit */signed char) (_Bool)1))))) * ((+(((/* implicit */int) arr_23 [i_5] [i_11])))))) == (arr_19 [i_5])));
        }
        arr_42 [i_5] = ((/* implicit */unsigned short) ((short) (_Bool)1));
        /* LoopNest 2 */
        for (unsigned char i_12 = 3; i_12 < 18; i_12 += 3) 
        {
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                {
                    arr_47 [i_5] [i_12] [i_13] [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_39 [i_5] [i_13 - 1] [i_13])) >= (((/* implicit */int) var_3))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_14 = 3; i_14 < 19; i_14 += 4) 
                    {
                        arr_52 [i_5] [i_12] [i_5] [(signed char)8] [(unsigned char)10] |= ((/* implicit */unsigned int) var_9);
                        arr_53 [i_5] [i_12 - 2] [i_13] [(short)6] &= ((/* implicit */_Bool) arr_43 [i_5]);
                        /* LoopSeq 1 */
                        for (int i_15 = 1; i_15 < 19; i_15 += 4) 
                        {
                            arr_56 [6U] [6U] [6U] [i_13] [i_5] [i_15] [i_15] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_55 [i_12] [i_12] [i_12 - 2] [i_5] [i_12 - 1]))));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) arr_30 [i_13 - 1] [i_15 + 1]))));
                        }
                        arr_57 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-64))) * (4294967293U)))) ? ((~(((/* implicit */int) (unsigned short)30833)))) : ((-(((/* implicit */int) (unsigned short)64630)))));
                    }
                    var_27 = (unsigned char)134;
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_16 = 0; i_16 < 10; i_16 += 4) 
    {
        arr_61 [i_16] [i_16] = ((/* implicit */int) 2508416288U);
        arr_62 [i_16] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9007199254740991ULL)));
        var_28 ^= ((signed char) arr_5 [i_16] [i_16]);
        arr_63 [i_16] = ((/* implicit */unsigned char) (_Bool)1);
        /* LoopNest 2 */
        for (short i_17 = 3; i_17 < 7; i_17 += 3) 
        {
            for (long long int i_18 = 0; i_18 < 10; i_18 += 1) 
            {
                {
                    arr_70 [i_16] [i_16] [i_17] = ((/* implicit */long long int) (signed char)81);
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)63)))))));
                    arr_71 [(signed char)0] [i_17] [i_17] [i_18] = ((/* implicit */signed char) var_11);
                    arr_72 [i_18] [i_17] [9LL] = ((/* implicit */_Bool) ((unsigned int) (signed char)-62));
                }
            } 
        } 
    }
}
