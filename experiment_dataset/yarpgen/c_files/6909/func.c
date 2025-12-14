/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6909
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_0 [i_0]))))));
        var_10 += ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0] [i_0])) + (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_11 |= ((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 2880210261991973374LL)) : (arr_0 [i_0]))));
    }
    var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (12879414678557847291ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_8)), ((unsigned char)242)))))))), (var_3)));
    /* LoopSeq 1 */
    for (signed char i_1 = 3; i_1 < 15; i_1 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_1]))))))), (0U)));
        /* LoopSeq 4 */
        for (int i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            arr_7 [(unsigned short)12] [(unsigned short)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((short)-13208), (((/* implicit */short) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1]))) : (max((((/* implicit */unsigned int) var_4)), (max((((/* implicit */unsigned int) (unsigned short)53345)), (258783122U)))))));
            var_14 &= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_2 + 1])) >> (((((/* implicit */int) arr_4 [i_2 - 1])) - (553)))))), (((arr_1 [i_1 - 3] [4U]) ? (((/* implicit */unsigned int) arr_5 [i_1 + 1] [i_1 - 1] [i_2 + 2])) : (max((((/* implicit */unsigned int) arr_6 [i_1] [i_2] [i_2 + 1])), (var_3)))))));
        }
        for (int i_3 = 1; i_3 < 16; i_3 += 1) 
        {
            arr_10 [(unsigned short)14] [i_3] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_1])) ? (((/* implicit */unsigned long long int) var_7)) : (arr_0 [i_3 + 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1])) >> (((arr_5 [i_1 + 1] [i_1 - 3] [i_1]) + (1236099349)))))) : (((((/* implicit */_Bool) 258783122U)) ? (((/* implicit */unsigned int) -13)) : (var_3))))), (((/* implicit */unsigned int) max((((arr_0 [i_1]) >= (((/* implicit */unsigned long long int) 4036184199U)))), (max(((_Bool)1), ((_Bool)1))))))));
            var_15 ^= ((((/* implicit */unsigned long long int) 0LL)) + (max((((/* implicit */unsigned long long int) ((var_3) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244)))))), (((4182965328384197583ULL) & (((/* implicit */unsigned long long int) arr_3 [i_3])))))));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 1; i_4 < 17; i_4 += 4) 
            {
                var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)34)) << (((((/* implicit */int) arr_12 [i_1] [i_3 + 1] [i_3 + 1] [i_1])) - (119)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_6 [0U] [i_3] [0U])))) : ((-(4036184174U)))))) ? (max((arr_11 [9U] [i_4 + 1] [i_1 - 3]), (((/* implicit */unsigned long long int) arr_1 [i_4 + 1] [i_1 + 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((((_Bool)1) && (((/* implicit */_Bool) arr_5 [i_1] [i_3] [i_4])))), (max((var_1), (var_1)))))))));
                arr_13 [i_3] [i_4] = ((/* implicit */unsigned long long int) (+(var_6)));
            }
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                arr_16 [i_3] [i_3 + 1] [i_5] [i_5] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_12 [i_1] [i_3] [i_1] [i_5]), (((/* implicit */signed char) arr_1 [i_1] [i_3])))))))), (((((/* implicit */_Bool) -1011730103)) ? (((((/* implicit */unsigned int) -13)) & (0U))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (2872889862U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)141)))))))));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((max((((/* implicit */unsigned int) var_6)), (max((((/* implicit */unsigned int) (short)-30771)), (1923790758U))))) << (((((int) arr_0 [i_1 + 2])) + (293318248))))))));
                            arr_23 [(unsigned short)17] [i_3] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_15 [i_3 - 1]);
                        }
                    } 
                } 
                var_18 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [(unsigned short)4] [i_3 + 1] [i_3])) & (((/* implicit */int) arr_17 [i_1 + 1] [i_1 + 1] [i_1] [(unsigned char)0] [i_3 - 1] [(unsigned char)0])))))));
            }
        }
        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_1 + 3] [i_1] [(_Bool)0])) | (((/* implicit */int) arr_6 [i_1 - 3] [i_1 - 1] [i_1 + 3]))))) - (((arr_26 [i_1 + 1] [i_8] [i_1 + 1]) & (arr_26 [i_1] [i_1] [i_1 + 3])))));
            /* LoopSeq 1 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), ((~(max((max((var_3), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_24 [(unsigned short)10] [(signed char)2] [(signed char)2])))))))))));
                var_21 -= ((/* implicit */long long int) var_9);
                arr_31 [(unsigned short)8] [(_Bool)1] = ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
            }
            /* LoopSeq 1 */
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_12 [i_1 + 1] [(_Bool)1] [i_10 + 1] [i_10])) - (((/* implicit */int) arr_12 [i_1 - 1] [(_Bool)1] [i_10 + 1] [i_10 + 1])))) <= (((/* implicit */int) arr_12 [i_1 - 3] [i_1 - 3] [i_10 + 1] [i_10]))));
                var_23 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_10] [(unsigned char)13] [i_1]))))) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_8] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (766184767743921423LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 258783122U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (0U)))))) - (((/* implicit */long long int) (-((~(arr_32 [i_1] [i_1] [i_1]))))))));
            }
        }
        for (unsigned long long int i_11 = 1; i_11 < 16; i_11 += 2) 
        {
            var_24 = ((/* implicit */short) arr_30 [i_1] [i_1 + 1] [i_11] [i_11 + 2]);
            var_25 = ((/* implicit */unsigned short) max((((/* implicit */int) max((arr_35 [i_11 - 1] [i_11 + 2]), (arr_35 [i_11 - 1] [i_11 + 2])))), (((((/* implicit */int) arr_35 [i_11 - 1] [i_11 + 2])) & (((/* implicit */int) arr_35 [i_11 - 1] [i_11 + 2]))))));
        }
    }
    /* LoopSeq 4 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_3 [i_12]), (arr_3 [i_12])))))))));
        arr_40 [i_12] |= ((/* implicit */short) max((max((18446744073709551595ULL), (((/* implicit */unsigned long long int) 4036184174U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_33 [i_12] [i_12])), (arr_18 [4] [4] [8U] [4LL])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (var_5)))) : (((/* implicit */int) arr_22 [(unsigned short)2])))))));
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)47187)) ? (0) : (-381571346))))));
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_12] [i_12])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_29 [(short)1] [i_12] [i_12])))) : (((var_7) >> (((var_7) - (7735327508745920134LL))))))) : (((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(unsigned short)14] [6U]))) | (var_3))), (((/* implicit */unsigned int) (_Bool)1)))))));
        arr_41 [i_12] [i_12] = ((/* implicit */_Bool) (unsigned short)58596);
    }
    for (unsigned short i_13 = 0; i_13 < 13; i_13 += 2) 
    {
        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) -1206718952))));
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 4) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    var_30 = ((/* implicit */signed char) (unsigned short)29052);
                    var_31 = ((/* implicit */short) (signed char)-53);
                    var_32 = max((max((((/* implicit */unsigned long long int) (unsigned char)170)), (17820301388790632877ULL))), (((/* implicit */unsigned long long int) var_2)));
                    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_18 [i_13] [i_13] [i_13] [i_15])))) ? (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) <= (22ULL))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1841763000)) ? (var_7) : (-1LL))))))) : ((-(var_6)))));
                }
            } 
        } 
    }
    for (unsigned short i_16 = 0; i_16 < 13; i_16 += 2) 
    {
        var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1023))) : (2807198269U))))));
        var_35 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_33 [i_16] [(signed char)15])) : (((/* implicit */int) var_2))))) ? (max((((/* implicit */int) arr_36 [i_16])), (arr_38 [(short)12]))) : (((/* implicit */int) arr_49 [i_16] [i_16]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_16]))) : ((-(arr_26 [i_16] [i_16] [(unsigned short)7])))));
        var_36 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_32 [i_16] [(signed char)12] [i_16])), ((-(((1487769036U) & (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
    }
    for (unsigned char i_17 = 0; i_17 < 14; i_17 += 2) 
    {
        var_37 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_19 [i_17] [i_17] [i_17])) ? (((/* implicit */long long int) ((arr_29 [i_17] [i_17] [i_17]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) : (max((var_0), (((/* implicit */long long int) var_5)))))) << (((((11ULL) ^ (((/* implicit */unsigned long long int) ((1841763012) + (((/* implicit */int) (short)(-32767 - 1)))))))) - (1841730245ULL)))));
        var_38 |= ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 1659459515613445319LL)) && (((/* implicit */_Bool) 2113670104958256516ULL))))) << (((((((/* implicit */_Bool) 13LL)) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) (unsigned char)212)))) - (205)))))) + (((((/* implicit */_Bool) arr_8 [i_17] [i_17] [i_17])) ? (max((((/* implicit */long long int) var_6)), (-18LL))) : (((/* implicit */long long int) ((/* implicit */int) ((var_0) >= (((/* implicit */long long int) var_5)))))))));
    }
    var_39 = ((/* implicit */unsigned char) var_9);
}
