/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74363
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
    var_10 *= ((/* implicit */short) ((signed char) 444982574U));
    var_11 -= ((/* implicit */short) (unsigned short)21933);
    var_12 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */short) 1065353216U);
        var_14 = ((/* implicit */int) (~(max((3585132816U), (arr_0 [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (signed char i_3 = 2; i_3 < 20; i_3 += 2) 
            {
                {
                    arr_13 [15LL] [15LL] [15LL] = ((/* implicit */unsigned short) (unsigned char)247);
                    /* LoopNest 2 */
                    for (signed char i_4 = 2; i_4 < 20; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) 14717454956867944404ULL)) ? (((/* implicit */int) arr_5 [i_4 + 2] [i_3 - 1])) : (((/* implicit */int) (short)-1189))))))));
                                var_16 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))), (((((/* implicit */_Bool) -1173923200)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-84))) : (12752086410574940538ULL))))), (((/* implicit */unsigned long long int) (signed char)-55))));
                                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (signed char)84))));
                                var_18 += ((unsigned int) (short)-17879);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_4 [(short)10] [(unsigned short)15]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17879))) : (var_1)))) ? (min((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-7082387663080580747LL))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)63687)) ? (((/* implicit */int) (unsigned short)37598)) : (((/* implicit */int) (unsigned short)27937)))) | (((/* implicit */int) (short)-1189))))))))));
                        var_20 -= ((/* implicit */unsigned char) var_7);
                        arr_21 [(short)7] [(short)7] [7LL] [(signed char)21] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned long long int) var_5))))) ? (((unsigned long long int) (unsigned short)9750)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)17878)) : (((/* implicit */int) (signed char)86)))))))) ? (((((/* implicit */_Bool) (short)24583)) ? (((/* implicit */int) (unsigned short)44422)) : (((/* implicit */int) (unsigned short)37674)))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) < (((/* implicit */int) var_9)))))));
                        var_21 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3 + 1] [i_3 - 2] [(signed char)0] [i_3 + 2])) ? (arr_8 [i_3 + 2]) : (arr_8 [i_3 + 2]))))));
                    }
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            var_22 = ((/* implicit */_Bool) var_9);
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((((/* implicit */_Bool) 21U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17879))) : (5325115995166218060ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))));
                            arr_29 [(short)7] [8] [(short)7] [(short)7] [(short)7] [(short)7] = ((/* implicit */long long int) arr_6 [20LL]);
                        }
                        for (unsigned int i_9 = 1; i_9 < 21; i_9 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned short) (~(((((/* implicit */int) (signed char)-87)) | (((/* implicit */int) var_2))))));
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [i_9 - 1] [(short)21] [i_3 + 2] [i_3 + 2]))))) ? (((((/* implicit */_Bool) var_7)) ? (((((var_5) + (2147483647))) << (((((((/* implicit */int) (short)-17879)) + (17887))) - (6))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_25 [i_1] [i_1] [(unsigned char)9] [(unsigned char)11] [(unsigned char)9] [(unsigned char)1])))))) : ((+(((/* implicit */int) arr_23 [(short)17] [(short)17] [(short)17]))))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) 4901288005925640481LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17877)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (3293065217528315971LL))))))) : (((/* implicit */int) arr_5 [i_1] [(signed char)3])))))));
                        }
                        for (unsigned int i_10 = 1; i_10 < 21; i_10 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned int) -3048428797508430654LL);
                            var_28 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 3023799660U))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-105))) : (max((-3048428797508430654LL), (((/* implicit */long long int) var_0))))));
                        }
                        for (unsigned int i_11 = 1; i_11 < 21; i_11 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)16383))) ? (((((/* implicit */int) var_7)) >> (((1258604161643335690ULL) - (1258604161643335663ULL))))) : (var_5)));
                            var_30 = ((/* implicit */unsigned short) arr_17 [i_3] [i_3] [(_Bool)1] [i_3] [(signed char)18] [i_3] [(_Bool)1]);
                            arr_39 [(short)6] [(short)6] [(short)6] [(short)6] [(short)6] = ((/* implicit */long long int) ((signed char) ((((15794870071216645584ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (4974761496526699600ULL))))));
                        }
                        var_31 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_1]))) * (((((/* implicit */unsigned long long int) var_5)) * (var_1))))), ((((((_Bool)0) && (((/* implicit */_Bool) (signed char)87)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_3)) ? (arr_12 [(signed char)13] [(unsigned short)11] [(unsigned short)11] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                    }
                    for (long long int i_12 = 0; i_12 < 22; i_12 += 1) /* same iter space */
                    {
                        var_32 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)12964)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24207))) : (6950195303644795374ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4913592753309502699LL)) ? (((/* implicit */int) (unsigned short)12964)) : (((/* implicit */int) (signed char)(-127 - 1))))))));
                        var_33 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - ((((_Bool)1) ? (((/* implicit */int) arr_25 [i_1] [19LL] [5LL] [5LL] [i_1] [i_1])) : (((/* implicit */int) (unsigned short)52572))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) min((((/* implicit */short) (signed char)86)), (var_3))))));
                        var_34 = ((((((/* implicit */_Bool) arr_35 [i_3 + 1] [(short)10] [(short)10] [(short)10] [(signed char)3] [(_Bool)1])) ? (((/* implicit */int) arr_26 [(unsigned char)6] [i_3 + 1] [i_3 - 2] [(unsigned char)6])) : (((/* implicit */int) var_9)))) + (((/* implicit */int) ((((/* implicit */int) arr_26 [(_Bool)1] [i_3 + 1] [i_3 - 2] [(_Bool)1])) != (((/* implicit */int) arr_38 [i_1] [18] [(short)4] [i_3 - 2] [10U] [(signed char)8] [(unsigned short)7]))))));
                        var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)17873)) ? (2890894549010978447LL) : (((/* implicit */long long int) ((/* implicit */int) (short)14294)))))), (((((/* implicit */_Bool) arr_12 [9U] [6LL] [9LL] [i_3 + 2])) ? (((/* implicit */unsigned long long int) 3048428797508430654LL)) : (arr_12 [i_1] [0U] [0U] [i_3 - 2]))))))));
                    }
                    for (long long int i_13 = 0; i_13 < 22; i_13 += 1) /* same iter space */
                    {
                        var_36 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17873)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)86))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17874))) : (min((arr_32 [i_1] [11] [i_1] [(unsigned short)10] [i_13] [(unsigned short)10]), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60007))) : (8034373442525547187ULL)))))));
                        var_37 = ((/* implicit */unsigned long long int) min(((~(((((/* implicit */int) (signed char)103)) * (((/* implicit */int) (short)-1)))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)7)))))))));
                    }
                }
            } 
        } 
        arr_45 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_1] [(signed char)7] [(signed char)17] [i_1])) ? (((/* implicit */unsigned int) 1320486205)) : (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-17888))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_5)) : (arr_0 [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-14294)) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) var_7)))))))));
        var_38 = ((/* implicit */signed char) var_2);
    }
}
