/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78121
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [(short)2] [i_0] [i_0 + 2] = (~(((/* implicit */int) var_2)));
                        arr_11 [17] [i_0] [i_3] = ((/* implicit */_Bool) var_17);
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-6985)) / (1818457132)));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    var_19 -= ((/* implicit */short) ((((/* implicit */int) var_10)) & (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))));
                    var_20 = ((/* implicit */signed char) var_9);
                }
                for (int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    arr_21 [i_7] [i_5] [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_14))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_16)) ? (var_11) : (var_11)))));
                        var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) var_16))));
                        arr_24 [i_0] [4LL] [(short)1] [i_7] [(short)14] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                    }
                }
                for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1243993587)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1249265598718316556ULL)));
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        arr_30 [i_0] [i_4] [i_5] [i_4] [i_4] [i_10] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 1249265598718316556ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (17197478474991235059ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_17))))))));
                        var_24 = ((/* implicit */short) (((~(((/* implicit */int) var_12)))) <= (((/* implicit */int) var_0))));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_13))));
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) ((var_8) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
                    }
                    for (unsigned int i_11 = 2; i_11 < 21; i_11 += 4) 
                    {
                        arr_34 [7] [i_4] [16ULL] [i_5] [i_9] [i_9] [i_11 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) <= (var_8)))) : (((/* implicit */int) var_10))));
                        var_27 = ((/* implicit */_Bool) var_7);
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 1; i_12 < 20; i_12 += 1) 
                    {
                        var_28 = ((/* implicit */short) var_15);
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) var_16)) ? (var_8) : (((/* implicit */unsigned long long int) var_4))))));
                        arr_37 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-71))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))));
                    }
                    for (unsigned int i_13 = 4; i_13 < 23; i_13 += 4) 
                    {
                        arr_40 [i_13] [i_9] [i_5] [i_4] [12ULL] [12ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (var_11))))));
                        arr_41 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 4] [i_0 + 3] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551606ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))))))) & (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_8)))));
                    }
                    /* LoopSeq 4 */
                    for (short i_14 = 0; i_14 < 24; i_14 += 2) /* same iter space */
                    {
                        arr_44 [i_0] [i_0] [(signed char)12] [i_0] [i_0] |= var_0;
                        var_30 -= ((/* implicit */short) var_5);
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) var_11)) : (var_5)))) : (((((/* implicit */_Bool) 12728839425044737110ULL)) ? (4ULL) : (((/* implicit */unsigned long long int) 5686634239881853189LL))))));
                        var_32 -= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_0)))))));
                        var_33 ^= ((((var_3) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))) - ((+(((/* implicit */int) var_7)))));
                    }
                    for (short i_15 = 0; i_15 < 24; i_15 += 2) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_5)));
                        arr_47 [i_0 + 3] [i_4] [i_5] [i_9] [i_15] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_14)))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (var_4))))));
                        var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(9ULL)))) ? (-5686634239881853185LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5686634239881853182LL)))))))))));
                    }
                    for (short i_16 = 0; i_16 < 24; i_16 += 2) /* same iter space */
                    {
                        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) var_3))));
                        var_37 ^= ((/* implicit */unsigned long long int) var_3);
                        var_38 = ((/* implicit */long long int) var_0);
                        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) - (((/* implicit */long long int) ((/* implicit */int) ((var_11) < (((/* implicit */int) var_13)))))))))));
                    }
                    for (short i_17 = 1; i_17 < 20; i_17 += 1) 
                    {
                        arr_54 [i_4] [i_17] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_11) : ((-(var_11)))));
                        var_40 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 5686634239881853189LL))));
                    }
                    var_41 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))))));
                }
                var_42 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14)))) - (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15))))));
                /* LoopSeq 1 */
                for (short i_18 = 0; i_18 < 24; i_18 += 4) 
                {
                    var_43 = ((/* implicit */int) var_10);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_19 = 2; i_19 < 21; i_19 += 3) 
                    {
                        var_44 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) * (1914301624U))))));
                        var_45 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_17))))) != (var_8)));
                        var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */int) var_13)))))))));
                    }
                    for (short i_20 = 0; i_20 < 24; i_20 += 1) 
                    {
                        var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5686634239881853189LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32370))) : (5686634239881853185LL)));
                        var_48 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) != (((/* implicit */int) (short)-32370))));
                        var_49 = ((/* implicit */short) (+((~(((/* implicit */int) var_9))))));
                        var_50 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) var_12)) : (((var_11) - (var_11)))));
                        var_51 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                    }
                }
            }
            for (short i_21 = 0; i_21 < 24; i_21 += 1) 
            {
                var_52 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10)))) ^ ((-(((/* implicit */int) var_17))))));
                var_53 = ((/* implicit */unsigned long long int) var_12);
                arr_65 [i_4] = ((/* implicit */signed char) var_4);
            }
            arr_66 [i_0] [i_0] = ((/* implicit */short) var_14);
            var_54 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255))));
            var_55 = ((/* implicit */unsigned char) max((var_55), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 5686634239881853189LL)) ? (((/* implicit */int) (short)18637)) : (2147483647))))));
        }
        for (unsigned char i_22 = 1; i_22 < 23; i_22 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_23 = 1; i_23 < 23; i_23 += 3) 
            {
                var_56 = ((/* implicit */short) (((!(((/* implicit */_Bool) (-2147483647 - 1))))) && ((!(((/* implicit */_Bool) -5686634239881853185LL))))));
                var_57 &= var_10;
            }
            var_58 = ((/* implicit */unsigned long long int) var_14);
            var_59 += ((/* implicit */short) ((-5686634239881853194LL) / (((/* implicit */long long int) 16383))));
            var_60 = ((/* implicit */long long int) max((var_60), (((/* implicit */long long int) var_3))));
            /* LoopSeq 1 */
            for (long long int i_24 = 3; i_24 < 23; i_24 += 3) 
            {
                var_61 = ((/* implicit */long long int) var_11);
                var_62 -= ((/* implicit */long long int) var_17);
                arr_74 [i_24] [i_22] [i_24] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16293))) ^ (2097151ULL)))));
            }
        }
    }
    var_63 ^= var_5;
    /* LoopSeq 1 */
    for (short i_25 = 0; i_25 < 15; i_25 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_26 = 0; i_26 < 15; i_26 += 1) 
        {
            var_64 *= ((/* implicit */short) (-((((~(var_5))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
            var_65 = ((((/* implicit */_Bool) (short)27516)) ? (((/* implicit */unsigned long long int) -1LL)) : (1249265598718316556ULL));
        }
        arr_80 [i_25] [i_25] = ((/* implicit */unsigned long long int) var_4);
    }
}
