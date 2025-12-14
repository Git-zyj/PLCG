/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68840
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
    var_19 -= ((/* implicit */unsigned short) min((((/* implicit */short) (((!(((/* implicit */_Bool) var_0)))) && ((!(((/* implicit */_Bool) (unsigned short)65535))))))), (var_4)));
    var_20 = ((/* implicit */long long int) var_0);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_21 ^= ((/* implicit */signed char) max(((-(17521654146145191189ULL))), (min((var_5), (((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_0 - 1]))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1])) ? (var_0) : (var_0)))) ? (max((var_12), (((/* implicit */unsigned long long int) var_16)))) : (((/* implicit */unsigned long long int) (~(var_17))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_10 [i_0]))), (((/* implicit */unsigned long long int) var_2))));
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2] [i_1 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34659))) : (var_9)))), ((-(arr_2 [i_0 + 1]))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = (-(var_15));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) min(((-(arr_8 [i_0 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) >= (739701283)))))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) max((3150898652U), (arr_0 [i_0] [i_1])));
                                arr_21 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)148)), (min((((/* implicit */unsigned int) (unsigned char)108)), (var_8)))))), (max((((((/* implicit */_Bool) arr_4 [i_5])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34659))))), (((/* implicit */unsigned long long int) var_4))))));
                                var_27 = ((/* implicit */long long int) max(((-(((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) (unsigned short)65527)) : (-739701283))))), (((/* implicit */int) var_14))));
                                var_28 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_0 [i_2] [i_0])) ? ((-(202161427269622452ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))), (max((18446744073709551615ULL), (((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned int) max((arr_10 [i_0]), ((-(arr_10 [i_0])))));
                                var_30 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)716)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)58792)))), (((/* implicit */int) (unsigned short)6744))));
                                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)148)), (var_15)))))))));
                                var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) min((arr_10 [i_10]), ((+(min((4822639847133249837ULL), (((/* implicit */unsigned long long int) (unsigned short)26713)))))))))));
                            }
                        } 
                    } 
                    arr_32 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) -739701283);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
                        arr_37 [i_0] [i_0] [i_7] [i_0] [i_8] [i_0 - 1] = ((/* implicit */int) var_3);
                        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_8 [i_11])));
                        var_35 = ((/* implicit */unsigned long long int) (unsigned short)29601);
                    }
                    for (unsigned int i_12 = 0; i_12 < 23; i_12 += 1) /* same iter space */
                    {
                        var_36 -= ((/* implicit */unsigned short) var_5);
                        /* LoopSeq 2 */
                        for (short i_13 = 1; i_13 < 22; i_13 += 1) 
                        {
                            arr_43 [i_0] [i_7] [(short)18] [i_12] [i_12] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29550)) ? (((/* implicit */int) (unsigned short)58792)) : (((/* implicit */int) (signed char)-78))))) ? ((-(var_8))) : (max((var_9), (((/* implicit */unsigned int) 739701283))))))));
                            var_37 = ((/* implicit */unsigned int) var_18);
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 2) 
                        {
                            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_14) ? (101725138171326674ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (min((min((arr_34 [i_0] [i_0] [i_14] [i_0]), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
                            var_39 = ((/* implicit */unsigned int) max((min((4822639847133249837ULL), (((/* implicit */unsigned long long int) -739701283)))), (min((((/* implicit */unsigned long long int) var_13)), (18446744073709551615ULL)))));
                            var_40 = ((/* implicit */short) arr_26 [i_0 - 1] [i_0 - 1]);
                        }
                    }
                    for (unsigned int i_15 = 0; i_15 < 23; i_15 += 1) /* same iter space */
                    {
                        arr_50 [i_0] [i_7] [i_8] [i_0] = ((/* implicit */unsigned int) var_3);
                        var_41 = ((/* implicit */unsigned short) var_2);
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_8])), (var_15)))), (var_12)))) && (((/* implicit */_Bool) min((max((var_17), (arr_41 [i_0 - 1] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) var_16)))))));
                    }
                    var_43 = ((/* implicit */long long int) min((((/* implicit */short) arr_4 [i_7])), ((short)-1956)));
                }
            } 
        } 
        var_44 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)89))));
    }
}
