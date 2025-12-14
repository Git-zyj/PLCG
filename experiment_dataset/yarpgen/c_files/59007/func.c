/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59007
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((int) -979460584));
        var_17 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) var_7)), (arr_1 [i_0 + 1]))) | (((/* implicit */unsigned long long int) (~((-(var_6))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_14) ^ (((/* implicit */int) var_10))))) & (var_12)))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-77))) | ((-(3LL))))) : (((/* implicit */long long int) ((max((((/* implicit */int) var_8)), (var_9))) | (((((/* implicit */int) (unsigned short)21184)) & (((/* implicit */int) var_10)))))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 4; i_3 < 22; i_3 += 1) 
                    {
                        var_19 &= ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) ((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3])))))), (max((17279122127783005487ULL), (var_12)))))));
                        var_20 &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(_Bool)1] [i_1] [(_Bool)1]))) & (((((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned int) var_9)))) + (((/* implicit */unsigned int) ((var_6) + (((/* implicit */int) var_3)))))))));
                        var_21 = ((/* implicit */int) (((~((-(var_12))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        arr_12 [i_1] [22U] &= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)0))))) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_4 [i_1] [i_1])))));
                        arr_13 [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((-3LL) & (((/* implicit */long long int) var_9))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), ((unsigned short)44349)))) || (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned char)57))))))) | (((/* implicit */int) var_15)))))));
                        var_23 = ((/* implicit */signed char) min((((((arr_1 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (-1454677873) : (((/* implicit */int) var_15))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) var_11)) & (1368810464U))) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))))))));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */signed char) (+(((/* implicit */int) arr_6 [i_2] [i_2] [i_2]))));
                        var_25 = ((/* implicit */unsigned short) (+(arr_9 [i_2] [i_1] [i_2] [i_6])));
                    }
                    arr_18 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)46694)) + (1576820665)))) & (max((((/* implicit */unsigned long long int) (signed char)-117)), (var_2)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_0)) + (arr_19 [i_7])))) + (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_20 [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)768)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44349))) : (2LL)));
        var_28 = ((/* implicit */unsigned int) (-(((var_12) | (var_12)))));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_8])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_8]))) & (2874670203U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_8]))))))));
        var_30 &= ((/* implicit */int) (!(((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_19 [i_8]))))));
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
    {
        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(2147483647)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)21201)) : (((/* implicit */int) arr_24 [i_9]))))) : ((~(var_13)))));
        arr_28 [i_9] = ((/* implicit */signed char) ((((/* implicit */long long int) ((32) | (var_9)))) + (((arr_4 [i_9] [i_9]) + (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
        /* LoopSeq 1 */
        for (signed char i_10 = 0; i_10 < 14; i_10 += 4) 
        {
            arr_33 [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) arr_6 [i_10] [i_9] [i_10])) : (var_14)))) - (var_4)));
            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_10] [i_9]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)12914)) : (var_9)))) : (arr_9 [i_10] [i_10] [i_9] [i_10])));
            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? ((~(((/* implicit */int) (signed char)116)))) : (((/* implicit */int) ((short) (-2147483647 - 1))))));
            arr_34 [i_10] [i_9] [i_9] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_29 [i_9] [i_10]))))));
        }
    }
    var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) var_7))));
    var_35 = ((/* implicit */_Bool) max(((~(var_9))), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_5)))))))));
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 22; i_11 += 3) 
    {
        for (unsigned short i_12 = 4; i_12 < 20; i_12 += 2) 
        {
            {
                var_36 &= ((/* implicit */int) ((((1151529850257325549ULL) - (((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_11]))))))) - (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_11] [i_11]))) - (arr_20 [i_11] [i_12]))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44351))))))));
                var_37 &= ((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_12 - 3] [i_11]))) : (var_13))), (((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_12 - 2] [i_11])))))));
                /* LoopSeq 3 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 22; i_14 += 2) 
                    {
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_38 [i_12 - 2] [i_12 - 3])) | ((~(((/* implicit */int) var_5))))));
                        arr_47 [i_13] [i_14] [i_13] [i_13] [i_12] [i_13] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) | (((/* implicit */int) arr_46 [i_12] [i_12] [i_12] [i_12] [i_12]))))) + (((var_4) & (((/* implicit */unsigned int) var_11))))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_42 [i_12] [i_12] [i_12])) - (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) ((var_2) * (((/* implicit */unsigned long long int) arr_9 [i_12] [i_12] [i_12] [i_15]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_21 [i_11])))) : (max((var_9), (((/* implicit */int) (signed char)-112)))))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_40 = ((/* implicit */int) ((max((arr_9 [i_13] [i_12 - 1] [i_11] [i_13]), (arr_9 [i_13] [i_12 - 2] [i_11] [i_13]))) | (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_12 - 3])))))));
                            var_41 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_39 [i_12 - 2] [i_12 - 4])) - (((/* implicit */int) arr_37 [i_12 - 1]))))));
                            arr_53 [i_11] [i_12] [i_11] [i_13] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((3479793731U), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)27500)))))))) ? (((/* implicit */long long int) max((((((/* implicit */int) arr_40 [i_11] [i_13] [i_11])) ^ (arr_7 [i_11] [i_13]))), (((((/* implicit */_Bool) arr_51 [i_11] [i_13] [i_13] [i_15] [i_16] [i_11] [i_13])) ? (((/* implicit */int) (unsigned short)44210)) : (var_9)))))) : (((max((var_7), (1530993470552331728LL))) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-116)))))));
                        }
                        var_42 = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_11]))) : (var_13))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)46690), (var_3))))) & (var_12)))));
                    }
                    arr_54 [i_11] [i_13] [i_13] [i_11] = ((/* implicit */signed char) arr_10 [i_13] [i_12] [i_12] [i_12] [i_11]);
                    var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) min(((((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned long long int) var_7)) : (max((((/* implicit */unsigned long long int) (signed char)30)), (var_13))))), (((var_13) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_20 [i_12] [i_12]) : (((/* implicit */long long int) var_9))))))))))));
                    arr_55 [i_13] [i_12] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_11] [i_11] [i_12] [i_13] [i_13]))))), (max((var_2), (((/* implicit */unsigned long long int) var_9))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_11] [i_12] [i_11] [i_13] [i_13])) | (((/* implicit */int) arr_37 [i_11]))))) | (((35115652612096ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_45 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 - 2])) | (((((/* implicit */int) arr_11 [i_11] [i_11] [i_11] [i_13])) + (((/* implicit */int) arr_10 [i_11] [i_11] [i_11] [i_12] [i_11])))))))));
                }
                for (signed char i_17 = 3; i_17 < 21; i_17 += 2) 
                {
                    arr_59 [i_11] [i_12] [i_12] [i_17] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)58)), (5659332669452219593ULL))))));
                    var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_12 + 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_12 - 3]), (((/* implicit */unsigned char) arr_40 [i_17 - 2] [i_17] [i_17])))))) : (max((576460752303292416LL), (((/* implicit */long long int) arr_40 [i_17 + 1] [i_17] [i_17]))))));
                    arr_60 [i_17] [i_17] = ((/* implicit */_Bool) arr_42 [i_17] [i_12] [i_11]);
                }
                /* vectorizable */
                for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 3) 
                {
                    var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) (-(((((/* implicit */int) arr_56 [i_18])) + (((/* implicit */int) (unsigned short)46050)))))))));
                    var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) (~(((var_13) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_11]))))))))));
                    var_47 = ((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)55)))) & (((/* implicit */int) (signed char)-28))));
                    arr_64 [i_11] = ((/* implicit */_Bool) arr_16 [i_12] [i_12 - 3] [i_12]);
                    var_48 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_4 [i_11] [i_12])) & (0ULL)));
                }
            }
        } 
    } 
}
