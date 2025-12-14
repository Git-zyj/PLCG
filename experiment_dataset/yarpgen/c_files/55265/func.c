/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55265
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 1] = ((/* implicit */unsigned short) arr_1 [i_0]);
        /* LoopSeq 4 */
        for (short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */signed char) (~(4194303)));
            arr_7 [i_0 + 2] [i_1] [i_1 - 1] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1 - 1])) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)14200)) : (((/* implicit */int) (unsigned short)51335))))));
            arr_8 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? ((~(3948506674U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)14200))))));
        }
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
        {
            var_11 += ((/* implicit */unsigned int) ((int) arr_1 [i_2]));
            var_12 *= ((/* implicit */_Bool) arr_9 [i_0 + 1]);
            var_13 = ((/* implicit */short) (+(((/* implicit */int) arr_11 [i_0]))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (unsigned short i_4 = 3; i_4 < 20; i_4 += 3) 
                {
                    {
                        arr_17 [(signed char)7] [i_2] [i_2] [i_3] [(unsigned char)1] [i_4] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)118))) : (-5561209998043201774LL)));
                        arr_18 [i_0] [i_0] [i_2] [i_2] [i_0] [i_4] = ((/* implicit */short) arr_14 [19ULL] [10U] [i_3] [(_Bool)1]);
                        var_14 = ((/* implicit */unsigned int) arr_11 [i_4 + 1]);
                    }
                } 
            } 
            arr_19 [i_0] [i_0] = ((/* implicit */unsigned char) var_8);
        }
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
        {
            var_15 += ((/* implicit */_Bool) ((short) var_2));
            var_16 += ((/* implicit */signed char) ((arr_10 [i_0] [i_5] [i_0]) ? (((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_6))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (1654781799) : (((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    for (short i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        {
                            arr_35 [i_7] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_0 + 2])) && (((/* implicit */_Bool) arr_27 [i_0 - 1]))));
                            var_17 += ((/* implicit */unsigned int) var_3);
                        }
                    } 
                } 
                arr_36 [i_0] [i_7] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_22 [i_0 + 2] [i_0 + 2])))) ? (((((/* implicit */_Bool) arr_31 [i_0] [i_6] [i_7] [i_6])) ? (arr_21 [i_6] [0U]) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_7] [i_0 + 2] [i_7] [i_6] [(unsigned char)15] [i_7] [i_0 + 2]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -29LL))))))));
            }
            for (unsigned char i_10 = 3; i_10 < 17; i_10 += 3) 
            {
                var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_5))))));
                var_19 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)142)) << (((/* implicit */int) (_Bool)1))));
            }
            var_20 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_2)) << (((((/* implicit */int) var_4)) + (126)))))) % (((((/* implicit */_Bool) arr_15 [(unsigned char)17] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) var_6)) : (-8182210390753787665LL)))));
        }
        arr_40 [i_0] &= ((/* implicit */unsigned int) ((long long int) (unsigned short)14180));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)31764)) ? (arr_39 [i_0 + 1] [i_0 + 1]) : (arr_39 [i_0 + 3] [i_0])));
    }
    /* vectorizable */
    for (unsigned short i_11 = 1; i_11 < 18; i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 21; i_12 += 3) 
        {
            for (unsigned int i_13 = 0; i_13 < 21; i_13 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)63963))));
                    var_23 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (arr_20 [i_11 + 2] [i_11 + 3] [i_11 - 1])));
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        for (int i_15 = 1; i_15 < 19; i_15 += 3) 
                        {
                            {
                                var_24 ^= ((/* implicit */short) ((arr_12 [i_11 + 3] [4U] [i_13] [i_14]) << (((arr_12 [i_11] [i_11] [i_11] [i_11 + 1]) - (720026505U)))));
                                var_25 ^= ((arr_45 [i_11 + 2]) | (arr_45 [i_11 + 2]));
                                arr_58 [i_14] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_32 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) (short)16011))) : (arr_53 [i_11] [7U] [(signed char)20] [i_14] [7U]))) << (((arr_3 [i_11 + 1] [i_11 + 2] [i_11 + 1]) - (1925797402U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_16 = 0; i_16 < 21; i_16 += 2) /* same iter space */
        {
            arr_63 [i_11] [i_11 + 1] [i_16] = ((/* implicit */short) ((int) arr_21 [i_16] [i_11 + 3]));
            arr_64 [i_11 + 2] [i_16] [i_16] = ((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_11 + 2])) | (((/* implicit */int) arr_37 [i_11 + 2]))));
            var_26 *= ((/* implicit */long long int) ((((/* implicit */int) var_10)) == (((/* implicit */int) arr_31 [i_11 + 3] [i_11 + 3] [i_11 + 1] [i_11]))));
            arr_65 [i_11 + 3] [i_16] [i_11] |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_14 [i_11] [i_11] [i_11] [i_16]))));
        }
        for (long long int i_17 = 0; i_17 < 21; i_17 += 2) /* same iter space */
        {
            arr_68 [i_11] [i_17] [i_17] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_5)) | (arr_59 [i_11] [i_17]))) ^ (((/* implicit */unsigned long long int) (~(var_6))))));
            var_27 = ((/* implicit */int) ((unsigned char) (unsigned char)56));
            var_28 ^= ((/* implicit */long long int) (-(((/* implicit */int) arr_32 [i_11 + 3] [i_11] [i_11] [i_17]))));
        }
        for (unsigned int i_18 = 0; i_18 < 21; i_18 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_19 = 1; i_19 < 18; i_19 += 2) 
            {
                for (short i_20 = 0; i_20 < 21; i_20 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_21 = 0; i_21 < 21; i_21 += 2) 
                        {
                            var_29 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_51 [i_18] [i_18] [i_21])) == (-5))) ? (((/* implicit */int) arr_11 [i_11 + 2])) : (((/* implicit */int) ((unsigned char) 3017936873U)))));
                            arr_82 [i_19] = ((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_11 + 1] [i_19 + 3] [i_19])) | (((/* implicit */int) (_Bool)1))));
                        }
                        arr_83 [i_11] [i_18] [(short)12] [i_20] |= ((/* implicit */signed char) (+(var_8)));
                    }
                } 
            } 
            arr_84 [i_11] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)69))) & (arr_30 [i_11] [i_18] [20U] [i_11 + 1] [8ULL] [2LL]));
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13707)) ? (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_11] [8ULL] [0] [i_11]))) : (-8182210390753787683LL)))) ? (((/* implicit */long long int) (~(3801553597U)))) : (-8182210390753787690LL)));
            var_31 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_11] [i_18])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_62 [i_18] [i_11] [i_11 + 3]))))) >= (((((/* implicit */_Bool) -10LL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_11] [i_18] [i_11])))))));
        }
        var_32 += ((/* implicit */long long int) arr_32 [i_11] [i_11] [(short)5] [i_11]);
    }
    for (unsigned short i_22 = 1; i_22 < 18; i_22 += 1) /* same iter space */
    {
        var_33 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_22])) ? (((/* implicit */unsigned int) -113569839)) : (3521971746U)));
        var_34 &= ((/* implicit */unsigned char) ((((((((/* implicit */int) arr_72 [i_22])) - (((/* implicit */int) arr_9 [i_22])))) + (min((((/* implicit */int) (unsigned char)57)), (275377188))))) == ((-(((/* implicit */int) arr_77 [(unsigned char)18] [i_22 + 3] [i_22 + 1]))))));
    }
    var_35 = ((/* implicit */int) (signed char)-100);
    var_36 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)24)) && (((/* implicit */_Bool) (unsigned char)179))))), (var_9)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51336))) : (((((/* implicit */_Bool) 65535)) ? (((/* implicit */long long int) var_0)) : (-8182210390753787683LL))))))));
}
