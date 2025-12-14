/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88071
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
    var_10 = ((((((/* implicit */_Bool) 3304181863955916407LL)) ? (((/* implicit */int) (_Bool)1)) : (-1))) >> (((min((var_9), ((~(((/* implicit */int) (unsigned short)30723)))))) + (1792972271))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned short) max((((-3304181863955916402LL) / (3304181863955916400LL))), (((/* implicit */long long int) ((arr_0 [9U]) * (((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    var_11 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)189)), (var_0)))))) ? ((+((-(var_9))))) : (min((min((((/* implicit */int) var_7)), (var_1))), (((/* implicit */int) var_3))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (unsigned short i_3 = 3; i_3 < 10; i_3 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        arr_15 [i_1] [i_3] [(unsigned short)12] [8U] [8U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3 + 3] [i_3])) ? (arr_8 [i_3 + 1] [i_3 + 3] [i_3]) : (arr_8 [i_3 + 1] [i_3 + 3] [i_3])));
                        var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_12 [i_3 + 3] [i_3 + 2]))));
                    }
                    for (unsigned short i_5 = 3; i_5 < 11; i_5 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_1] [i_2] [i_5] [i_5] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 410855696U)) ? (-9223372036854775788LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_13 = ((/* implicit */unsigned char) ((int) arr_10 [7LL] [i_3 + 3] [7LL] [i_5 - 3]));
                            arr_22 [i_1] [i_1] [i_1] [i_3] [(unsigned short)12] [i_5] [i_2] &= ((/* implicit */int) ((_Bool) 2116471424U));
                            var_14 = ((/* implicit */unsigned int) (_Bool)1);
                            var_15 = ((/* implicit */int) ((arr_17 [i_3 - 2] [i_3]) ? (arr_10 [i_5 - 3] [i_5 + 1] [i_3 + 2] [i_3 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3 + 2] [i_3 - 3])))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned char) arr_13 [i_1] [i_3] [i_5] [i_3]);
                            var_17 = (-(((/* implicit */int) arr_5 [i_3 - 3])));
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 3315600660U)) ? (9223372036854775787LL) : (((/* implicit */long long int) 0U))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_5 [i_5 - 2]))));
                            arr_29 [i_1] [i_2] [i_2] [i_5 - 1] [i_3] = ((/* implicit */int) ((long long int) arr_19 [i_1] [(_Bool)1] [i_3 + 2] [i_5] [i_5] [i_3]));
                            var_20 = ((/* implicit */unsigned short) arr_2 [i_1]);
                        }
                        var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_16 [i_3]))));
                    }
                    var_22 = ((/* implicit */unsigned short) ((3304181863955916401LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)34)))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 2; i_10 < 12; i_10 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_3] [i_3 + 3] [i_10 - 2])) ? (((/* implicit */int) ((unsigned char) arr_11 [i_3] [i_2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)222)))))));
                                arr_36 [i_2] [i_2] [i_3] [i_3 + 3] = ((/* implicit */int) -5591504066468674452LL);
                            }
                        } 
                    } 
                    var_24 ^= ((/* implicit */unsigned char) arr_26 [i_3] [10] [(unsigned short)2] [i_1] [i_1] [i_1]);
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_1])) ? (9223372036854775796LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42812)))))) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1]))));
    }
    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_12 = 0; i_12 < 16; i_12 += 3) 
        {
            for (int i_13 = 0; i_13 < 16; i_13 += 2) 
            {
                for (int i_14 = 0; i_14 < 16; i_14 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) max(((+(-9223372036854775791LL))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)35)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_15 = 0; i_15 < 16; i_15 += 2) 
                        {
                            arr_48 [i_15] [i_14] [i_11] [i_11] [i_11] = ((/* implicit */int) arr_41 [i_12] [i_12] [i_14] [i_14]);
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) 2147483647))));
                            var_28 = ((/* implicit */long long int) max((var_28), (((((/* implicit */_Bool) arr_40 [i_12] [i_11])) ? (((/* implicit */long long int) arr_40 [i_12] [i_13])) : (-3304181863955916416LL)))));
                            var_29 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)227))) != (arr_46 [i_13]));
                        }
                        for (int i_16 = 0; i_16 < 16; i_16 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned char) ((unsigned short) (_Bool)1));
                            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (2147483624) : (((/* implicit */int) (unsigned short)65535))))) ? (arr_49 [i_14] [i_14] [i_13]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0)))) ? (((((/* implicit */_Bool) arr_38 [i_16])) ? (var_9) : (((/* implicit */int) arr_50 [i_11] [i_12] [i_13] [i_14] [i_16])))) : (max((((/* implicit */int) (unsigned char)186)), (-2147483624))))))));
                        }
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 8522825728LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)2)))))));
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((unsigned short) (unsigned short)65516))));
                        var_34 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483615)) ? (-9223372036854775788LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                    }
                } 
            } 
        } 
        arr_51 [i_11] = ((/* implicit */unsigned char) (-(-3787023560980301828LL)));
    }
    for (unsigned short i_17 = 0; i_17 < 16; i_17 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) min(((+(arr_47 [i_17] [i_17] [(unsigned short)8] [i_17] [i_17]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_50 [i_17] [i_17] [i_17] [i_17] [i_17]))))))))));
        var_36 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_49 [(unsigned short)8] [i_17] [(unsigned short)8])) ? (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775804LL)) || (((/* implicit */_Bool) arr_46 [i_17]))))) : (-1599935728)));
    }
    for (unsigned short i_18 = 0; i_18 < 16; i_18 += 1) /* same iter space */
    {
        arr_56 [(_Bool)1] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_18])) ? (((/* implicit */int) arr_54 [i_18])) : (arr_44 [i_18])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_50 [i_18] [i_18] [i_18] [i_18] [i_18]))))) : (min((410855696U), (((/* implicit */unsigned int) (_Bool)1))))));
        /* LoopNest 3 */
        for (unsigned short i_19 = 2; i_19 < 15; i_19 += 2) 
        {
            for (unsigned int i_20 = 3; i_20 < 14; i_20 += 3) 
            {
                for (unsigned short i_21 = 2; i_21 < 15; i_21 += 3) 
                {
                    {
                        arr_64 [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_19] [i_19] [i_19])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)227))) : (arr_61 [i_18] [i_19] [i_20 + 1])))) && (((/* implicit */_Bool) 0LL))));
                        arr_65 [(unsigned short)10] [(unsigned short)10] [i_18] = ((/* implicit */unsigned short) (_Bool)1);
                    }
                } 
            } 
        } 
        var_37 = ((/* implicit */long long int) min((((int) ((((/* implicit */_Bool) (unsigned short)0)) ? (410855712U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15)))))), (((/* implicit */int) (!(((((/* implicit */_Bool) arr_61 [i_18] [i_18] [i_18])) || (((/* implicit */_Bool) var_3)))))))));
        var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (-(((int) ((((/* implicit */_Bool) arr_54 [0LL])) ? (((/* implicit */int) var_3)) : (arr_59 [i_18] [i_18] [i_18])))))))));
        arr_66 [i_18] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) min(((unsigned short)7893), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) arr_55 [i_18] [i_18])) : (((/* implicit */int) (_Bool)1)))));
    }
}
