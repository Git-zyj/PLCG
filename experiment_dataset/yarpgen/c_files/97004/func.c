/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97004
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
    for (int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max(((~(max((var_4), (((/* implicit */unsigned int) var_14)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((5749121765905846031ULL) + (((/* implicit */unsigned long long int) 0U))))) || (((14191609456219571894ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37)))))))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    var_19 ^= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_9)))));
                    arr_11 [i_0 + 2] [i_1] [13ULL] [i_3] [i_1] &= ((/* implicit */signed char) ((unsigned int) ((unsigned short) var_12)));
                }
                var_20 = ((/* implicit */signed char) (+(((int) var_5))));
            }
            for (long long int i_4 = 2; i_4 < 18; i_4 += 3) 
            {
                var_21 -= ((/* implicit */_Bool) var_8);
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (((unsigned long long int) var_6)))))));
                /* LoopSeq 3 */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_13))));
                    var_24 = ((/* implicit */_Bool) (((((-(var_8))) > (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_9)), (var_7))))))) ? (min((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) & (var_6))), (max((var_4), (var_0))))) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_9)))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_25 ^= ((((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_17)))))));
                        var_26 = ((/* implicit */_Bool) var_6);
                        var_27 = ((/* implicit */long long int) var_13);
                        arr_21 [i_4] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_2))))));
                        var_28 = ((/* implicit */signed char) (((((-(((/* implicit */int) var_13)))) + (2147483647))) >> ((((-(((/* implicit */int) var_3)))) + (19493)))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        var_29 ^= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) (unsigned char)129)))) << (((min((var_4), (((/* implicit */unsigned int) var_17)))) - (8842U)))))), ((-(var_0)))));
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((max((((((/* implicit */int) var_9)) + (((/* implicit */int) var_11)))), ((+(((/* implicit */int) var_2)))))) << (((((unsigned int) max((var_6), (var_4)))) - (2463550732U))))))));
                        var_31 = ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
                    }
                    arr_26 [i_4] [i_4 + 3] [i_1] [i_4] = ((/* implicit */unsigned char) ((long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))))), (((((/* implicit */long long int) var_6)) / (var_15))))));
                }
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) /* same iter space */
                {
                    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) var_1))));
                    var_33 = ((/* implicit */int) max((var_33), (max((((/* implicit */int) min((min((var_3), (((/* implicit */short) var_10)))), (((/* implicit */short) (!(((/* implicit */_Bool) var_17)))))))), ((-(((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_7)))))))))));
                    var_34 = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((((var_0) > (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), ((!(((/* implicit */_Bool) var_5))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)67))) / (9223372036854775801LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_0))))))));
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_11)))), (((/* implicit */int) ((_Bool) var_6)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_5)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (signed char)-56))))))));
                }
                for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned int) min((var_36), (max((max((((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned short) var_7))))), (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))), (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_1)))), (((((/* implicit */int) var_1)) * (((/* implicit */int) var_9)))))))))));
                    var_37 |= ((signed char) ((((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (var_4)))) & (var_8)));
                    var_38 = ((/* implicit */unsigned char) ((max((((/* implicit */int) var_9)), (((((/* implicit */int) var_1)) + (((/* implicit */int) var_2)))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) max((var_17), (((/* implicit */unsigned short) var_13))))) : (((((/* implicit */int) var_17)) & (((/* implicit */int) var_17))))))));
                }
                var_39 += ((/* implicit */signed char) (~((~(((/* implicit */int) min((((/* implicit */short) var_7)), (var_12))))))));
            }
        }
        /* vectorizable */
        for (unsigned int i_10 = 2; i_10 < 17; i_10 += 4) 
        {
            var_40 = ((/* implicit */unsigned char) var_12);
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 2) 
            {
                var_41 -= ((/* implicit */signed char) (~(((unsigned int) var_2))));
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    for (signed char i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_2))))));
                            var_43 = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_15) < (var_8)))) | (((/* implicit */int) ((signed char) var_17)))));
                        }
                    } 
                } 
                arr_45 [i_0] [(signed char)14] [(signed char)3] = ((/* implicit */signed char) (-(((((/* implicit */int) var_10)) & (((/* implicit */int) var_14))))));
                /* LoopSeq 3 */
                for (unsigned short i_14 = 1; i_14 < 20; i_14 += 2) 
                {
                    arr_49 [i_0 + 1] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                    var_44 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_16)))));
                    var_45 = ((/* implicit */signed char) ((((var_15) / (((/* implicit */long long int) var_0)))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
                    var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) var_10))));
                    var_47 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_2))))) == (((long long int) var_5))));
                }
                for (long long int i_15 = 2; i_15 < 19; i_15 += 2) /* same iter space */
                {
                    var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) var_3))))))));
                    var_49 = ((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) (signed char)16)))));
                    arr_52 [i_0 - 2] [i_10] [i_11] &= ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))) & ((~(var_4))));
                    var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_6) >> (((((/* implicit */int) var_14)) + (33)))))))))));
                }
                for (long long int i_16 = 2; i_16 < 19; i_16 += 2) /* same iter space */
                {
                    var_51 = ((/* implicit */unsigned int) max((var_51), (((/* implicit */unsigned int) (((+(((/* implicit */int) var_5)))) | (((/* implicit */int) ((_Bool) var_11))))))));
                    /* LoopSeq 3 */
                    for (signed char i_17 = 1; i_17 < 20; i_17 += 2) /* same iter space */
                    {
                        var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) (((+(((/* implicit */int) var_10)))) == (((/* implicit */int) var_7)))))));
                        arr_57 [i_11] [i_11] [i_11] [i_11] [i_10] |= ((/* implicit */unsigned int) ((unsigned char) 4199949913U));
                        var_53 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_11))))));
                        var_54 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_5))))));
                        var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) var_1))));
                    }
                    for (signed char i_18 = 1; i_18 < 20; i_18 += 2) /* same iter space */
                    {
                        var_56 = ((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_16)))));
                        arr_62 [i_0] [i_10] [i_11] [i_16 - 1] [i_18] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) && (((/* implicit */_Bool) ((signed char) var_10)))));
                        var_57 = ((/* implicit */signed char) ((((/* implicit */int) (!((_Bool)0)))) * (((/* implicit */int) ((_Bool) var_9)))));
                    }
                    for (signed char i_19 = 1; i_19 < 20; i_19 += 2) /* same iter space */
                    {
                        arr_67 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_0) & (var_6))))));
                        arr_68 [(_Bool)1] [i_10] [i_10 + 4] [i_10 + 4] [i_19] [i_10 + 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                    }
                    arr_69 [i_0] [i_0 - 2] [i_10] [i_11] [i_16] [i_0 - 2] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_2))))));
                }
            }
        }
        /* LoopNest 2 */
        for (unsigned short i_20 = 0; i_20 < 21; i_20 += 4) 
        {
            for (unsigned int i_21 = 0; i_21 < 21; i_21 += 4) 
            {
                {
                    var_58 = ((/* implicit */unsigned int) min((var_58), (((/* implicit */unsigned int) min(((!(((_Bool) var_14)))), ((!(((_Bool) var_7)))))))));
                    var_59 = max((((/* implicit */long long int) min((min((var_0), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))))), (max((max((((/* implicit */long long int) var_14)), (var_15))), (((/* implicit */long long int) ((short) var_0))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_22 = 0; i_22 < 13; i_22 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_23 = 0; i_23 < 13; i_23 += 2) /* same iter space */
        {
            var_60 = ((/* implicit */_Bool) min((var_60), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))))));
            /* LoopSeq 1 */
            for (signed char i_24 = 0; i_24 < 13; i_24 += 2) 
            {
                var_61 = ((/* implicit */short) max((var_61), (((/* implicit */short) ((_Bool) (-(((/* implicit */int) var_1))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_25 = 0; i_25 < 13; i_25 += 2) 
                {
                    for (short i_26 = 2; i_26 < 12; i_26 += 1) 
                    {
                        {
                            var_62 = ((/* implicit */signed char) max((var_62), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) % (((/* implicit */int) var_11))))))))));
                            arr_92 [i_22] [i_23] [i_24] [i_25] [(signed char)8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) ((signed char) var_0)))));
                        }
                    } 
                } 
                var_63 = ((/* implicit */unsigned short) min((var_63), (((/* implicit */unsigned short) var_13))));
                /* LoopNest 2 */
                for (unsigned char i_27 = 0; i_27 < 13; i_27 += 4) 
                {
                    for (signed char i_28 = 0; i_28 < 13; i_28 += 2) 
                    {
                        {
                            arr_99 [i_23] [i_24] = ((signed char) (unsigned short)31);
                            var_64 += ((/* implicit */signed char) (!(((_Bool) var_6))));
                            var_65 = ((/* implicit */signed char) min((var_65), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) != (((/* implicit */int) ((signed char) var_12))))))));
                        }
                    } 
                } 
            }
        }
        for (signed char i_29 = 0; i_29 < 13; i_29 += 2) /* same iter space */
        {
            var_66 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) var_6)))));
            var_67 = ((/* implicit */signed char) (!(((var_8) == (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
        }
        /* LoopSeq 1 */
        for (short i_30 = 0; i_30 < 13; i_30 += 4) 
        {
            var_68 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((var_0) >= (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
            var_69 |= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_4) >= (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) != (((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */long long int) var_0))))));
            var_70 ^= ((/* implicit */_Bool) (+(((/* implicit */int) ((var_8) == (var_15))))));
        }
        var_71 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_3))));
        /* LoopNest 3 */
        for (signed char i_31 = 2; i_31 < 12; i_31 += 2) 
        {
            for (signed char i_32 = 0; i_32 < 13; i_32 += 3) 
            {
                for (unsigned int i_33 = 3; i_33 < 11; i_33 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_34 = 1; i_34 < 11; i_34 += 2) 
                        {
                            arr_116 [10U] [i_33] [i_32] [i_33] [i_34] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))) != (((/* implicit */int) var_1))));
                            var_72 = ((/* implicit */_Bool) min((var_72), (((/* implicit */_Bool) ((signed char) (~(var_15)))))));
                            arr_117 [i_22] [i_33] [i_32] [i_33 - 1] [i_34] = ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned char)60)))) >= (((/* implicit */int) ((signed char) var_12)))));
                        }
                        for (unsigned short i_35 = 0; i_35 < 13; i_35 += 4) 
                        {
                            var_73 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_11)))));
                            var_74 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_16))))));
                            var_75 += ((/* implicit */unsigned char) (-(((unsigned long long int) var_17))));
                            var_76 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) (signed char)-33)) && (((/* implicit */_Bool) 2674492339U))))));
                        }
                        var_77 &= ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_2))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                        arr_121 [(unsigned char)5] [i_33] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12)))))));
                        var_78 = ((signed char) (!(((/* implicit */_Bool) var_14))));
                    }
                } 
            } 
        } 
    }
    var_79 = ((/* implicit */signed char) max((var_15), (((/* implicit */long long int) ((((((/* implicit */int) var_1)) << (((((/* implicit */int) var_11)) - (75))))) >= ((~(((/* implicit */int) var_14)))))))));
    var_80 = ((/* implicit */signed char) min((var_80), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_7)))))))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)-27)), (((short) (signed char)-69))))) : (((((((/* implicit */int) var_2)) < (((/* implicit */int) var_12)))) ? ((+(((/* implicit */int) var_17)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))))));
}
