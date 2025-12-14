/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82488
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) arr_0 [(_Bool)1] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            arr_11 [i_0] = var_10;
                            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_2] [(unsigned short)9])))))));
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (short)-8751)))) * ((((-(((/* implicit */int) arr_0 [i_0] [i_0])))) & (((((/* implicit */_Bool) arr_6 [11] [i_1] [i_1] [i_2] [i_3] [i_4 + 3])) ? (((/* implicit */int) arr_7 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) : (-1027406514))))))))));
                        }
                        for (unsigned char i_5 = 4; i_5 < 24; i_5 += 2) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */int) ((unsigned short) var_9))) : (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_5 - 4] [i_3] [i_5 - 1] [(unsigned short)1]))));
                            var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_1] [i_1] [23] [i_1 - 1] [i_5] [i_5 - 3]))));
                        }
                        for (unsigned char i_6 = 4; i_6 < 24; i_6 += 2) /* same iter space */
                        {
                            arr_18 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned short) ((((int) arr_7 [i_0] [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_6 - 2] [i_6 + 1])) & (var_9)));
                            var_19 = ((/* implicit */_Bool) ((((_Bool) (short)8750)) ? ((-(((/* implicit */int) var_13)))) : (((/* implicit */int) arr_13 [i_6 - 3] [(short)10] [i_6] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 4]))));
                        }
                        /* LoopSeq 3 */
                        for (int i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            var_20 += ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) | (-867389967)))) * (((((/* implicit */_Bool) (short)14161)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71)))))))));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) -1))));
                            var_22 = ((/* implicit */int) ((unsigned int) ((max((var_12), (arr_10 [i_0] [i_1] [i_3] [(signed char)12] [i_7] [i_0]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_10)) * (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_7] [i_3] [i_2] [(unsigned short)1] [i_1] [(short)9]))) : (min((var_12), (((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_1])))))))));
                        }
                        for (int i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            var_24 = arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) arr_14 [i_1] [i_1 + 1] [(_Bool)1] [i_1] [i_1] [i_1 + 1] [i_1 - 2]))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_13 [i_0] [i_3] [i_2] [i_1] [i_8] [i_8] [i_1])), (var_8)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [(signed char)10] [i_2] [(signed char)13] [i_3] [i_8])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [10] [i_1] [i_0] [i_1]))))) : ((-(arr_20 [i_0] [(short)10] [(short)16] [i_0] [(unsigned short)18]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_4))) << ((((-(15360))) + (15366))))))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            arr_28 [i_0] [i_1] [i_2] = ((/* implicit */signed char) var_6);
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [(unsigned char)15] [(_Bool)1])) & (((((/* implicit */int) (short)8750)) << (((((/* implicit */int) max(((unsigned short)6186), (((/* implicit */unsigned short) (short)8750))))) - (8739)))))));
                            var_26 = ((/* implicit */unsigned long long int) (!(((_Bool) arr_22 [i_0] [(_Bool)1] [i_2] [i_1] [i_0]))));
                            arr_29 [i_0] [(unsigned short)24] [(signed char)10] [i_3] [i_9] = ((/* implicit */short) (+(4294967295U)));
                        }
                        var_27 = ((/* implicit */unsigned int) max((var_27), (min(((-(max((var_7), (((/* implicit */unsigned int) arr_26 [(unsigned char)24] [i_1] [i_3] [i_2] [(unsigned char)4] [i_3] [i_3])))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3)))))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_10 = 0; i_10 < 10; i_10 += 1) 
    {
        arr_32 [i_10] [8] = (~(((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_10] [i_10] [i_10] [i_10] [i_10])) ? (var_5) : (((/* implicit */int) arr_0 [i_10] [i_10])))));
        /* LoopNest 2 */
        for (signed char i_11 = 3; i_11 < 8; i_11 += 2) 
        {
            for (short i_12 = 3; i_12 < 9; i_12 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        arr_41 [i_10] [i_13 + 1] [i_12] [i_13] [i_12] [i_11] = ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_5 [i_11 - 1] [i_12 - 2] [i_10] [i_13 + 1])));
                        /* LoopSeq 2 */
                        for (int i_14 = 3; i_14 < 8; i_14 += 2) 
                        {
                            arr_44 [i_11] [i_12] [i_10] = var_1;
                            var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))));
                            arr_45 [i_10] [(unsigned short)4] [i_12] [i_10] [i_14 + 1] [(unsigned short)0] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (short)8751))));
                        }
                        for (int i_15 = 2; i_15 < 8; i_15 += 1) 
                        {
                            arr_50 [i_10] = ((/* implicit */unsigned short) ((int) arr_46 [i_15 + 1] [i_11 - 1]));
                            arr_51 [i_13 + 1] [i_10] [i_13 + 1] [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_42 [i_12 - 1] [(short)3] [i_12] [i_10] [i_12 - 1])) * (((/* implicit */int) arr_33 [i_10] [i_11 + 1] [0]))));
                            arr_52 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)22)) ? (arr_46 [3ULL] [i_11]) : (((/* implicit */int) arr_31 [i_10])))) * (((int) var_11))));
                            arr_53 [i_11] [i_11] [i_10] [i_11 - 3] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_11 + 1] [i_12] [i_12] [i_12 - 2] [i_13 + 1] [i_10]))));
                        }
                        var_29 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_10] [i_11 + 2] [i_11] [i_12] [i_12 - 2] [0]))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (short i_17 = 0; i_17 < 10; i_17 += 2) 
                        {
                            {
                                arr_61 [i_10] [i_11] [i_12] = min((((/* implicit */int) max(((unsigned short)6186), (((/* implicit */unsigned short) (_Bool)1))))), (((int) (-(((/* implicit */int) (short)-15113))))));
                                arr_62 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))))), (var_6)))) << (((arr_13 [i_10] [i_11 + 1] [i_11 - 1] [i_11] [i_12 - 1] [i_16] [i_17]) ? (2964950365U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned int) ((unsigned short) (-(((((/* implicit */_Bool) 2036957998U)) ? (((/* implicit */int) arr_30 [i_10] [i_11])) : (((/* implicit */int) arr_22 [i_10] [i_11] [i_11] [9] [i_10])))))));
                }
            } 
        } 
        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((unsigned int) (-(max((var_7), (1U)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_18 = 0; i_18 < 10; i_18 += 3) 
        {
            var_32 = ((/* implicit */short) (-((-(((/* implicit */int) (short)32767))))));
            arr_65 [i_18] [i_10] [9] = ((/* implicit */short) (_Bool)1);
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 10; i_19 += 4) 
            {
                for (unsigned char i_20 = 0; i_20 < 10; i_20 += 1) 
                {
                    {
                        arr_73 [(short)6] [i_18] [i_18] [i_10] [i_19] [(short)5] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [i_10] [3] [i_10])))) ? (var_5) : (((/* implicit */int) ((unsigned short) var_3)))));
                        var_33 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_10)) < (arr_56 [i_10] [i_18] [i_18] [i_18]))) ? (((/* implicit */unsigned long long int) arr_46 [i_18] [i_18])) : ((+(var_12)))));
                    }
                } 
            } 
        }
    }
    for (unsigned int i_21 = 0; i_21 < 25; i_21 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            arr_82 [(signed char)16] [i_22] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [(short)20] [i_22] [i_22] [3] [i_21] [i_21])) % (((/* implicit */int) min((arr_6 [i_21] [i_21] [11] [i_22] [i_22] [i_21]), (arr_6 [i_21] [i_21] [i_21] [i_22] [i_21] [i_22]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_23 = 3; i_23 < 24; i_23 += 2) 
            {
                for (unsigned short i_24 = 0; i_24 < 25; i_24 += 4) 
                {
                    {
                        arr_88 [i_21] [i_21] [i_23] [i_24] [i_24] [i_22] &= ((((_Bool) arr_9 [(short)18] [i_22] [i_22] [(unsigned short)14] [i_23 + 1] [i_23 - 2])) ? (((/* implicit */int) ((unsigned short) arr_9 [i_21] [i_22] [i_22] [(unsigned short)20] [i_23 + 1] [i_23 - 2]))) : (((/* implicit */int) ((_Bool) arr_9 [9] [22] [i_23] [i_23] [i_23 + 1] [i_23 - 2]))));
                        var_34 = ((/* implicit */short) (_Bool)1);
                        var_35 = (-((((+(((/* implicit */int) (unsigned short)29512)))) << (((((/* implicit */int) arr_14 [i_21] [i_22] [i_23] [16] [i_24] [i_22] [i_24])) - (45939))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                for (short i_26 = 0; i_26 < 25; i_26 += 4) 
                {
                    {
                        arr_93 [19U] [i_25] |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)10652)) ? (((/* implicit */int) arr_23 [i_26] [i_26] [i_25] [i_22] [i_26] [16U])) : ((+(-1529832908))))), ((-(((/* implicit */int) arr_2 [i_21] [i_26] [i_26]))))));
                        var_36 = ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)32767)));
                    }
                } 
            } 
        }
        arr_94 [i_21] [i_21] = ((/* implicit */unsigned char) ((int) max((((/* implicit */unsigned short) arr_16 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] [i_21])), (arr_78 [i_21] [i_21]))));
        /* LoopNest 2 */
        for (unsigned short i_27 = 0; i_27 < 25; i_27 += 2) 
        {
            for (unsigned short i_28 = 0; i_28 < 25; i_28 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_29 = 3; i_29 < 22; i_29 += 1) 
                    {
                        for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) 
                        {
                            {
                                arr_104 [i_21] [i_27] [(unsigned char)1] [i_29] [i_30] = ((/* implicit */short) (+(max((var_12), (((/* implicit */unsigned long long int) arr_19 [i_21] [i_21]))))));
                                var_37 = ((int) ((-1815590931) & (474439696)));
                            }
                        } 
                    } 
                    arr_105 [i_21] [i_28] [i_27] = min(((unsigned short)65534), (((/* implicit */unsigned short) var_11)));
                    arr_106 [(_Bool)1] [i_21] [(unsigned short)6] [i_21] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_102 [i_21] [i_27] [i_27] [i_28] [i_28])) ? (((/* implicit */int) arr_102 [i_21] [i_27] [(unsigned short)7] [i_27] [i_28])) : (((/* implicit */int) arr_102 [i_21] [i_21] [i_21] [i_21] [i_21]))))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (((signed char) (unsigned short)25718))))) : (((/* implicit */int) var_1)));
                }
            } 
        } 
    }
    var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) var_9))));
    var_39 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) (-(var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (min((var_8), (((/* implicit */unsigned int) (short)(-32767 - 1))))) : (var_7)))) : (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_1)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) var_3))))));
}
