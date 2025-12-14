/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77238
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
    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) >= (3788595200U)))) : (((/* implicit */int) ((((/* implicit */long long int) arr_0 [3U])) == ((-9223372036854775807LL - 1LL)))))));
        var_15 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_1 [i_0] [12ULL]))))));
        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 732244602))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        arr_10 [(_Bool)1] [(_Bool)1] [i_1] [i_0] = ((/* implicit */int) arr_8 [i_3 - 1] [i_1] [i_2] [i_0 + 2] [(signed char)12]);
                        arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0 + 2])) != ((-(-732244602)))));
                    }
                    arr_12 [(unsigned short)17] [i_1] [i_2] = ((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 - 1] [i_0 - 2]);
                    arr_13 [i_2] = ((/* implicit */unsigned short) -732244602);
                    var_17 |= ((/* implicit */int) arr_7 [(unsigned char)15] [i_0 - 1] [i_0 - 1]);
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [5LL]);
    }
    for (unsigned char i_4 = 2; i_4 < 15; i_4 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) (_Bool)1)), (arr_9 [(unsigned short)3] [17LL] [i_4] [i_4] [i_4] [(unsigned short)3]))), (((/* implicit */unsigned int) (~(-732244602))))));
        var_19 -= ((/* implicit */long long int) max((min((max((((/* implicit */unsigned long long int) arr_8 [i_4] [i_4] [i_4] [i_4] [i_4])), (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [9ULL])) ? (-732244602) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) ((7838323826239567131ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)155)))))))))));
    }
    for (unsigned short i_5 = 2; i_5 < 9; i_5 += 2) 
    {
        var_20 ^= ((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)13)))) <= (((/* implicit */int) var_5))))) > (((((/* implicit */_Bool) 2034636375051706800ULL)) ? (((/* implicit */int) (unsigned short)19)) : (((/* implicit */int) arr_17 [i_5 - 1])))));
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned short i_7 = 1; i_7 < 9; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    {
                        arr_28 [i_5] [i_6] [i_7] [i_6] [i_8] [i_8] = ((/* implicit */unsigned int) ((unsigned char) (_Bool)1));
                        arr_29 [i_7] = ((/* implicit */unsigned int) max((arr_24 [i_5]), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)30)) & (((/* implicit */int) (short)10253))))))))));
                    }
                } 
            } 
        } 
        arr_30 [i_5] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(1218758865)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)187)) == (((/* implicit */int) var_2))))) : (((/* implicit */int) var_5)))) << (((((/* implicit */int) min((max((arr_22 [i_5] [i_5] [i_5] [i_5]), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) max((arr_17 [i_5]), (((/* implicit */short) arr_15 [i_5])))))))) - (8863)))));
        var_21 = ((/* implicit */unsigned int) min((((((/* implicit */int) ((unsigned char) arr_27 [i_5]))) << ((((+(((/* implicit */int) var_2)))) - (20368))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_5] [i_5] [i_5] [i_5] [i_5 + 1] [i_5])))))));
    }
    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 3) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_9] [i_9] [i_9] [10U] [(unsigned short)12] [i_9]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_9] [i_9]))))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) & (var_7)))));
        /* LoopSeq 2 */
        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            arr_35 [i_9] [i_10] [(unsigned short)3] = ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_9] [i_9] [(_Bool)1]))) == (min((20ULL), (((/* implicit */unsigned long long int) (unsigned char)170))))))));
            /* LoopSeq 2 */
            for (signed char i_11 = 2; i_11 < 15; i_11 += 2) 
            {
                arr_39 [i_11] [i_10] [i_9] = ((/* implicit */unsigned int) ((_Bool) ((unsigned short) arr_15 [i_9])));
                /* LoopSeq 3 */
                for (short i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_13 = 0; i_13 < 18; i_13 += 1) 
                    {
                        arr_46 [i_10] [i_10] [i_12] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (4294967295U)));
                        var_23 = ((/* implicit */unsigned short) (unsigned char)0);
                    }
                    for (unsigned int i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        var_24 *= ((/* implicit */unsigned char) (_Bool)1);
                        arr_50 [i_12] [i_9] = ((/* implicit */int) var_7);
                    }
                    arr_51 [i_12] [i_11] [i_10] [16U] = ((/* implicit */short) ((arr_6 [i_11 - 2] [i_11 + 2] [i_11 - 2]) <= (((/* implicit */long long int) (~(-732244602))))));
                }
                for (short i_15 = 0; i_15 < 18; i_15 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                    arr_56 [(unsigned short)3] [(unsigned short)3] [i_10] [i_9] = ((/* implicit */_Bool) (unsigned char)250);
                    arr_57 [i_9] = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_9] [i_9] [i_9] [i_9] [i_9])) / (((((/* implicit */_Bool) 496730917)) ? (((/* implicit */int) (unsigned short)37699)) : (((/* implicit */int) arr_40 [(_Bool)1] [i_10] [i_11] [i_15]))))));
                }
                for (signed char i_16 = 2; i_16 < 16; i_16 += 4) 
                {
                    var_26 = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */int) arr_40 [5] [0U] [i_11] [0])), ((-(((/* implicit */int) arr_40 [i_9] [i_10] [i_10] [i_16])))))));
                    arr_61 [(_Bool)1] [(_Bool)1] [i_11] [i_16] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) min(((unsigned char)83), (((/* implicit */unsigned char) arr_43 [i_9] [4U] [i_10] [i_10] [i_10] [i_11] [i_16]))))))))));
                    arr_62 [i_9] [i_9] [i_11] [i_16] = max((max((min((((/* implicit */unsigned int) (_Bool)1)), (arr_3 [i_11] [i_10]))), (((/* implicit */unsigned int) ((int) arr_9 [i_16] [(unsigned short)15] [(unsigned char)7] [i_16] [(unsigned short)15] [(unsigned short)15]))))), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_7 [i_9] [i_10] [i_16])) << (((((/* implicit */int) arr_7 [i_9] [(unsigned short)7] [i_11])) - (4381))))) & ((-(((/* implicit */int) var_11))))))));
                    var_27 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((arr_42 [i_16] [i_16 + 1] [i_11 + 2] [i_9] [i_9]), (((/* implicit */unsigned short) (short)10253))))), (((((/* implicit */_Bool) arr_42 [i_16] [i_16 + 1] [i_11 + 3] [i_11] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [(unsigned short)7] [i_16 + 2] [i_11 + 1] [8] [i_11]))) : (16412107698657844816ULL)))));
                    var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)21))) > (2034636375051706800ULL)));
                }
                arr_63 [i_9] [i_9] = ((unsigned char) var_9);
            }
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
            {
                arr_66 [17ULL] [12U] [12U] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (-1177900550)))) ? (((((/* implicit */_Bool) 1297370167U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2034636375051706799ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                var_29 ^= ((/* implicit */int) var_0);
            }
        }
        for (unsigned char i_18 = 0; i_18 < 18; i_18 += 2) 
        {
            arr_70 [i_18] = ((/* implicit */_Bool) var_10);
            /* LoopNest 2 */
            for (unsigned int i_19 = 0; i_19 < 18; i_19 += 2) 
            {
                for (int i_20 = 1; i_20 < 17; i_20 += 4) 
                {
                    {
                        var_30 = ((/* implicit */_Bool) arr_58 [i_9] [i_18] [(signed char)16] [i_18] [i_19]);
                        var_31 -= ((/* implicit */unsigned long long int) (((!((!(var_3))))) ? (((((/* implicit */_Bool) -254798298)) ? ((~(var_6))) : (((((/* implicit */_Bool) (short)-11)) ? (((/* implicit */int) arr_4 [i_9] [i_18])) : (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) arr_41 [i_20] [(_Bool)1] [i_18] [(_Bool)1] [i_9]))));
                        var_32 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) 0)) != (1297370152U))) ? (((/* implicit */int) ((unsigned short) arr_36 [i_9] [i_18] [i_20 - 1]))) : ((~(((/* implicit */int) (unsigned char)0))))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (short i_21 = 2; i_21 < 15; i_21 += 2) 
        {
            var_33 *= ((/* implicit */unsigned long long int) arr_15 [i_9]);
            arr_78 [i_9] [i_21] = ((/* implicit */unsigned long long int) ((signed char) (~(max((20ULL), (var_7))))));
        }
    }
}
