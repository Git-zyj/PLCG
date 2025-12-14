/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66232
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_11) : (var_11))))) ? (((/* implicit */unsigned long long int) ((((var_12) > (var_12))) ? (var_11) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_16)), (var_12))))))) : (((((/* implicit */_Bool) ((short) (signed char)127))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (-1892606367766848373LL) : (((/* implicit */long long int) 1208551240))))) : (var_7)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_5))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_16), (((/* implicit */short) var_8))))), (((((/* implicit */_Bool) var_16)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))))));
        var_19 -= ((/* implicit */unsigned int) arr_0 [i_0] [19]);
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) 6782016652760952921LL))));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) arr_4 [i_1]);
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) var_14)) <= (((/* implicit */int) (signed char)-122)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)122)) > (((/* implicit */int) (signed char)-100)))))) : ((-(((unsigned long long int) var_16))))));
            /* LoopNest 2 */
            for (signed char i_3 = 4; i_3 < 23; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    {
                        arr_15 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)15)))) / (((((/* implicit */unsigned long long int) var_3)) / (var_10)))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-80)) != (((var_15) / (((/* implicit */int) var_2))))));
                        var_23 -= ((/* implicit */short) var_6);
                    }
                } 
            } 
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) min(((unsigned short)8605), (((/* implicit */unsigned short) (unsigned char)255))))) : (312584806)));
        }
        for (signed char i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
        {
            arr_18 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_10 [i_1]), ((signed char)85))))));
            var_25 -= ((unsigned int) max((((/* implicit */short) var_2)), (var_14)));
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                for (long long int i_7 = 3; i_7 < 23; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 22; i_8 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) ((var_15) + (((/* implicit */int) var_2))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((2520939075182895666LL) / (arr_13 [i_1] [i_5] [i_6] [i_7] [i_8 + 1] [i_1]))), (((/* implicit */long long int) (signed char)-106))))) ? ((-(((var_13) / (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-48))))) <= (7992161469776592555ULL)))))));
                            arr_28 [i_1] [13U] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_7 [i_5] [i_8]);
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (signed char)-81))));
        }
        for (signed char i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
        {
            arr_31 [23U] [i_9] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) (-(var_3))))), ((-(((/* implicit */int) arr_0 [i_1] [i_1]))))));
            /* LoopSeq 4 */
            for (int i_10 = 2; i_10 < 22; i_10 += 2) 
            {
                var_29 = ((/* implicit */unsigned char) arr_5 [i_10]);
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    for (int i_12 = 2; i_12 < 20; i_12 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_4)) ? (min((var_0), (((/* implicit */long long int) (signed char)127)))) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))))));
                            var_31 = ((/* implicit */signed char) min((var_31), (((signed char) (signed char)127))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */int) max((max((arr_35 [i_1] [i_9] [i_10] [i_1] [i_1]), (((/* implicit */long long int) min((var_4), (((/* implicit */unsigned short) (unsigned char)98))))))), (((/* implicit */long long int) var_15))));
                var_33 = min(((signed char)-60), (((signed char) 1418926276U)));
            }
            for (unsigned long long int i_13 = 1; i_13 < 22; i_13 += 4) 
            {
                /* LoopSeq 3 */
                for (int i_14 = 0; i_14 < 24; i_14 += 2) 
                {
                    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-70)))))), (max((1608039274006872731ULL), (((/* implicit */unsigned long long int) (signed char)-45))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32767))))) : ((~(((((/* implicit */_Bool) arr_23 [i_1] [i_9] [i_13 - 1] [(signed char)17] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14017))) : (var_9))))))))));
                    var_35 = ((/* implicit */int) max((((short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_1] [i_9] [4LL]))) - (15U)))), (((/* implicit */short) min(((signed char)46), ((signed char)44))))));
                }
                for (signed char i_15 = 3; i_15 < 23; i_15 += 1) 
                {
                    var_36 = (signed char)127;
                    var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) min((var_0), (((((/* implicit */_Bool) arr_35 [(signed char)22] [i_13 + 2] [i_13 + 2] [i_13 - 1] [i_9])) ? (arr_35 [(unsigned char)4] [i_13 + 2] [i_13 + 2] [i_13 - 1] [i_9]) : (((/* implicit */long long int) var_12)))))))));
                    var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)127)), ((unsigned char)98)))) ? (((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */int) (signed char)85)) : (2147483647))) : ((-((~(((/* implicit */int) (unsigned char)98))))))));
                    var_39 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_1] [i_9] [i_1] [i_15 - 3] [i_9] [i_13 + 1]))) : (var_0))));
                    var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) arr_39 [i_13] [i_13] [i_13 - 1] [i_13 + 1]))));
                }
                for (signed char i_16 = 2; i_16 < 22; i_16 += 3) 
                {
                    var_41 = ((/* implicit */unsigned long long int) var_5);
                    var_42 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-81))) : (2941628292287233688LL)));
                    var_43 = ((/* implicit */long long int) arr_29 [i_13 + 1] [i_13 + 1] [i_13]);
                }
                arr_52 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_5 [i_9]))))), ((+(var_10))))));
            }
            for (signed char i_17 = 0; i_17 < 24; i_17 += 2) /* same iter space */
            {
                var_44 = ((/* implicit */int) var_2);
                var_45 = ((/* implicit */long long int) 1661390781252648987ULL);
            }
            for (signed char i_18 = 0; i_18 < 24; i_18 += 2) /* same iter space */
            {
                var_46 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? ((-(((/* implicit */int) (signed char)-23)))) : (((/* implicit */int) (signed char)121))));
                var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) arr_25 [i_1] [(signed char)3] [i_18])) + (var_9))) != (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (13ULL) : (((/* implicit */unsigned long long int) 1224678450)))))))));
                var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) (~((+(937869790U))))))));
            }
            arr_59 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_2 [i_1] [(signed char)11]))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)102))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-81))))) : (min((((/* implicit */unsigned long long int) (signed char)-120)), (var_10))))) : (((/* implicit */unsigned long long int) min((max((3357097490U), (3561186982U))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_12))))))));
        }
        arr_60 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_0))))), (max((((/* implicit */short) arr_36 [i_1] [14U] [i_1] [i_1] [i_1])), (var_14)))));
        arr_61 [(short)2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((-2147483633), (((/* implicit */int) (short)32740))))) ? (((((var_11) | (((/* implicit */long long int) ((/* implicit */int) var_8))))) & (((/* implicit */long long int) ((var_13) & (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [5])))))))) : (((/* implicit */long long int) ((/* implicit */int) min(((short)-20341), (((/* implicit */short) ((3883748643U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109))))))))))));
    }
    for (signed char i_19 = 0; i_19 < 24; i_19 += 3) /* same iter space */
    {
        var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) (-((+(((/* implicit */int) (short)11360)))))))));
        var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)120))) <= (var_0))))) : (((unsigned long long int) 4285501302U))))) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned short) 2U))) < ((~(((/* implicit */int) arr_10 [(signed char)10]))))))) : (((/* implicit */int) ((-1196384433) > (((/* implicit */int) (unsigned char)135))))))))));
    }
    var_51 = ((/* implicit */unsigned int) ((unsigned long long int) var_12));
}
