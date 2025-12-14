/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61425
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
    for (int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */signed char) var_11);
                var_18 = (unsigned short)28138;
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_11))));
                            var_20 = ((/* implicit */unsigned char) arr_3 [i_0]);
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (+(((((/* implicit */_Bool) 15727940786505021733ULL)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37398))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) (unsigned short)37394)) & (((/* implicit */int) var_13)))) : ((~(((/* implicit */int) (unsigned char)220)))))));
    /* LoopSeq 3 */
    for (short i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        arr_13 [i_4] = ((/* implicit */long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_1))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? ((-(((/* implicit */int) arr_7 [i_4] [12] [i_4])))) : (((/* implicit */int) ((unsigned char) (_Bool)1)))))) ? (((/* implicit */int) (unsigned short)37400)) : (((/* implicit */int) (short)-1145))));
        var_24 = ((/* implicit */int) (_Bool)1);
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */long long int) ((unsigned short) (short)-31862));
        arr_18 [6ULL] = ((/* implicit */unsigned int) arr_3 [i_5]);
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                {
                    arr_26 [i_5] [i_6] [i_6] = ((/* implicit */short) var_2);
                    var_25 = ((/* implicit */unsigned char) (short)-31887);
                    arr_27 [i_5] [i_5] [2U] = ((/* implicit */unsigned char) var_8);
                }
            } 
        } 
    }
    for (unsigned int i_8 = 2; i_8 < 17; i_8 += 3) 
    {
        var_26 |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (short)31888))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-31862))) | (arr_8 [i_8] [19LL]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_9 [i_8] [i_8] [i_8] [i_8] [i_8]))))))));
        /* LoopSeq 1 */
        for (unsigned char i_9 = 1; i_9 < 16; i_9 += 1) 
        {
            arr_35 [12LL] [i_8] [i_9] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (-(arr_30 [i_8])))), (var_9)));
            arr_36 [i_8] = ((/* implicit */long long int) max((var_11), (((/* implicit */unsigned int) arr_29 [i_8]))));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_10 = 0; i_10 < 12; i_10 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            for (signed char i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                {
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-6719))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_10] [i_11]))) : ((+(var_7)))));
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 3; i_13 < 10; i_13 += 2) 
                    {
                        for (signed char i_14 = 2; i_14 < 11; i_14 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) arr_47 [i_11] [i_11] [i_12]);
                                arr_52 [i_14] [i_11] [i_12] [i_11] [i_10] = ((/* implicit */short) (signed char)-61);
                            }
                        } 
                    } 
                    arr_53 [i_11] [i_11] = ((/* implicit */unsigned char) ((signed char) arr_41 [i_11] [(signed char)8] [i_12]));
                    /* LoopSeq 1 */
                    for (short i_15 = 0; i_15 < 12; i_15 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */int) (unsigned short)16380)) : (var_5)));
                        var_30 = ((/* implicit */int) var_1);
                        var_31 = ((/* implicit */long long int) ((unsigned char) ((_Bool) 1023ULL)));
                        /* LoopSeq 3 */
                        for (long long int i_16 = 2; i_16 < 8; i_16 += 4) 
                        {
                            var_32 *= ((/* implicit */signed char) ((((/* implicit */int) arr_45 [i_15] [i_11] [i_12])) > (((/* implicit */int) (short)-31852))));
                            var_33 = ((/* implicit */short) var_11);
                            var_34 = ((/* implicit */short) ((unsigned int) (signed char)-61));
                        }
                        for (unsigned char i_17 = 0; i_17 < 12; i_17 += 1) 
                        {
                            var_35 |= ((/* implicit */short) var_5);
                            arr_62 [i_10] [i_11] [i_11] [i_15] [i_17] = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_15)) * (arr_49 [i_11] [i_11] [i_15] [i_11])));
                        }
                        for (long long int i_18 = 1; i_18 < 10; i_18 += 2) 
                        {
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_10])) >> (((/* implicit */int) (_Bool)1))));
                            var_37 -= ((/* implicit */signed char) var_15);
                        }
                    }
                    var_38 = ((/* implicit */int) var_9);
                }
            } 
        } 
        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)14402))));
        arr_66 [i_10] = ((/* implicit */short) (-(((/* implicit */int) (short)-31897))));
    }
}
