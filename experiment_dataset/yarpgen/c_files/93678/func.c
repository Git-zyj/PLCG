/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93678
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
    var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_14), (var_11)))) ? (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) (signed char)0))))) : (((/* implicit */int) var_5))))) > (var_0)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)2))))) > (max((((/* implicit */unsigned long long int) var_10)), (((unsigned long long int) var_2))))));
                var_18 = min((((((((/* implicit */_Bool) (unsigned short)44921)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_6)))) - (((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_7)))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_0])) : (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) arr_0 [i_0] [i_1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 3) 
                            {
                                arr_19 [i_3] [i_5] [i_4] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) arr_0 [i_3] [i_3])))))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 1203175144U)) ? (3848540590728259521LL) : (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))))))));
                                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((-(161107445U))))))));
                                arr_20 [i_3] [i_5] [i_4] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((unsigned short) arr_18 [i_6 + 1] [i_6 + 2] [i_6] [i_6 + 3] [i_6] [i_6] [i_6 + 2]))) : (((((/* implicit */_Bool) arr_18 [i_6 + 3] [i_6 - 1] [i_6] [i_6 + 2] [i_6 - 1] [i_6] [i_6 - 1])) ? (((/* implicit */int) (unsigned char)114)) : (((/* implicit */int) var_7))))));
                            }
                            var_20 -= ((/* implicit */unsigned short) (~(7786763081414784918ULL)));
                            /* LoopSeq 2 */
                            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
                            {
                                var_21 &= ((/* implicit */unsigned int) min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)33684))))), (max((var_0), (((/* implicit */long long int) (unsigned char)148))))));
                                var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
                                arr_24 [i_2] [i_2] [i_3] [i_3] [i_5] [i_2] [i_7] = ((/* implicit */int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (unsigned char)120))))) : (((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (arr_15 [i_2] [i_4] [i_3] [i_7]) : (2476621807U)))))));
                                var_23 |= arr_6 [i_5];
                            }
                            /* vectorizable */
                            for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) 
                            {
                                var_24 = ((signed char) ((signed char) 3601878059U));
                                arr_28 [i_2] [i_5] [i_4] [i_3] [i_2] [i_5] = ((/* implicit */_Bool) ((unsigned long long int) arr_21 [i_3] [i_3] [i_4] [i_8] [i_2]));
                            }
                            /* LoopSeq 1 */
                            for (signed char i_9 = 0; i_9 < 18; i_9 += 2) 
                            {
                                var_25 = ((/* implicit */long long int) max((min((((696355586U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [i_2]))))), (693089236U))), (((/* implicit */unsigned int) var_9))));
                                var_26 = ((/* implicit */int) ((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)126))))))) | (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (693089237U)))));
                                var_27 = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_3]))))), (((((/* implicit */_Bool) arr_11 [i_3])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))));
                                var_28 &= ((/* implicit */long long int) ((((_Bool) arr_9 [i_5] [i_9])) ? (max((((/* implicit */unsigned int) arr_9 [i_2] [i_2])), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_9 [i_5] [i_9]), (arr_9 [i_3] [i_5])))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 3) 
                {
                    for (unsigned char i_11 = 1; i_11 < 16; i_11 += 4) 
                    {
                        for (long long int i_12 = 0; i_12 < 18; i_12 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((856594938572180085LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114))))))));
                                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_8))) / (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_35 [i_2] [i_3] [i_10] [i_10] [i_12] [i_12])) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) min((arr_35 [i_11 + 2] [i_11 + 1] [i_11] [i_11] [i_10] [i_10]), ((signed char)-19)))) : (((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) (unsigned char)204))))));
                                var_31 = ((/* implicit */unsigned short) var_4);
                                var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)130))))), (1972426868332020204LL))))));
                                var_33 *= ((/* implicit */unsigned int) (-(((/* implicit */int) var_12))));
                            }
                        } 
                    } 
                } 
                var_34 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)10)), (arr_31 [i_3] [i_2] [12U] [i_3] [12U] [i_2] [i_2])))), (max((1328015830), (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) var_9))))) ? ((+(var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_2)))))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34711))) : (3173726638U)))))));
                var_35 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) 2960803252U)), (arr_33 [i_2] [i_3] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_22 [i_3] [i_3] [i_2] [i_2] [i_2])))))));
            }
        } 
    } 
}
