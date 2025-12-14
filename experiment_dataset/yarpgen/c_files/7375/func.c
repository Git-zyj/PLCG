/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7375
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */short) (-(arr_5 [i_0])));
            var_14 = ((/* implicit */short) ((max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)57755)) : (((/* implicit */int) arr_2 [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0])))))) + (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_4 [i_0] [i_0] [i_0]) : ((~(((/* implicit */int) arr_1 [i_0]))))))));
            var_15 = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) arr_2 [i_0])))), ((!(((((/* implicit */unsigned long long int) arr_0 [(signed char)9] [i_0])) < (4868585373209862275ULL)))))));
            /* LoopSeq 2 */
            for (int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                var_16 = ((/* implicit */_Bool) 8350995381285047184ULL);
                var_17 = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_0]))))), (((arr_3 [i_0]) >> (((arr_8 [i_0] [i_0]) - (1287707946)))))))))) : (((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_0]))))), (((arr_3 [i_0]) >> (((((arr_8 [i_0] [i_0]) + (1287707946))) + (96515031))))))))));
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((4868585373209862275ULL) << (((4868585373209862275ULL) - (4868585373209862225ULL))))) % (((/* implicit */unsigned long long int) (+(arr_4 [i_0] [i_0] [i_0]))))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        {
                            arr_19 [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) * (((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_5 [i_0]) : (arr_18 [i_0] [i_1] [i_3] [i_4] [i_0])))))));
                            arr_20 [i_0] [i_0] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) 13578158700499689341ULL)) ? ((+(3960544586U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-12202)))));
                        }
                    } 
                } 
                arr_21 [i_3] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-45)) ? (13578158700499689351ULL) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) 3960544605U)) ? (334422711U) : (3960544586U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2872)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3096))) : (3960544600U)));
                var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_2 [i_0])), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_7 [i_0])), (arr_17 [i_0] [i_0] [i_0] [i_1] [i_3] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (3960544586U)))));
            }
        }
        arr_22 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (short)-12202)), (13578158700499689324ULL)));
        var_19 = arr_13 [i_0] [i_0] [i_0] [4U] [i_0];
        var_20 = ((/* implicit */signed char) ((arr_3 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-12202)))));
    }
    for (long long int i_6 = 1; i_6 < 18; i_6 += 1) 
    {
        arr_25 [(short)12] [i_6] = 925496145U;
        var_21 = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_6 - 1] [i_6 - 1]))))));
        arr_26 [i_6] = max((max(((-(((/* implicit */int) arr_23 [(signed char)2])))), ((+(((/* implicit */int) arr_23 [i_6])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [1] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_6]))) : (3960544614U)))) ? (((/* implicit */int) max((var_1), (((/* implicit */short) arr_24 [i_6] [i_6]))))) : (((((/* implicit */int) arr_23 [i_6 - 1])) % (((/* implicit */int) arr_23 [i_6])))))));
    }
    /* LoopNest 3 */
    for (short i_7 = 3; i_7 < 16; i_7 += 2) 
    {
        for (short i_8 = 1; i_8 < 15; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4257)) ? (144115188075855872ULL) : (3988561656444967085ULL)));
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_11 = 0; i_11 < 17; i_11 += 2) 
                        {
                            arr_38 [(signed char)10] [i_7] = ((/* implicit */unsigned short) (~(((13578158700499689341ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_7] [i_8 - 1] [i_7] [(_Bool)1])))))));
                            var_23 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_7 + 1]))))) : (((/* implicit */int) max((arr_23 [i_8 + 2]), (arr_23 [i_10]))))));
                            var_24 = ((/* implicit */unsigned char) arr_28 [i_7] [i_7]);
                        }
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) & (((/* implicit */int) arr_34 [i_7]))))) ? (((/* implicit */int) (short)-4257)) : ((~(((/* implicit */int) arr_27 [i_7]))))));
                        var_26 = ((/* implicit */signed char) ((((((/* implicit */int) arr_30 [i_7])) / (((/* implicit */int) arr_24 [i_8 - 1] [i_7 - 1])))) % (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [(short)7] [i_8] [i_7] [i_8]))))), (((((/* implicit */_Bool) arr_32 [i_7])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-31270))))))));
                    }
                    var_27 = ((((/* implicit */int) var_5)) < (((/* implicit */int) min((min(((short)22303), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) ((var_4) == (144115188075855872ULL))))))));
                    var_28 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) + (641866354547114962ULL))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_7 - 3] [i_7 + 1] [i_7] [i_9])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_7] [i_7])))))) ? ((~(arr_35 [i_7] [i_8 + 2] [i_9] [i_7]))) : (min((((/* implicit */unsigned long long int) arr_36 [i_8] [i_8 + 1] [i_7])), (18302628885633695731ULL)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_12 = 2; i_12 < 6; i_12 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_13 = 0; i_13 < 10; i_13 += 4) 
        {
            arr_43 [i_12] [i_12] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -871156219)), (4868585373209862275ULL)))) ? (arr_5 [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)0), (((/* implicit */short) var_5)))))))) >> ((+(((/* implicit */int) ((((/* implicit */int) (short)-12199)) == (((/* implicit */int) var_2)))))))));
            var_29 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) arr_1 [i_13])), ((-(0U))))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_13] [i_12] [i_12 + 4] [i_12] [i_12])) / ((-(((/* implicit */int) arr_39 [7U])))))))));
        }
        /* LoopSeq 1 */
        for (signed char i_14 = 0; i_14 < 10; i_14 += 3) 
        {
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_40 [i_12 + 3]))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_12] [i_14] [i_14] [i_14] [i_14])) ? (arr_0 [i_12 + 2] [i_12]) : (((/* implicit */int) (short)6920))))), ((+(4294967295U))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_18 [6LL] [i_14] [6LL] [i_14] [i_12])) ? (((/* implicit */int) arr_28 [i_12] [i_12])) : (((/* implicit */int) (short)6928)))) / (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-12199)) : (((/* implicit */int) (signed char)-2)))))))));
            arr_46 [i_12 + 3] = ((/* implicit */short) 2892818235130320864ULL);
        }
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_12]))))), (var_13)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_4 [i_12] [i_12 - 2] [(signed char)2])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) : (arr_5 [i_12])))) : (((((/* implicit */_Bool) min((var_8), (var_0)))) ? (4868585373209862275ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-27326)) ? (((/* implicit */int) arr_27 [i_12])) : (((/* implicit */int) (short)-27326)))))))));
    }
    /* vectorizable */
    for (unsigned char i_15 = 2; i_15 < 6; i_15 += 4) /* same iter space */
    {
        var_32 = ((/* implicit */short) (+(15553925838579230751ULL)));
        var_33 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_27 [i_15])) ? (arr_35 [i_15] [i_15] [i_15] [i_15]) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))));
        arr_51 [i_15] = ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
        /* LoopSeq 1 */
        for (signed char i_16 = 0; i_16 < 10; i_16 += 1) 
        {
            var_34 = ((/* implicit */short) (+(((/* implicit */int) arr_37 [i_15] [i_16] [i_16] [i_15 + 3] [(unsigned short)16]))));
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_47 [i_16])) * ((-(((/* implicit */int) var_2))))));
            arr_54 [i_16] [i_16] = ((/* implicit */_Bool) (+(3932160U)));
            var_36 = ((/* implicit */unsigned int) arr_32 [i_15]);
        }
    }
    /* vectorizable */
    for (unsigned char i_17 = 2; i_17 < 6; i_17 += 4) /* same iter space */
    {
        var_37 = ((/* implicit */unsigned char) ((arr_8 [i_17] [i_17]) / (arr_8 [i_17] [i_17])));
        var_38 = ((/* implicit */short) (~(arr_8 [i_17] [i_17])));
    }
    var_39 = ((/* implicit */signed char) 15330851961510984145ULL);
}
