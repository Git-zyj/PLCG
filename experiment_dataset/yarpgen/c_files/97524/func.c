/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97524
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
    var_19 |= max((((((/* implicit */_Bool) var_3)) ? (((unsigned int) var_5)) : (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) (unsigned char)53)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_21 &= ((/* implicit */signed char) (!((_Bool)1)));
                                var_22 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39291))) : (-1899671736240444444LL)));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)18))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [5LL] [i_2] [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39291))) : (((((/* implicit */_Bool) arr_11 [i_0] [(_Bool)1] [(_Bool)1] [i_2] [7] [i_2])) ? (arr_5 [8ULL] [i_1] [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_1])))))));
                    var_25 = ((/* implicit */_Bool) 8192LL);
                    var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2] [i_2])) ? (arr_5 [i_0] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_12)))) : (arr_0 [i_0])));
                    var_27 = ((/* implicit */unsigned long long int) var_14);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                {
                    var_28 = ((/* implicit */short) ((arr_15 [i_0] [i_5] [i_0]) * (arr_15 [i_0] [i_5] [i_6])));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 18; i_8 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) var_18);
                                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)202)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_24 [i_0] = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 20; i_10 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned int) ((6873444112601875416ULL) % (((/* implicit */unsigned long long int) 507904))));
                                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11573299961107676200ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))));
                            }
                        } 
                    } 
                    arr_34 [i_10] [i_9] [i_0] [i_0] = ((/* implicit */unsigned int) 1899671736240444437LL);
                    /* LoopSeq 3 */
                    for (unsigned int i_13 = 1; i_13 < 16; i_13 += 4) /* same iter space */
                    {
                        var_33 ^= ((/* implicit */signed char) arr_38 [i_13 + 2] [i_13 + 2] [i_13 + 4] [i_13 + 1]);
                        var_34 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_38 [i_0] [i_0] [i_10] [i_13 + 3])) >> (((/* implicit */int) arr_38 [i_0] [i_9] [i_9] [i_13 + 4]))));
                        arr_39 [i_0] [13U] [13U] [i_13] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)255))));
                    }
                    for (unsigned int i_14 = 1; i_14 < 16; i_14 += 4) /* same iter space */
                    {
                        var_35 = ((/* implicit */signed char) ((((/* implicit */long long int) (~(var_5)))) - (((((/* implicit */_Bool) 1899671736240444430LL)) ? (8974475484198492674LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_36 += ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_9] [i_14 + 4])) || (((/* implicit */_Bool) -871185490124694004LL)))))));
                        var_37 = ((/* implicit */short) ((((/* implicit */int) arr_38 [i_0] [i_9] [i_10] [i_14 + 1])) & (((/* implicit */int) var_11))));
                    }
                    for (unsigned int i_15 = 1; i_15 < 16; i_15 += 4) /* same iter space */
                    {
                        arr_46 [i_15] [i_10] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_15 + 2])) ? (((/* implicit */int) arr_1 [i_15 - 1])) : (((/* implicit */int) arr_1 [i_15 + 3]))));
                        var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [(signed char)6]))));
                        arr_47 [(_Bool)1] [(_Bool)1] [i_10] [i_15] = ((/* implicit */short) ((((/* implicit */int) ((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248)))))) == (((/* implicit */int) (signed char)-64))));
                        var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((((/* implicit */int) arr_31 [3LL] [i_10] [i_15 + 4] [i_15 + 1] [i_15 + 3])) << (((((/* implicit */int) arr_11 [i_0] [i_9] [13LL] [i_9] [(_Bool)1] [13LL])) + (27285))))))));
                        arr_48 [i_0] [i_9] [i_10] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_9] [i_15] [i_15 + 2] [(short)17] [i_15 + 4] [i_15])) | (((/* implicit */int) arr_18 [i_0] [i_0] [i_15 + 1] [i_15] [i_15 + 3] [(unsigned char)9]))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_16 = 0; i_16 < 20; i_16 += 2) /* same iter space */
    {
        arr_52 [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= (arr_12 [i_16] [i_16] [i_16])));
        arr_53 [i_16] = ((/* implicit */_Bool) arr_11 [i_16] [11LL] [i_16] [i_16] [i_16] [12LL]);
    }
    for (short i_17 = 0; i_17 < 20; i_17 += 2) /* same iter space */
    {
        var_40 = ((/* implicit */_Bool) (-(max((arr_7 [i_17] [i_17] [i_17] [i_17]), (((/* implicit */long long int) var_12))))));
        var_41 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_17] [i_17])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_17])))))) <= (max((((/* implicit */unsigned long long int) arr_19 [(_Bool)1] [i_17] [(unsigned char)3] [i_17] [i_17] [i_17])), (((((/* implicit */_Bool) (short)192)) ? (((/* implicit */unsigned long long int) 3387997502U)) : (3402761454057184516ULL)))))));
        var_42 -= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_17]))))) % (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)6114))))));
        /* LoopNest 3 */
        for (signed char i_18 = 2; i_18 < 19; i_18 += 1) 
        {
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (signed char i_20 = 0; i_20 < 20; i_20 += 4) 
                {
                    {
                        arr_65 [i_17] [i_17] [i_18] [i_17] [i_20] = ((/* implicit */_Bool) max((((/* implicit */long long int) 2476666725U)), (8783655908407040764LL)));
                        var_43 = ((/* implicit */unsigned int) arr_7 [i_17] [i_18 + 1] [i_19] [i_19]);
                    }
                } 
            } 
        } 
        var_44 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) ((15714520937432208831ULL) > (((/* implicit */unsigned long long int) 4294967295U)))))));
    }
    var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_14))))) : ((~(((((/* implicit */_Bool) 11573299961107676200ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL)))))));
}
