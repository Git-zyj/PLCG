/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86158
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */_Bool) (signed char)-11);
                var_17 &= var_3;
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))) % (6U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (arr_1 [7U])))) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) (_Bool)1))));
                var_18 = ((/* implicit */unsigned char) (signed char)4);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)124))));
        arr_10 [i_2] = ((/* implicit */unsigned int) min(((+(((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_15)))))), (((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)116), ((signed char)-122)))))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (short)-19976))) ? (((/* implicit */int) (signed char)0)) : (max((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2])))));
    }
    /* LoopNest 3 */
    for (signed char i_3 = 3; i_3 < 17; i_3 += 1) 
    {
        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                {
                    var_20 = max(((~((~(4139406070U))))), (((/* implicit */unsigned int) (signed char)15)));
                    /* LoopSeq 4 */
                    for (short i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        arr_22 [i_3 - 1] [i_3 - 1] [i_3 - 1] = ((/* implicit */long long int) 17691892623592695008ULL);
                        var_21 = ((/* implicit */unsigned int) max((var_21), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)105))) : (((((/* implicit */_Bool) var_12)) ? (arr_16 [i_3] [i_3] [i_3] [i_4 + 1]) : (((/* implicit */unsigned int) ((int) (short)32072)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_23 [i_3] [i_4 - 1] [i_3] [i_3] [i_3] [i_3] [(signed char)17]) : (((/* implicit */int) (_Bool)0))))))))));
                            arr_25 [i_3 - 3] [i_4] [i_3 - 3] [i_6] [2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_5] [i_6])) ? (((/* implicit */int) arr_12 [i_7] [i_6])) : (((/* implicit */int) arr_12 [i_4 + 1] [i_3]))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_8 = 3; i_8 < 17; i_8 += 3) 
                        {
                            var_23 = (!(((/* implicit */_Bool) var_4)));
                            var_24 = ((/* implicit */_Bool) min(((~((~(((/* implicit */int) var_10)))))), (((((/* implicit */_Bool) arr_19 [i_3 - 1])) ? (arr_19 [i_4 + 1]) : (((/* implicit */int) (unsigned char)3))))));
                        }
                        for (signed char i_9 = 2; i_9 < 16; i_9 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_3] [i_4] [i_4] [i_9])) ? (((/* implicit */long long int) ((var_5) ? (((/* implicit */int) arr_30 [i_9] [i_9] [i_5] [i_4 + 1] [(unsigned short)5] [i_9] [i_3])) : (((/* implicit */int) arr_30 [i_9 - 1] [i_9] [i_6] [i_4 + 1] [i_4 + 1] [i_9] [i_3 + 1]))))) : (var_0)));
                            arr_31 [i_9] = ((/* implicit */unsigned short) (-(var_9)));
                            arr_32 [i_9] [i_6] [i_9] [i_4 - 1] [i_3 + 1] = ((/* implicit */signed char) var_14);
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 0; i_10 < 18; i_10 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_28 [i_3 - 1] [i_3 - 2] [i_3] [i_4 + 1] [i_4 - 1]))));
                            var_27 = ((/* implicit */signed char) var_0);
                            var_28 = ((((/* implicit */_Bool) arr_13 [i_4 - 1] [i_3 + 1])) ? (((/* implicit */int) (short)32066)) : ((~(((/* implicit */int) arr_29 [i_3] [i_3] [i_10] [i_3] [i_3] [i_10] [i_3 + 1])))));
                        }
                        var_29 = ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) min((arr_34 [i_4 - 1]), (var_14)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 3; i_12 < 16; i_12 += 4) /* same iter space */
                        {
                            arr_39 [i_12 + 1] [i_12] [i_5] [i_12] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))));
                            var_30 &= ((((arr_26 [i_12 + 1] [i_11] [i_3] [i_4 + 1] [i_3]) > (arr_23 [i_3] [i_4] [i_5] [i_5] [i_5] [i_5] [(signed char)15]))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (3528854189U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_11] [i_5] [i_3 - 2] [i_3 - 2]))))));
                        }
                        for (unsigned short i_13 = 3; i_13 < 16; i_13 += 4) /* same iter space */
                        {
                            arr_44 [i_13] [i_11] [i_3] [i_3] [i_3 - 3] [i_3] = arr_19 [i_11];
                            var_31 = ((/* implicit */signed char) 754851450116856599ULL);
                        }
                        arr_45 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (2888836530U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)98))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_14 = 0; i_14 < 18; i_14 += 2) /* same iter space */
                    {
                        var_32 = ((((/* implicit */int) var_3)) * (((/* implicit */int) (signed char)0)));
                        var_33 = ((/* implicit */int) min((var_33), (((((/* implicit */int) arr_24 [i_14] [i_14] [i_14] [i_14] [i_4] [i_3 - 3] [i_3 - 2])) >> (((((/* implicit */int) arr_24 [(unsigned char)9] [i_14] [i_14] [i_14] [i_14] [i_3 + 1] [i_3])) - (28)))))));
                        var_34 = (+(((/* implicit */int) arr_38 [i_3] [i_14] [i_3] [i_4 + 1])));
                        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) arr_28 [i_3 - 2] [i_4 + 1] [i_4 - 1] [i_3 - 1] [i_3 - 2]))));
                    }
                    /* vectorizable */
                    for (signed char i_15 = 0; i_15 < 18; i_15 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_2))));
                        var_37 = ((/* implicit */unsigned short) arr_36 [i_15] [i_3 - 3]);
                        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) (unsigned short)65472))));
                        var_39 = ((/* implicit */_Bool) (~((-(11383781687389592468ULL)))));
                    }
                    arr_52 [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_14)) ? (arr_40 [i_3] [i_3 - 2] [i_3] [i_3] [i_3 - 2] [i_3] [i_3]) : (((/* implicit */int) (signed char)127))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 3) 
    {
        for (int i_17 = 1; i_17 < 18; i_17 += 1) 
        {
            {
                arr_59 [i_17] = var_1;
                var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) max((arr_56 [i_16] [i_16]), (((/* implicit */unsigned short) arr_58 [i_16] [i_16] [i_17])))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_57 [i_17 + 2] [i_17 + 3])) <= (((/* implicit */int) max((arr_54 [i_16]), (((/* implicit */unsigned short) arr_55 [i_17])))))))) : ((~(((/* implicit */int) max((arr_54 [i_17]), (((/* implicit */unsigned short) arr_55 [i_16])))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_18 = 4; i_18 < 18; i_18 += 2) 
                {
                    for (short i_19 = 0; i_19 < 22; i_19 += 3) 
                    {
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            {
                                arr_69 [i_17] [i_19] [i_18] [i_17 + 3] [i_17] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12)))))));
                                var_41 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_17])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */int) var_2))))) : (((arr_67 [i_17]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_17 - 1] [i_18]))))))), (((arr_60 [i_17 + 1] [i_17] [i_17 + 1]) + (arr_60 [i_17 + 4] [i_17] [i_17 + 1])))));
                            }
                        } 
                    } 
                } 
                var_42 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_57 [i_17 + 1] [i_17])) : (((/* implicit */int) arr_57 [i_17 + 3] [i_16]))))) ? (((/* implicit */int) (signed char)127)) : (max(((+(((/* implicit */int) var_14)))), (((/* implicit */int) (signed char)113))))));
                var_43 = ((/* implicit */unsigned short) (((_Bool)0) ? (2922513466U) : (((/* implicit */unsigned int) 693496515))));
            }
        } 
    } 
}
