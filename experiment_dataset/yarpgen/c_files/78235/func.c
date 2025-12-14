/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78235
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (signed char i_3 = 4; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 1839256088)) ? (6178078725194946391ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33)))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)0)), (arr_0 [i_3 + 3])))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_3 - 1]))))) : (max((var_5), (((/* implicit */long long int) (short)-2543))))));
                            var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [4U]))) : (0ULL)))) ? ((+(((/* implicit */int) (unsigned short)14984)))) : ((~(((/* implicit */int) (unsigned short)38058))))));
                            arr_9 [i_0] [(unsigned short)18] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */long long int) (-(((((/* implicit */int) (unsigned short)38058)) + (((/* implicit */int) arr_0 [i_1])))))))));
                        }
                    } 
                } 
                arr_10 [i_0] [18U] [i_0] = (unsigned short)15367;
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) ((var_2) + (((/* implicit */long long int) ((/* implicit */int) (signed char)53)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16)))))))));
    /* LoopNest 2 */
    for (long long int i_4 = 2; i_4 < 14; i_4 += 3) 
    {
        for (int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            {
                var_24 ^= ((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)511)))), ((~(min((((/* implicit */int) (unsigned char)33)), (var_18)))))));
                arr_16 [i_5] = var_16;
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        {
                            arr_22 [i_5] [i_5] = -1969522908;
                            arr_23 [i_4] [i_5] [i_5] [(unsigned char)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_18)))) ? (((unsigned long long int) ((unsigned short) var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((arr_7 [i_5]) ? (((/* implicit */int) arr_7 [i_5])) : (1969522907)))) + (((((/* implicit */_Bool) (signed char)-24)) ? (546813989U) : (1076370360U)))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (unsigned long long int i_8 = 2; i_8 < 15; i_8 += 2) 
                            {
                                var_26 = arr_0 [i_4];
                                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) var_10))));
                            }
                            for (unsigned short i_9 = 2; i_9 < 14; i_9 += 4) 
                            {
                                var_28 = ((/* implicit */unsigned char) arr_6 [i_5] [i_7] [(unsigned char)1]);
                                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned short)15367), (((/* implicit */unsigned short) (signed char)0))))) ? (((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) min(((unsigned short)0), ((unsigned short)41623)))) : (((/* implicit */int) (unsigned short)23913)))) : (((/* implicit */int) ((((/* implicit */int) arr_21 [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 1] [i_4])) < (((((/* implicit */int) var_16)) / (var_9))))))));
                                var_30 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned char)238)), (min((((/* implicit */unsigned long long int) (unsigned short)17569)), (18446744073709551599ULL)))));
                                var_31 = ((/* implicit */signed char) arr_13 [i_9]);
                            }
                            for (unsigned int i_10 = 0; i_10 < 16; i_10 += 4) 
                            {
                                var_32 &= ((/* implicit */unsigned char) min((7LL), (((/* implicit */long long int) (unsigned short)24014))));
                                var_33 = ((/* implicit */short) ((int) min((((/* implicit */int) max((var_1), ((_Bool)1)))), (((((/* implicit */_Bool) arr_20 [i_4] [i_5] [i_6] [i_10])) ? (((/* implicit */int) arr_2 [i_5])) : (((/* implicit */int) arr_18 [i_5])))))));
                            }
                            for (unsigned short i_11 = 0; i_11 < 16; i_11 += 3) 
                            {
                                var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) 7334392172655329039LL))));
                                var_35 = ((/* implicit */long long int) ((unsigned int) max((((unsigned int) arr_29 [i_11])), (((/* implicit */unsigned int) (unsigned short)4699)))));
                            }
                            var_36 |= (-((+(var_0))));
                        }
                    } 
                } 
                var_37 = ((((/* implicit */_Bool) min((((/* implicit */int) arr_30 [i_5] [i_4 + 2] [i_5] [i_4 + 2] [i_5])), (((((/* implicit */int) (_Bool)1)) >> (((4294967295U) - (4294967289U)))))))) ? (((/* implicit */unsigned long long int) (~(min((-459307111), (((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4 - 1] [i_4])) ? (min((var_6), (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) (-(var_18)))))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 16; i_13 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_20 [i_4] [i_4] [i_4 + 2] [i_4])), (arr_36 [i_12] [i_4])))) ? ((-(((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) arr_21 [i_4 - 1] [i_5] [i_5] [i_5] [i_12] [i_13])) ? (((/* implicit */int) var_10)) : (var_9)))))) ? (((((/* implicit */_Bool) var_10)) ? (arr_31 [i_4 - 2] [i_4 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_4 + 2] [i_4 - 1] [i_4]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) % (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned short)22897)) : (((/* implicit */int) arr_12 [i_4] [i_12]))))))))))));
                            var_39 = ((/* implicit */unsigned short) (signed char)56);
                            var_40 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_5])) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))) ? ((~((~(((/* implicit */int) arr_36 [i_4] [i_4])))))) : (((((/* implicit */_Bool) (unsigned short)4717)) ? (((/* implicit */int) arr_21 [i_4] [i_4] [i_4 - 1] [i_5] [i_4] [i_13])) : (((/* implicit */int) arr_36 [i_4] [i_4]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_14 = 0; i_14 < 11; i_14 += 3) 
    {
        for (unsigned short i_15 = 0; i_15 < 11; i_15 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 11; i_16 += 1) 
                {
                    for (unsigned short i_17 = 4; i_17 < 8; i_17 += 2) 
                    {
                        {
                            var_41 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) ((arr_18 [i_17]) ? (((/* implicit */unsigned long long int) var_11)) : (arr_47 [i_17] [i_15] [i_15] [i_15] [i_14])))))) ? (((/* implicit */unsigned long long int) ((((0U) >= (16777216U))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (arr_17 [i_17] [i_14])))) : (((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) min(((unsigned short)16315), (arr_45 [i_17 - 2] [i_17] [i_17] [i_14])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((arr_47 [i_14] [i_14] [i_14] [i_14] [i_14]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                            arr_48 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_10)))), (var_0)))) ? (((/* implicit */int) arr_21 [i_17] [i_16] [i_16] [i_16] [i_15] [i_14])) : (((/* implicit */int) min((arr_30 [i_14] [i_17 - 3] [i_17] [i_17 + 2] [i_14]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_47 [i_14] [i_14] [(short)0] [i_14] [i_14]))))))))));
                            var_42 = ((/* implicit */short) min((arr_17 [i_14] [i_15]), (var_3)));
                        }
                    } 
                } 
                var_43 = ((/* implicit */signed char) ((((min(((~(var_14))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)32477)), (var_19)))))) + (9223372036854775807LL))) << (((((/* implicit */int) var_8)) - (14)))));
                var_44 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */int) (unsigned short)50551)) : (((/* implicit */int) ((((/* implicit */int) arr_28 [1U] [i_14] [13ULL] [i_14] [i_15])) < (((/* implicit */int) (unsigned short)65535)))))))), (var_6)));
            }
        } 
    } 
}
