/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84490
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 1; i_3 < 11; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_14 [i_1] [i_3] [i_3] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (arr_11 [i_0] [i_1] [i_3 - 1] [i_3] [i_4])));
                            var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1])) || (((/* implicit */_Bool) ((2689688523U) >> (((/* implicit */int) (_Bool)1)))))));
                            var_11 = ((/* implicit */_Bool) var_1);
                            arr_15 [i_3] [i_3] [i_3] [i_3] [i_4] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) (_Bool)1)))));
                            var_12 = ((/* implicit */long long int) var_5);
                        }
                    } 
                } 
                arr_16 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
                /* LoopSeq 4 */
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    var_13 = arr_12 [i_5] [i_2] [i_1] [i_1] [i_0];
                    var_14 -= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)44632)) ? (134217728LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182))))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_19 [i_5] [i_2] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1))));
                    var_16 = ((/* implicit */signed char) ((long long int) (_Bool)1));
                }
                for (int i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                {
                    var_17 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_9)));
                    var_18 = ((/* implicit */long long int) ((unsigned int) var_0));
                    arr_25 [i_0] [i_6] [i_2] [i_6] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_8 [i_0] [i_0]))))));
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        var_19 ^= ((/* implicit */long long int) arr_4 [i_0]);
                        var_20 = ((/* implicit */long long int) 576460752303423488ULL);
                        arr_29 [i_0] [i_6] [i_0] [i_6] = ((/* implicit */signed char) ((var_2) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                    }
                    for (short i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_30 [i_0] [i_0] [i_2] [i_6] [i_8] [i_1])))))));
                        arr_32 [i_6] [i_1] [i_6] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_9 [i_8] [i_8] [i_6]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1])))));
                    }
                }
                for (int i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                {
                    arr_35 [i_2] [i_2] [i_0] [i_0] = (!(((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_2] [i_2]))))));
                    var_22 ^= ((/* implicit */unsigned char) (signed char)6);
                    var_23 = ((/* implicit */signed char) ((arr_28 [i_0] [i_1] [i_0] [i_1] [i_2] [i_2] [i_2]) & (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0])))));
                    /* LoopSeq 3 */
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        var_24 += ((/* implicit */unsigned int) ((unsigned long long int) (+(((/* implicit */int) var_5)))));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (short)12195)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))))));
                        var_26 = var_1;
                    }
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        arr_41 [i_9] [i_1] [i_2] [i_9] [i_11] [i_2] = ((/* implicit */unsigned char) arr_11 [i_2] [i_1] [i_2] [i_2] [i_11 - 1]);
                        var_27 ^= ((/* implicit */long long int) (~(13382562138682019947ULL)));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned short) (~(arr_18 [i_12] [i_9] [i_2] [i_0])));
                        var_29 = ((/* implicit */_Bool) ((arr_9 [i_0] [i_9] [i_0]) + (arr_9 [i_0] [i_1] [i_0])));
                        arr_46 [i_0] [i_1] [i_2] [i_9] [i_12] = (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_9)))) : (((((/* implicit */_Bool) arr_0 [i_2] [i_1])) ? (1605278746U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_12] [i_9] [i_0])) ? (arr_44 [i_9] [i_9] [i_9]) : (arr_44 [i_12] [i_9] [i_2])));
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (unsigned short)52309))));
                    }
                    var_32 = ((/* implicit */unsigned char) (signed char)-104);
                }
                for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 3) 
                {
                    var_33 = ((/* implicit */_Bool) ((((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1605278773U))) * ((~(arr_13 [i_13] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))));
                    var_34 ^= ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_2 [i_0]))))));
                }
            }
            var_35 += ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < (-3304827135865196423LL))))));
        }
        var_36 -= ((/* implicit */int) ((_Bool) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
        arr_49 [i_0] = ((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32229))) | (-6870413241745336878LL)))) : ((~(12013598697317307197ULL)))));
        var_37 = ((/* implicit */long long int) (_Bool)1);
    }
    var_38 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_3))));
    var_39 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned short) var_6)), (min(((unsigned short)6943), (((/* implicit */unsigned short) (short)-14998)))))), (((/* implicit */unsigned short) (unsigned char)255))));
}
