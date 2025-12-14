/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5694
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62104)))))));
                    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), ((~(max((var_15), (((/* implicit */unsigned int) (unsigned short)62087))))))));
                    var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)90))))), (((unsigned int) arr_1 [i_2] [i_1 + 2]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) (~((~((~(((/* implicit */int) (unsigned short)3449))))))));
                                var_22 -= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)98)) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_2])))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 + 3]))) : (((((/* implicit */_Bool) (unsigned char)151)) ? (1554841577U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31132)))))))) ? ((-(((/* implicit */int) ((unsigned short) (unsigned char)239))))) : (((/* implicit */int) max((max(((unsigned char)207), ((unsigned char)209))), (var_7))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 2; i_5 < 11; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            {
                arr_20 [i_6] [i_6] = ((/* implicit */long long int) var_0);
                /* LoopSeq 1 */
                for (unsigned char i_7 = 1; i_7 < 14; i_7 += 3) 
                {
                    /* LoopSeq 3 */
                    for (short i_8 = 1; i_8 < 12; i_8 += 2) 
                    {
                        arr_27 [i_5] [i_6] [i_5 - 2] [i_5] [i_5 + 4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (-(18258155508271716202ULL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_8 [i_6]))))))) : (((((/* implicit */_Bool) arr_26 [i_6])) ? (268434944U) : (var_14)))));
                        var_24 = ((/* implicit */unsigned char) ((((var_14) - (((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_5] [i_6]))))))) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-45)))));
                        var_25 = (~(((/* implicit */int) ((signed char) arr_15 [i_5 + 3] [i_7 - 1]))));
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) var_12))))) || ((!(((/* implicit */_Bool) (unsigned char)172)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)62087)))))));
                        var_27 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_13))))))));
                    }
                    for (signed char i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */long long int) max((var_11), (((/* implicit */unsigned int) ((unsigned short) var_9)))));
                        var_29 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(var_15)))), (((((/* implicit */_Bool) arr_18 [i_5 + 1] [i_6] [i_5])) ? (268435424ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5 + 1] [i_6] [i_5])))))));
                        arr_30 [i_6] [i_6] [i_7] [1U] [i_6] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_10 [i_6] [i_5 + 4])) || (((/* implicit */_Bool) -2848872177360879791LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_15 [i_5 + 4] [i_5 + 4]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5 + 4] [i_5 + 4])))))));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_18 [i_5 - 1] [i_5] [i_5 + 4]), (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (max((var_14), (((/* implicit */unsigned int) var_12)))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 1; i_10 < 14; i_10 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned char) 7783522898305287238ULL);
                            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (+(((max((-2785153907747888217LL), (((/* implicit */long long int) var_6)))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3449)))))))))))));
                            var_33 = ((/* implicit */unsigned long long int) var_17);
                        }
                    }
                    for (signed char i_11 = 0; i_11 < 15; i_11 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 15; i_12 += 4) 
                        {
                            arr_38 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((789172478U), (arr_13 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 1])))) ? (((/* implicit */int) (unsigned short)3449)) : (((/* implicit */int) arr_5 [i_6] [i_6]))));
                            var_34 = ((/* implicit */long long int) (-(((/* implicit */int) arr_23 [i_5]))));
                            var_35 = ((/* implicit */signed char) (((-(arr_37 [i_5] [i_5] [i_5 + 1] [i_5 + 4] [i_7 - 1] [i_5 + 4] [i_12]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_37 [i_5] [i_5] [i_5 + 2] [i_5 + 2] [i_7 + 1] [i_7] [i_11]))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 1; i_13 < 12; i_13 += 3) 
                        {
                            arr_41 [i_5 - 1] [i_6] [i_7] [i_11] [i_6] = ((/* implicit */unsigned long long int) var_11);
                            arr_42 [i_5] [i_5] [(unsigned char)13] [i_5] [i_6] = (((!(((/* implicit */_Bool) (unsigned short)55513)))) ? (((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)154))) - (var_15)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58))));
                            arr_43 [i_6] [i_6] [i_11] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)68))));
                            var_36 += ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [i_5] [i_5 - 1] [i_11] [i_13 + 1]))))), (max((var_14), (((/* implicit */unsigned int) arr_34 [i_5] [i_5 + 3]))))));
                        }
                    }
                    var_37 -= ((/* implicit */unsigned int) ((unsigned char) max((-1622919063), (((/* implicit */int) (unsigned short)9998)))));
                    var_38 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_25 [i_7] [i_6] [i_7] [i_7 + 1])), (min((var_11), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)47)) << (((((/* implicit */int) var_1)) - (48))))))))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_14 = 2; i_14 < 14; i_14 += 2) 
                {
                    arr_46 [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) var_16);
                    var_39 = var_11;
                    arr_47 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_5 + 1])) & (((/* implicit */int) (signed char)-95))))) ? (((((/* implicit */int) arr_2 [i_5 + 1])) - (((/* implicit */int) arr_2 [i_5 + 1])))) : ((~(((/* implicit */int) arr_2 [i_5 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 15; i_15 += 3) 
                    {
                        for (unsigned char i_16 = 4; i_16 < 14; i_16 += 2) 
                        {
                            {
                                var_40 += ((/* implicit */unsigned int) (signed char)(-127 - 1));
                                var_41 *= ((/* implicit */unsigned char) ((((((/* implicit */int) (!(((/* implicit */_Bool) 16777215ULL))))) + (((/* implicit */int) (unsigned char)243)))) <= (((/* implicit */int) (short)8537))));
                                var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_22 [i_14] [i_14])) ? (((/* implicit */int) arr_22 [i_16] [i_16])) : (((/* implicit */int) arr_7 [i_14 - 2] [i_14 - 1] [i_5 + 1] [i_5 + 1])))) ^ (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)222)), (arr_7 [i_14 - 2] [i_14 - 1] [i_5 + 1] [i_5 + 1])))))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_17 = 0; i_17 < 15; i_17 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_18 = 1; i_18 < 14; i_18 += 3) 
                    {
                        var_43 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_16)), (var_14)));
                        var_44 = ((/* implicit */unsigned int) var_7);
                    }
                    for (unsigned char i_19 = 1; i_19 < 14; i_19 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_20 = 0; i_20 < 15; i_20 += 3) 
                        {
                            arr_64 [i_20] [i_19] [i_6] [i_6] [i_6] [i_5] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned char) arr_45 [8U] [i_6] [i_19 - 1] [i_19]))), (((arr_45 [i_19] [i_6] [i_19 - 1] [i_19]) | (arr_45 [i_19] [i_6] [i_19 + 1] [i_19])))));
                            arr_65 [i_20] [i_6] [i_17] [i_6] [i_5] = ((/* implicit */long long int) var_1);
                        }
                        /* LoopSeq 2 */
                        for (long long int i_21 = 0; i_21 < 15; i_21 += 4) /* same iter space */
                        {
                            arr_68 [i_5] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2848872177360879791LL)) ? (((((/* implicit */long long int) max((arr_57 [i_5] [i_5] [i_17] [i_19 + 1]), (((/* implicit */unsigned int) (short)2751))))) + (min((var_3), (((/* implicit */long long int) (unsigned char)239)))))) : (((/* implicit */long long int) (-((+(3313758304U))))))));
                            var_45 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_17))))))) * (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)2433)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4574))) : (var_3)))) ^ (max((17110765350298948400ULL), (((/* implicit */unsigned long long int) arr_35 [i_5]))))))));
                            var_46 = ((/* implicit */unsigned char) (signed char)-66);
                            var_47 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (arr_3 [i_17]) : (1388848949U))) >= (arr_37 [i_21] [i_6] [i_19] [(unsigned char)13] [i_6] [i_5] [i_5])))), (arr_13 [(unsigned char)6] [i_6] [i_17] [i_21] [(unsigned char)6])));
                        }
                        for (long long int i_22 = 0; i_22 < 15; i_22 += 4) /* same iter space */
                        {
                            arr_71 [i_5] [8ULL] [i_6] [i_19] [i_22] = max(((-(arr_57 [i_6] [i_19 + 1] [i_6] [i_6]))), (((/* implicit */unsigned int) var_8)));
                            arr_72 [i_5] [i_6] [i_17] [i_6] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_19 - 1] [i_19 - 1]))))), (var_10)));
                        }
                        var_48 += ((/* implicit */unsigned char) ((((((/* implicit */int) arr_7 [i_19] [i_19] [i_19] [i_19 + 1])) + (((/* implicit */int) (unsigned char)229)))) | (((/* implicit */int) arr_7 [i_19] [(unsigned char)16] [i_19] [i_19 + 1]))));
                        var_49 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) (unsigned char)236)), ((-(var_5))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */int) arr_19 [i_19 - 1] [i_19 + 1])) : (((/* implicit */int) arr_40 [i_19 - 1] [i_19 - 1] [i_19 - 1])))))));
                    }
                    var_50 += ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) (unsigned char)239)), (var_9)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_23 = 0; i_23 < 15; i_23 += 3) 
                    {
                        var_51 = ((/* implicit */unsigned char) max((max((arr_52 [i_5] [i_6] [i_5 + 2] [i_6]), (arr_52 [i_23] [i_6] [i_5 + 2] [i_6]))), (min((((/* implicit */unsigned short) (unsigned char)20)), (arr_52 [i_5] [i_6] [i_5 + 2] [i_5])))));
                        var_52 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)33)) ^ (((/* implicit */int) (short)-9126))));
                        var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) 3588819506U))));
                    }
                }
            }
        } 
    } 
    var_54 = ((/* implicit */unsigned char) var_13);
    var_55 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)68))) + ((+(var_17)))))));
}
