/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/958
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
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 4; i_3 < 18; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((var_5) > (var_11)));
                            arr_14 [i_0] [i_1] [i_2] [i_1] [0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)34528)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9639))) : ((+(1025178171U)))));
                            var_14 = ((/* implicit */signed char) ((var_9) == (var_4)));
                        }
                        var_15 = ((/* implicit */int) var_4);
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((((/* implicit */_Bool) ((var_9) % (11U)))) ? (var_5) : (((/* implicit */unsigned int) var_13))))));
                        arr_15 [i_1] = ((/* implicit */unsigned short) 4095);
                    }
                    var_17 = ((/* implicit */int) ((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31017)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        arr_19 [i_1] [i_1] [i_2] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 12U)) || (((/* implicit */_Bool) (unsigned char)30))));
                        /* LoopSeq 2 */
                        for (short i_6 = 1; i_6 < 19; i_6 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) == (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-11576))))));
                            var_19 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_10)) : ((~(1130963812U))));
                        }
                        for (short i_7 = 1; i_7 < 19; i_7 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)5564)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)56))));
                            arr_25 [i_1] [i_5] [i_2] [3] [i_1] = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)));
                            arr_26 [i_1] [i_5] [i_5] [i_2] [(unsigned char)4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (var_0) : (3311140748U)));
                        }
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */long long int) var_0)) == (-2365196907531088707LL))))));
                    }
                    for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((var_8) | (((/* implicit */long long int) ((((((/* implicit */int) (short)-17148)) + (2147483647))) >> (((((/* implicit */int) var_6)) + (57)))))))))));
                        arr_29 [i_0] [i_1] [i_1] [i_2] [i_8] [(_Bool)1] = ((/* implicit */unsigned int) (~(var_13)));
                        /* LoopSeq 1 */
                        for (long long int i_9 = 2; i_9 < 21; i_9 += 2) 
                        {
                            arr_33 [i_2] [i_9] [i_2] &= ((/* implicit */unsigned short) ((var_9) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117)))));
                            arr_34 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((((/* implicit */int) (short)11947)) << (((var_8) - (3718445903461963116LL))))) >> (((543837620U) - (543837597U))))))));
                        }
                        var_24 = ((/* implicit */int) var_7);
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(527052704U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((1532689736) < (((/* implicit */int) (short)-5784)))))) : (var_8))))));
                    }
                    arr_35 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (short)29677)) ? (var_10) : (((/* implicit */int) var_6))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            for (unsigned short i_11 = 0; i_11 < 22; i_11 += 2) 
            {
                {
                    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (1496422683853076280LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-17148))))))));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */int) (short)-11622)) - (1482164076)));
                }
            } 
        } 
        var_28 -= ((/* implicit */short) ((((/* implicit */int) (short)6207)) >> (((((((/* implicit */_Bool) (short)-8304)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_0))) - (87U)))));
    }
    for (unsigned char i_12 = 2; i_12 < 21; i_12 += 1) /* same iter space */
    {
        var_29 -= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)56455)) % (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (4408873134464703177ULL))))));
        var_30 = (+((+(var_4))));
    }
    var_31 = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)17148)), (14037870939244848438ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3)) ? (((/* implicit */int) (unsigned short)53427)) : (((/* implicit */int) (unsigned short)53431))))) : (3174880113U))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_3))))) ? (max((1255587485), (-1595680211))) : (var_10))))));
    var_32 = ((/* implicit */unsigned char) -3);
    /* LoopNest 2 */
    for (short i_13 = 0; i_13 < 19; i_13 += 4) 
    {
        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_15 = 2; i_15 < 18; i_15 += 1) 
                {
                    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)53427)) / ((-2147483647 - 1)))))));
                    arr_52 [i_13] [i_15] [i_14] [i_14] = ((/* implicit */unsigned short) ((((((min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))), ((((-2147483647 - 1)) & (((/* implicit */int) (signed char)-114)))))) + (2147483647))) + (2147483647))) >> (((((/* implicit */int) var_12)) - (53)))));
                    arr_53 [i_13] [i_15] [i_15] = ((/* implicit */unsigned char) min((((3410783749U) | (var_5))), (((/* implicit */unsigned int) ((((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) (unsigned short)40568))))) != (min((((/* implicit */long long int) var_9)), (1023LL))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_16 = 0; i_16 < 19; i_16 += 2) 
                    {
                        var_34 -= ((/* implicit */unsigned int) (-(((/* implicit */int) ((-488252458) != (488252447))))));
                        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) (unsigned char)46))));
                        arr_56 [i_13] [i_15] [(_Bool)1] [i_15 - 2] [(_Bool)1] [i_16] = ((/* implicit */unsigned short) (-(var_7)));
                    }
                    for (unsigned short i_17 = 1; i_17 < 17; i_17 += 4) 
                    {
                        arr_59 [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)31326)) && (((((/* implicit */int) (short)1967)) != (((/* implicit */int) var_2))))));
                        arr_60 [i_13] |= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))), (min((2523871315U), (((/* implicit */unsigned int) -1595680211))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_18 = 1; i_18 < 18; i_18 += 1) 
                        {
                            arr_65 [(unsigned char)12] [i_14] [i_15 - 2] [i_15] [i_17 + 2] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10463524815073998088ULL)) && (((/* implicit */_Bool) 1493365051U))));
                            var_36 -= ((/* implicit */unsigned short) ((688495887U) != (((/* implicit */unsigned int) 562185485))));
                            var_37 += ((((/* implicit */long long int) ((/* implicit */int) var_1))) == (var_8));
                            var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_4)) : (-1570506095388364786LL))))));
                        }
                    }
                }
                /* vectorizable */
                for (short i_19 = 0; i_19 < 19; i_19 += 4) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-24088)) : (((/* implicit */int) (unsigned short)65535)))))));
                    var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((((/* implicit */unsigned int) -144294635)) != (var_7))))));
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 0; i_20 < 19; i_20 += 2) 
                    {
                        for (int i_21 = 4; i_21 < 16; i_21 += 1) 
                        {
                            {
                                var_41 += ((/* implicit */unsigned char) (+(457070579U)));
                                arr_72 [i_13] [i_14] [i_19] [i_20] [i_21 + 2] = ((/* implicit */unsigned int) (unsigned short)42562);
                                arr_73 [i_13] [i_14] [i_14] [i_20] [i_14] = ((/* implicit */unsigned short) var_5);
                            }
                        } 
                    } 
                }
                for (short i_22 = 0; i_22 < 19; i_22 += 4) /* same iter space */
                {
                    var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3039998422U))))), ((unsigned short)0))))) : (-9223372036854775790LL)));
                    /* LoopNest 2 */
                    for (int i_23 = 2; i_23 < 18; i_23 += 2) 
                    {
                        for (unsigned short i_24 = 1; i_24 < 15; i_24 += 3) 
                        {
                            {
                                arr_81 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_13] |= ((/* implicit */unsigned int) (unsigned short)16);
                                var_43 ^= ((/* implicit */unsigned char) -7613974099660594965LL);
                                var_44 |= ((/* implicit */signed char) (~(min((2801602244U), (((1493365051U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)231)))))))));
                            }
                        } 
                    } 
                    var_45 -= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) < (((/* implicit */int) ((var_8) != (((/* implicit */long long int) var_11)))))));
                }
                var_46 = ((/* implicit */signed char) min((((var_11) << (((/* implicit */int) (_Bool)1)))), ((~(var_9)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_25 = 1; i_25 < 20; i_25 += 1) 
    {
        for (unsigned short i_26 = 1; i_26 < 21; i_26 += 1) 
        {
            for (signed char i_27 = 0; i_27 < 22; i_27 += 2) 
            {
                {
                    var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) (unsigned short)22973))));
                    var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)45549)), (1158466280U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) << (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) (unsigned short)13)) ? (9750944239931158167ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                    var_49 = ((/* implicit */unsigned int) var_10);
                }
            } 
        } 
    } 
}
