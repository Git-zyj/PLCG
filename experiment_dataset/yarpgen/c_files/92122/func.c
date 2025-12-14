/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92122
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((unsigned char) (+(var_1)))), (((/* implicit */unsigned char) (_Bool)1))));
        var_14 = ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (~(arr_1 [i_0] [i_0])))) : (min((16599166654197128700ULL), (6932739584767890090ULL))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            arr_8 [i_1] [i_2] [i_1] = ((/* implicit */long long int) (+(var_0)));
            var_15 -= ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
        }
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1] [(_Bool)1] [(_Bool)1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 10669906106933677397ULL)))))) : ((-(var_0)))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (-((-(((/* implicit */int) (signed char)-44)))))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
    {
        arr_12 [i_3] [i_3] = (+(((((/* implicit */int) var_7)) / (((/* implicit */int) arr_5 [i_3] [0LL] [i_3])))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1679893628)) ? (7759143332674532122LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (max((((/* implicit */unsigned int) ((unsigned short) (unsigned char)87))), (arr_1 [i_4] [i_4])))));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            arr_19 [i_5] = ((/* implicit */unsigned short) ((max((arr_5 [i_4] [i_4] [i_4]), ((_Bool)0))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)43))) : (-7545391510990842568LL)));
            arr_20 [i_5] [i_5] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (~(arr_15 [i_4])))) ? (((/* implicit */int) max((var_4), (var_11)))) : (((int) 14126402909212249828ULL))))));
        }
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_6 = 4; i_6 < 24; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            for (unsigned short i_8 = 3; i_8 < 23; i_8 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((var_13) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4510))) : (arr_25 [i_6] [i_8]))) - (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                    var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_26 [i_6]) : (18139298480563735060ULL)))) ? ((-(((/* implicit */int) var_2)))) : ((+(((/* implicit */int) var_12))))));
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((unsigned short) var_11)))));
        var_23 = var_11;
        var_24 -= (((!(((/* implicit */_Bool) arr_21 [i_6 - 3] [i_6])))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
        var_25 -= ((/* implicit */unsigned short) arr_21 [i_6] [23U]);
    }
    for (int i_9 = 0; i_9 < 15; i_9 += 4) 
    {
        arr_32 [i_9] = min((((/* implicit */unsigned long long int) ((((arr_1 [i_9] [i_9]) % (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) >> (((((/* implicit */int) var_11)) - (15612)))))), ((-((-(var_6))))));
        arr_33 [i_9] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_9)), ((+(max((((/* implicit */unsigned long long int) var_8)), (arr_26 [i_9])))))));
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)63)), (arr_21 [i_9] [i_9])))) ? (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_7))))) : ((+(((/* implicit */int) (unsigned short)65535))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_31 [i_9])), (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 227387990)) : (var_1))))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)32334))))))))))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 16; i_12 += 3) 
            {
                {
                    var_27 = ((/* implicit */unsigned short) (-(arr_28 [i_12] [i_10])));
                    arr_43 [i_10] [i_11] [11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_10] [i_10] [i_11] [i_12])) ? (((/* implicit */long long int) var_9)) : (arr_41 [i_12] [i_11] [i_11] [i_10])))) ? (((/* implicit */int) ((unsigned char) (unsigned short)64936))) : (((/* implicit */int) arr_23 [i_10] [i_11]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 1) 
        {
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))));
            arr_47 [i_10] [i_13] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_38 [i_10] [i_13] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) && (((/* implicit */_Bool) arr_38 [i_10] [i_10] [i_10]))));
        }
        arr_48 [i_10] [i_10] = (-(arr_42 [(_Bool)1] [i_10] [i_10] [i_10]));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 14; i_14 += 4) 
    {
        arr_52 [i_14] = ((/* implicit */short) var_3);
        /* LoopNest 2 */
        for (unsigned char i_15 = 0; i_15 < 14; i_15 += 2) 
        {
            for (long long int i_16 = 1; i_16 < 13; i_16 += 2) 
            {
                {
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_41 [i_16 - 1] [i_16] [i_16 - 1] [i_16 - 1])))))));
                    var_30 = ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
                    var_31 = ((/* implicit */_Bool) (-(((arr_26 [(unsigned short)5]) | (((/* implicit */unsigned long long int) var_0))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_17 = 0; i_17 < 25; i_17 += 1) 
    {
        var_32 = arr_22 [i_17];
        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_58 [i_17] [i_17])) ? (arr_58 [i_17] [i_17]) : (arr_58 [i_17] [i_17])));
    }
    for (long long int i_18 = 3; i_18 < 21; i_18 += 1) 
    {
        arr_64 [i_18 - 2] = ((/* implicit */short) (~((~(((unsigned int) var_0))))));
        var_34 = ((/* implicit */short) max((((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_61 [i_18 - 2])) && (((/* implicit */_Bool) var_7))))))), (((((/* implicit */_Bool) arr_60 [i_18])) ? (arr_22 [i_18 - 2]) : (arr_22 [i_18 - 1])))));
        arr_65 [i_18] [i_18] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? (max((1847577419512422915ULL), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) arr_28 [i_18 + 2] [i_18])))))));
    }
    /* LoopSeq 1 */
    for (int i_19 = 1; i_19 < 9; i_19 += 2) 
    {
        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((+(arr_9 [i_19])))))) ? ((~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (arr_25 [i_19] [i_19 + 1]))))) : (((/* implicit */long long int) (+((~(((/* implicit */int) arr_18 [i_19])))))))));
        var_36 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_19 - 1] [i_19 + 1])) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) min((arr_31 [i_19]), (arr_36 [i_19] [i_19] [i_19])))))))));
        arr_68 [i_19] [i_19] = ((/* implicit */int) var_0);
        /* LoopSeq 1 */
        for (unsigned int i_20 = 0; i_20 < 10; i_20 += 2) 
        {
            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) arr_27 [i_19] [i_19 - 1] [i_19 - 1])))) : (((((/* implicit */_Bool) arr_27 [i_19] [i_19 - 1] [i_19 + 1])) ? (((/* implicit */int) arr_27 [i_19] [i_19 + 1] [i_19 - 1])) : (((/* implicit */int) arr_27 [i_19] [i_19 - 1] [i_19 + 1]))))));
            arr_72 [i_19] = ((/* implicit */short) var_0);
            var_38 = (((!(((/* implicit */_Bool) arr_11 [i_19])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [7ULL] [i_20])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_61 [i_20]))))) ? (min((((/* implicit */long long int) var_9)), (287104476244869120LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_19 + 1] [i_19 - 1] [i_19] [i_19 + 1])))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_1 [i_19] [i_20]))))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) arr_10 [i_20])) : (14126402909212249828ULL))))));
            /* LoopSeq 2 */
            for (long long int i_21 = 1; i_21 < 8; i_21 += 1) 
            {
                arr_77 [4LL] [i_20] [i_19] [3ULL] = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) + ((-(((/* implicit */int) arr_6 [i_19 - 1]))))));
                arr_78 [i_19] [i_21 + 2] = min((((((/* implicit */_Bool) arr_36 [i_19 - 1] [i_21 + 2] [i_21])) ? (((/* implicit */int) arr_36 [i_19 + 1] [i_21 - 1] [i_21 + 1])) : (((/* implicit */int) arr_36 [i_19 - 1] [i_21 + 1] [i_19 - 1])))), ((-(((/* implicit */int) arr_36 [i_19 - 1] [i_21 + 1] [i_21])))));
                var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)53584)) ? ((-(max((2650464573U), (((/* implicit */unsigned int) arr_5 [i_19] [i_19] [i_21])))))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)58426)) : (-725403539)))))))));
                /* LoopSeq 3 */
                for (unsigned int i_22 = 0; i_22 < 10; i_22 += 1) /* same iter space */
                {
                    var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) 210625393473725424LL))));
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (arr_15 [i_19])))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) (~(var_0)))) ? (max((arr_59 [i_19]), (287104476244869131LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) -602643183)) : (arr_17 [i_21] [i_21])))))) : (min((((/* implicit */long long int) arr_28 [i_21 + 1] [i_21 + 2])), (arr_16 [i_21 - 1] [i_21 + 1])))));
                    var_42 -= ((/* implicit */_Bool) (~((+(((((/* implicit */_Bool) 287104476244869120LL)) ? (2387646625U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_20])))))))));
                    var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) (((-(max((16367205972366154902ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237))))))));
                    arr_82 [i_19] [i_19] [i_21] [i_19] [5ULL] [i_19] = ((/* implicit */int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)50742))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2097120)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))))))));
                }
                for (unsigned int i_23 = 0; i_23 < 10; i_23 += 1) /* same iter space */
                {
                    arr_86 [i_19] [i_19] [i_19] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_26 [i_19])) && (((/* implicit */_Bool) var_4)))) ? (max((arr_70 [i_19] [i_19] [i_23]), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)6851)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)44)))))) : (max((min((2371729231224216599LL), (((/* implicit */long long int) 822391858)))), (((/* implicit */long long int) arr_44 [i_19] [i_19] [i_19]))))));
                    var_44 = var_3;
                }
                for (unsigned int i_24 = 0; i_24 < 10; i_24 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (signed char i_25 = 0; i_25 < 10; i_25 += 1) /* same iter space */
                    {
                        arr_93 [i_19] [i_20] = ((/* implicit */unsigned long long int) min((arr_74 [i_19] [4] [i_21 + 2] [i_19]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_25 [i_19] [i_20])))))));
                        arr_94 [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((-(arr_30 [i_19]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_24])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_18 [i_25])))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_21]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_0)))) ? (((/* implicit */long long int) 2147483630)) : (arr_59 [i_24])))));
                        arr_95 [i_19] [i_19] [i_19] [i_24] [i_19] = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)104)), (-1329637600)));
                    }
                    for (signed char i_26 = 0; i_26 < 10; i_26 += 1) /* same iter space */
                    {
                        var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) ? (min((((/* implicit */unsigned long long int) min(((_Bool)0), (var_13)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)104))) % (15107152871409917049ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) arr_7 [i_19] [i_20] [i_20]))))))));
                        var_46 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(14797619600708223416ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_19] [0U] [i_21 + 2] [i_24])) || (((/* implicit */_Bool) arr_1 [i_19] [i_20])))))) : (((unsigned long long int) (_Bool)0)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35688)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (11514004488941661525ULL))))))))));
                    }
                    arr_99 [i_19 - 1] [i_19] = (~(((var_12) ? (((/* implicit */long long int) min((arr_62 [i_21 + 2] [1ULL]), (((/* implicit */int) var_13))))) : (((var_1) | (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_19]))))))));
                }
            }
            for (signed char i_27 = 4; i_27 < 8; i_27 += 3) 
            {
                arr_102 [i_20] [i_19] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_56 [i_19]))))), (((5322057752166626840ULL) + (var_6))))), (((/* implicit */unsigned long long int) 2147483634))));
                arr_103 [i_19] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_19])) ? (((long long int) (signed char)0)) : ((~(((((/* implicit */_Bool) arr_69 [i_19] [i_27])) ? (arr_40 [i_19] [i_19] [i_19] [i_19 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
            }
            var_47 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_51 [i_19 + 1]), (arr_51 [i_19 + 1])))) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-18111)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (var_5))))))));
        }
        arr_104 [i_19] = ((/* implicit */int) arr_71 [9ULL] [9ULL] [i_19]);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_28 = 3; i_28 < 20; i_28 += 2) 
    {
        for (unsigned int i_29 = 0; i_29 < 22; i_29 += 4) 
        {
            {
                arr_111 [i_28] = ((/* implicit */unsigned char) (~(max((arr_25 [i_28 - 2] [i_29]), (((/* implicit */long long int) var_0))))));
                var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) ((int) (unsigned short)5530)))));
            }
        } 
    } 
}
