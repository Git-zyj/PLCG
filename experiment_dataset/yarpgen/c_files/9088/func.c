/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9088
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_0))) >> (((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-75)) % (((/* implicit */int) (short)2437))))) ? (((((/* implicit */int) (signed char)-75)) / (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) 34359738367ULL)) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) (unsigned short)50557)))))) + (37)))));
    var_13 = ((/* implicit */int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) 1068857774))))))) == (var_11)));
    var_14 = ((/* implicit */short) var_10);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_15 *= ((/* implicit */signed char) ((((/* implicit */long long int) (((+(((/* implicit */int) (signed char)19)))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))) > (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) != (arr_0 [i_0] [i_0]))))) % (arr_0 [i_0] [i_0])))));
        var_16 = ((/* implicit */int) var_9);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) min((((/* implicit */signed char) arr_4 [i_1 - 1])), ((signed char)-109)))), (15258194170439471097ULL)))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (signed char i_3 = 1; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_18 *= ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0))));
                        var_19 = ((/* implicit */_Bool) -8437204114222885288LL);
                    }
                } 
            } 
            var_20 = ((/* implicit */signed char) (((((~(((/* implicit */int) arr_8 [i_1] [i_1] [i_1 - 2] [i_1 + 4] [i_1 + 4])))) + (2147483647))) << ((((+(34359738367ULL))) - (34359738367ULL)))));
            var_21 = ((/* implicit */unsigned int) arr_3 [i_0] [i_1]);
        }
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_22 ^= ((/* implicit */unsigned char) var_11);
            var_23 = ((/* implicit */signed char) 15258194170439471093ULL);
            var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) (unsigned char)71)))))));
        }
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_4])) || (((((/* implicit */_Bool) (signed char)-109)) || (((/* implicit */_Bool) (unsigned char)96)))))))));
        /* LoopSeq 2 */
        for (signed char i_6 = 1; i_6 < 15; i_6 += 1) 
        {
            var_26 &= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) < (arr_7 [i_6 - 1] [i_6 + 2] [i_6 + 3]));
            var_27 = ((/* implicit */short) ((((/* implicit */unsigned long long int) -8636791680284976120LL)) ^ (((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_8)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                var_28 = (+(((/* implicit */int) arr_19 [i_6 + 3] [i_6 - 1])));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */short) (-(17647341484188721288ULL)));
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (unsigned short)6144))));
                            var_31 = ((/* implicit */unsigned short) arr_8 [(signed char)2] [i_6] [i_7] [i_8] [i_9]);
                        }
                    } 
                } 
            }
            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (arr_20 [i_6] [(signed char)14] [(unsigned char)14]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
        }
        for (signed char i_10 = 0; i_10 < 18; i_10 += 2) 
        {
            var_33 = ((/* implicit */signed char) (!((_Bool)0)));
            var_34 = ((/* implicit */int) (_Bool)1);
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 3) 
            {
                var_35 ^= ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (((unsigned int) arr_17 [i_4] [i_4] [i_4])));
                var_36 = ((/* implicit */_Bool) ((var_8) << ((((((~(9223372036854775807LL))) - (-9223372036854775766LL))) + (83LL)))));
                var_37 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)160))));
                /* LoopSeq 1 */
                for (signed char i_12 = 1; i_12 < 15; i_12 += 2) 
                {
                    /* LoopSeq 3 */
                    for (int i_13 = 2; i_13 < 16; i_13 += 1) 
                    {
                        var_38 = ((/* implicit */_Bool) (unsigned short)59388);
                        var_39 = ((/* implicit */signed char) (~(7)));
                    }
                    for (short i_14 = 3; i_14 < 16; i_14 += 2) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned char) (signed char)-90);
                        var_41 = ((/* implicit */signed char) 18446744073709551596ULL);
                    }
                    for (short i_15 = 3; i_15 < 16; i_15 += 2) /* same iter space */
                    {
                        var_42 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_7 [i_4] [i_4] [i_4]) * (arr_12 [i_10])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [10LL] [i_12] [i_15 - 3])) ? (((/* implicit */unsigned long long int) 619304160U)) : (arr_22 [(_Bool)1] [i_10] [i_11] [i_12]))))));
                        var_43 = ((/* implicit */_Bool) arr_10 [i_15 - 3] [i_15 - 3]);
                    }
                    var_44 = ((/* implicit */int) (unsigned char)106);
                    var_45 = ((/* implicit */signed char) 13834005777182653145ULL);
                    var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_11))) ? (((/* implicit */int) arr_37 [i_4] [i_11] [(_Bool)1] [(_Bool)1] [i_4])) : (((/* implicit */int) var_1))));
                }
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 18; i_16 += 1) 
                {
                    for (long long int i_17 = 0; i_17 < 18; i_17 += 4) 
                    {
                        {
                            var_47 = ((/* implicit */int) (signed char)-1);
                            var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_16] [i_11] [i_10])) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_24 [i_17] [i_16] [i_4] [i_4] [i_4]))));
                        }
                    } 
                } 
            }
            var_49 &= ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-124)) + (2147483647))) << (((((/* implicit */int) (signed char)15)) - (15)))));
        }
    }
}
