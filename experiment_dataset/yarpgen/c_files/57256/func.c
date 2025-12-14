/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57256
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
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) arr_1 [i_0]);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_17 ^= ((/* implicit */signed char) 702235732);
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 21; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_3] [0ULL] [(short)7] [(_Bool)1] = ((/* implicit */int) ((long long int) var_1));
                        arr_10 [i_0 - 2] [i_0] [i_3] [i_0 + 1] [i_0] = ((/* implicit */_Bool) ((long long int) arr_6 [(short)14] [i_3] [i_3 - 4] [(short)14]));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    {
                        arr_17 [i_0] [i_1] [i_4] [i_0 - 1] = ((/* implicit */signed char) ((int) var_7));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_1))));
                    }
                } 
            } 
            arr_18 [17ULL] [1U] [i_1] = ((/* implicit */unsigned short) arr_0 [i_1]);
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            var_19 = ((/* implicit */int) 874812528U);
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-1))));
        }
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                {
                    var_21 ^= ((/* implicit */_Bool) ((((((/* implicit */int) arr_15 [i_0 - 2] [i_7] [(short)8] [i_8])) + (2147483647))) >> (((arr_11 [i_8] [i_8] [i_8]) + (5074368828756631857LL)))));
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */int) (short)-32753)) < (((/* implicit */int) (unsigned char)4)))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 4) 
        {
            var_23 = ((/* implicit */unsigned int) (signed char)19);
            var_24 = ((/* implicit */unsigned int) (unsigned short)62328);
        }
        for (short i_10 = 0; i_10 < 25; i_10 += 3) 
        {
            arr_29 [i_10] = ((/* implicit */unsigned long long int) ((2112059632U) - (3526442306U)));
            var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((unsigned short) 702235728))) : (((/* implicit */int) ((((/* implicit */int) (short)-25833)) > (((/* implicit */int) arr_23 [i_10] [i_0] [i_0] [i_0])))))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 25; i_12 += 4) 
            {
                for (signed char i_13 = 2; i_13 < 24; i_13 += 1) 
                {
                    {
                        arr_38 [i_0 - 2] [i_11] [i_12] [i_11] = ((/* implicit */signed char) arr_25 [i_11] [i_13 - 1]);
                        arr_39 [(short)24] [i_11] = ((/* implicit */unsigned int) var_4);
                        arr_40 [i_0] [(signed char)3] [i_12] [4U] [i_12] [i_11] = ((/* implicit */short) var_11);
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_11] [i_11] [i_0] [i_0] [i_0] [i_0 - 2]))) ^ (var_7)))))));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 25; i_14 += 3) 
            {
                for (short i_15 = 0; i_15 < 25; i_15 += 3) 
                {
                    {
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((_Bool) (~(((/* implicit */int) var_14))))))));
                        /* LoopSeq 1 */
                        for (int i_16 = 0; i_16 < 25; i_16 += 4) 
                        {
                            var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
                            var_29 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_28 [i_14])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_47 [i_0] [i_15] [i_16])))));
                            var_30 -= ((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) (_Bool)1)));
                        }
                        arr_48 [i_11] [(unsigned short)8] [i_14] [i_15] = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_31 += ((/* implicit */unsigned char) var_9);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 4) 
            {
                for (unsigned short i_18 = 2; i_18 < 23; i_18 += 4) 
                {
                    {
                        var_32 += ((/* implicit */signed char) (~(3384595096U)));
                        var_33 += ((/* implicit */short) 11898342233771709119ULL);
                    }
                } 
            } 
            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) == (((/* implicit */int) arr_44 [16ULL] [i_11] [i_11] [i_11] [(short)2] [i_0])))))));
        }
        arr_54 [i_0] = ((/* implicit */short) arr_49 [i_0] [i_0 + 1] [i_0] [i_0 + 1]);
    }
    /* LoopSeq 1 */
    for (unsigned int i_19 = 1; i_19 < 19; i_19 += 3) 
    {
        arr_58 [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)140)) ? (33285996544ULL) : (3640073196252449333ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_32 [(_Bool)1] [i_19 - 1] [i_19 + 1] [i_19])), ((short)27333))))) : (11ULL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [(unsigned char)16]))))) : (max((arr_45 [i_19] [i_19 - 1] [i_19 + 3] [i_19 + 2]), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 7619074619047872970LL)) : (18446744073709551615ULL)))))));
        var_35 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 910372187U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((910372187U) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
        arr_59 [i_19] = ((/* implicit */unsigned long long int) 702235728);
    }
    var_36 = ((/* implicit */unsigned int) max((var_36), (910372198U)));
    var_37 = ((/* implicit */short) max((var_37), (var_13)));
    var_38 = min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (11688039397993214046ULL)))))), (var_9));
}
