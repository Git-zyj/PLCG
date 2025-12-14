/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63801
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
    for (int i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0 - 1] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            /* LoopSeq 4 */
            for (signed char i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                arr_7 [(unsigned char)22] [i_0] [i_2 + 1] = ((/* implicit */short) ((var_6) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0])))));
                arr_8 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -2147483624)) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2147483624)) ? (((/* implicit */int) (unsigned short)63236)) : (((/* implicit */int) var_0)))))));
            }
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) 3787081793U)) : (var_2));
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
            }
            for (long long int i_4 = 1; i_4 < 20; i_4 += 4) 
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_4 - 1])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)79))) > (var_11)))) : (((/* implicit */int) var_3))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3787081793U)) ? (((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) var_6))));
            }
            for (unsigned char i_5 = 2; i_5 < 21; i_5 += 2) 
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_5 + 2] [i_0 - 2] [i_0])) << ((((((-2147483647 - 1)) - (-2147483645))) + (3)))));
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */int) (short)0)) >= (((/* implicit */int) arr_12 [i_5 + 2] [i_0 + 1] [i_5])))))));
            }
            arr_15 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 2] [i_0])) ? (1085194406U) : (((/* implicit */unsigned int) arr_2 [i_0 + 1] [i_0 + 3]))));
            arr_16 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (((((-2147483647 - 1)) >= (((/* implicit */int) var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) : (var_2)));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                for (unsigned char i_8 = 2; i_8 < 23; i_8 += 3) 
                {
                    {
                        var_24 &= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) 1093555237)) > (var_1))) ? (((((/* implicit */int) var_0)) | (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_6 [(unsigned short)15] [i_0 - 1] [i_8 - 2]))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [22ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (var_16)))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_6] [i_0])) ? (((/* implicit */int) arr_6 [(_Bool)1] [i_6] [i_6])) : (((/* implicit */int) (unsigned char)196)))) : (((/* implicit */int) var_9))));
                        arr_25 [i_0 + 3] [i_0 + 3] [i_0] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
                    }
                } 
            } 
            var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) 1093555239)) : (var_5)))) ? (((((/* implicit */_Bool) arr_4 [i_6] [i_6] [i_0])) ? (((/* implicit */int) (short)-27853)) : (-1093555238))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_0])) : (-1093555226))));
            /* LoopSeq 2 */
            for (unsigned char i_9 = 4; i_9 < 22; i_9 += 4) 
            {
                arr_29 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)31744)))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_2) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) 1093555238)));
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-18)) ? ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_9])) : (((/* implicit */int) (unsigned short)63238)))) : (((/* implicit */int) (short)-20903)))))));
            }
            for (signed char i_10 = 3; i_10 < 22; i_10 += 3) 
            {
                arr_32 [i_10 - 3] [i_0] [i_10] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_10] [i_10])) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_0])) : (arr_2 [13LL] [13LL]))) : (((/* implicit */int) ((var_14) > (((/* implicit */long long int) 1422909846U)))))));
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) (short)31760)) : (arr_2 [i_0 + 2] [i_10 + 2])));
            }
            arr_33 [i_0 - 3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3787081800U)) ? (((/* implicit */int) (short)-22014)) : (((/* implicit */int) var_8))))) ? (arr_20 [i_0] [i_6] [i_0 + 3] [i_6]) : (((/* implicit */unsigned long long int) var_14))));
            arr_34 [i_0 + 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_0] [i_0 + 1])) ? (arr_0 [i_6] [1ULL]) : (((/* implicit */long long int) 3787081793U))))) ? ((((_Bool)1) ? (var_14) : (((/* implicit */long long int) arr_2 [i_0] [(signed char)20])))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0])))));
        }
        var_29 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) | (var_1)))) ? (((((((/* implicit */int) var_13)) + (2147483647))) << (((((/* implicit */int) arr_27 [i_0] [i_0] [i_0])) - (4277))))) : (((/* implicit */int) arr_27 [i_0] [i_0 + 1] [i_0]))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) | (var_1)))) ? (((((((/* implicit */int) var_13)) + (2147483647))) << (((((((((/* implicit */int) arr_27 [i_0] [i_0] [i_0])) - (4277))) + (1495))) - (10))))) : (((/* implicit */int) arr_27 [i_0] [i_0 + 1] [i_0])))));
        /* LoopSeq 1 */
        for (long long int i_11 = 2; i_11 < 20; i_11 += 1) 
        {
            arr_38 [i_11] [i_11] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (4294967295U) : (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */int) arr_14 [i_0] [(signed char)18] [i_11 + 4] [i_0])) : (((((/* implicit */int) arr_3 [i_0])) >> (((((/* implicit */int) (short)-23241)) + (23264)))))));
            var_30 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -15LL)) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_11 + 2])) : (((/* implicit */int) var_12))))) : (((var_0) ? (2618389334U) : (var_11)))));
        }
        arr_39 [i_0] [4ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_0] [i_0] [(unsigned short)5])) >> (((((/* implicit */int) var_9)) + (122)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_13 [i_0 + 1] [i_0 - 3] [i_0]))))));
    }
    /* vectorizable */
    for (signed char i_12 = 0; i_12 < 18; i_12 += 1) 
    {
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) + (((/* implicit */int) arr_19 [i_12] [i_12]))))) - (((((/* implicit */_Bool) (unsigned short)8064)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42859))) : (arr_9 [(signed char)20] [i_12])))));
        arr_43 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_12] [i_12] [i_12])) ? (-161109348) : (((/* implicit */int) (unsigned short)2299))));
    }
    for (signed char i_13 = 0; i_13 < 21; i_13 += 1) 
    {
        var_32 = min((((/* implicit */long long int) min((2618389334U), (((/* implicit */unsigned int) var_10))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) -1075625188)) : (arr_26 [i_13]))));
        arr_46 [i_13] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) : (var_2)))) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_22 [i_13])) : (((/* implicit */int) (signed char)127)))) : (((((/* implicit */int) (unsigned short)59190)) ^ (((/* implicit */int) var_12))))));
    }
    /* vectorizable */
    for (short i_14 = 0; i_14 < 25; i_14 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_52 [i_14] [i_15] [(unsigned char)22])) : (((/* implicit */int) arr_52 [i_15] [i_15] [i_14]))));
            var_34 = ((/* implicit */_Bool) max((var_34), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (arr_51 [i_14] [i_14] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) != (((((/* implicit */_Bool) arr_48 [i_14] [i_14])) ? (arr_47 [i_14]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245)))))))));
        }
        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_5)) : (var_4)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (unsigned short)39970)) ? (var_7) : (((/* implicit */int) (signed char)-121))))));
    }
    var_36 = ((/* implicit */int) min((((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (1093555230)))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_6)), (var_9))))))))));
    /* LoopNest 3 */
    for (unsigned short i_16 = 2; i_16 < 17; i_16 += 4) 
    {
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (short i_18 = 3; i_18 < 15; i_18 += 3) 
            {
                {
                    arr_62 [i_16 - 1] [i_16 - 1] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_16 - 1] [i_16 - 2] [i_18 + 3])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_15)), (arr_31 [i_18] [i_17] [5U] [i_16])))) ? (((/* implicit */int) min(((unsigned char)94), (((/* implicit */unsigned char) (signed char)-124))))) : (((((/* implicit */int) arr_41 [i_16])) << (((((/* implicit */int) (unsigned char)32)) - (16)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9028575944468416616LL)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (signed char)88)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_18 - 1] [i_16 + 1] [i_16 - 2]))) : (var_14)))));
                    var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6423479338354293838ULL)) ? (((/* implicit */unsigned long long int) arr_58 [i_18 + 2] [i_16 - 1])) : (min((arr_20 [i_18 - 3] [i_17] [i_16] [i_16]), (((/* implicit */unsigned long long int) var_7))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((161109347), (((/* implicit */int) (unsigned char)32))))) ? (((((/* implicit */_Bool) arr_1 [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))) : (arr_58 [i_16] [i_17]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-21841))) * (arr_18 [15U])))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) var_7)) / (arr_37 [i_16] [i_18])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) / (arr_2 [i_16] [19])))) : (var_1)))));
                }
            } 
        } 
    } 
    var_38 = ((/* implicit */unsigned short) min((min((((((/* implicit */long long int) ((/* implicit */int) var_10))) + (var_14))), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) min((((((/* implicit */_Bool) 161109347)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2299))) : (1676577977U))), (((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
}
