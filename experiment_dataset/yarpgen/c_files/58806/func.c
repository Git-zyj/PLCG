/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58806
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 15; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [(unsigned short)9] [i_2] [i_1] [(unsigned short)6] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)111))) == (-4730123384759685618LL)));
                                arr_15 [i_0] [i_0] [i_0] [i_1] [9U] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [2ULL] [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) arr_0 [(signed char)7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 - 2]))) : (arr_10 [i_0 + 1] [i_1] [i_2 + 2] [i_1])))));
                                arr_16 [i_1] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) min(((unsigned short)26566), (((/* implicit */unsigned short) (_Bool)1))))), (max((((/* implicit */unsigned long long int) 4730123384759685608LL)), (593486068567273450ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))) >= (1688849860263936ULL))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        arr_19 [i_1] [i_2] = ((/* implicit */unsigned int) ((long long int) ((short) arr_10 [i_0] [i_0] [i_0] [i_1])));
                        arr_20 [i_1] [(unsigned short)7] = max((((signed char) arr_12 [i_2] [i_2] [i_2 - 1] [i_2 - 1] [5LL] [i_2 + 2])), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5] [i_2] [i_1] [i_0 + 2]))) <= (var_2)))));
                        /* LoopSeq 3 */
                        for (short i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                        {
                            arr_24 [i_1] [i_1] [i_1] [8U] [9] [(signed char)11] = ((/* implicit */unsigned short) arr_2 [i_1]);
                            var_18 = ((unsigned short) arr_9 [i_1] [i_0 - 1] [(signed char)4] [i_1] [i_2 - 1]);
                            arr_25 [i_1] [i_5] [14LL] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((max((arr_17 [i_0 + 1] [i_0] [i_0]), (arr_17 [i_0 - 1] [i_0] [i_0]))) == (((arr_17 [i_0 + 1] [i_0 + 1] [(signed char)10]) * (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                            arr_26 [i_1] [i_1] [i_1] = max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_6] [9LL] [i_5] [i_0 - 1])) - (((/* implicit */int) arr_0 [i_0]))))), (max((((/* implicit */unsigned long long int) var_7)), (min((arr_9 [i_1] [i_1] [i_2] [i_5] [i_2]), (((/* implicit */unsigned long long int) arr_1 [6LL] [i_2])))))));
                        }
                        for (short i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                        {
                            arr_29 [(unsigned short)2] [i_1] = ((/* implicit */long long int) var_4);
                            var_19 = ((/* implicit */unsigned short) ((max((max((((/* implicit */unsigned int) arr_5 [i_5])), (var_2))), (((/* implicit */unsigned int) (unsigned short)3)))) - (((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */_Bool) arr_22 [(unsigned short)14] [i_1] [i_1] [i_1] [(unsigned short)1])) || (((/* implicit */_Bool) var_9)))), (arr_3 [i_0] [i_0])))))));
                        }
                        for (short i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
                        {
                            var_20 += ((/* implicit */signed char) arr_12 [i_1] [i_1] [i_1] [(signed char)13] [i_1] [i_1]);
                            arr_33 [i_0] [i_2] [i_2] [i_1] [i_8] = ((/* implicit */long long int) var_5);
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_18 [i_8] [(unsigned short)5] [i_2] [i_8]), (arr_21 [(_Bool)1] [i_1] [i_1] [i_1])))), (max((18445055223849287667ULL), (((/* implicit */unsigned long long int) arr_30 [i_0] [i_0] [i_0] [(unsigned short)5] [i_0]))))))) ? (max((arr_22 [(unsigned short)9] [i_0] [i_0] [i_0] [i_0 + 2]), (((/* implicit */unsigned long long int) ((unsigned short) 1688849860263935ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5]))))))));
                        }
                        var_22 -= ((/* implicit */unsigned long long int) arr_28 [i_0] [(unsigned char)13] [i_2] [(unsigned short)12] [i_5]);
                    }
                    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        arr_37 [(_Bool)1] [i_1] [(signed char)12] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_30 [i_2] [i_2] [(unsigned short)8] [(unsigned short)10] [i_2 + 1]), ((unsigned short)17089))))) != (((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0 + 1] [i_0 - 1])) ? (arr_17 [i_0] [i_0] [i_0 + 2]) : (var_12)))));
                        var_23 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_2] [i_2] [(unsigned short)1] [i_1] [i_9]))) : (var_16)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_9]))) : (((((/* implicit */_Bool) 1667943058184634057ULL)) ? (arr_10 [i_0] [i_1] [i_2 + 2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_9] [i_2 + 2] [i_1] [i_0]))))))), (((/* implicit */long long int) max((arr_28 [(signed char)14] [i_2 - 1] [i_2] [i_1] [i_0]), (min((((/* implicit */unsigned int) arr_32 [i_1] [i_1] [i_1])), (arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
                        var_24 = ((/* implicit */unsigned long long int) var_16);
                        var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */short) (signed char)7)), ((short)13))))));
                    }
                    for (long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        arr_40 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(17632885469325897883ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_1] [i_1] [i_2]))) : (max((arr_17 [i_0 + 1] [i_0] [i_2 + 1]), (((/* implicit */unsigned int) ((unsigned char) 1817725270U)))))));
                        arr_41 [(unsigned short)11] [i_1] [i_2] [i_2 + 2] [(unsigned short)8] [10U] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned short) arr_13 [i_1] [i_1] [(_Bool)1] [i_1] [i_1]))), (min((((/* implicit */unsigned int) var_10)), (var_16)))))) < (arr_11 [i_2] [i_2] [i_2 + 1] [i_2 + 2] [i_2 - 1])));
                        var_26 -= ((/* implicit */long long int) max((((/* implicit */unsigned int) max((arr_12 [i_2] [i_2] [i_2 + 2] [i_2] [i_2] [i_2 + 1]), (arr_12 [i_2] [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2 - 1])))), (arr_17 [i_0] [i_0] [i_2 + 1])));
                    }
                    var_27 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_6 [i_0 + 1])) * (((/* implicit */int) arr_6 [i_0 + 1])))), (((/* implicit */int) arr_21 [i_0 + 1] [i_2] [i_2 + 1] [i_0]))));
                    arr_42 [i_0] [i_1] [i_2] [(unsigned short)6] = ((/* implicit */unsigned short) max((max(((+(arr_12 [(unsigned short)7] [(unsigned short)7] [i_2] [i_1] [0LL] [(unsigned short)13]))), (((/* implicit */int) arr_5 [i_1])))), (((/* implicit */int) ((_Bool) arr_9 [i_1] [i_1] [i_2] [i_0] [i_1])))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 1) 
    {
        for (signed char i_12 = 1; i_12 < 21; i_12 += 3) 
        {
            for (unsigned char i_13 = 2; i_13 < 20; i_13 += 3) 
            {
                {
                    var_28 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_11] [i_12 + 1]))) <= (17853258005142278162ULL))))), (min((min((-4730123384759685644LL), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) max((arr_43 [i_13 + 1] [i_11]), (arr_43 [i_12] [(unsigned short)13]))))))));
                    arr_49 [15ULL] [i_12 + 1] [i_13 - 1] [i_11] = ((signed char) max((arr_43 [i_12 + 1] [i_12]), (((/* implicit */unsigned short) arr_46 [i_11] [i_11]))));
                    arr_50 [i_11] [i_12] [i_12] = max((((/* implicit */unsigned short) arr_48 [20ULL] [20ULL] [i_11])), (var_1));
                    arr_51 [i_13] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) + (min((arr_44 [i_11]), (arr_44 [i_11])))));
                    arr_52 [i_11] [i_11] [i_11] = (i_11 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_47 [i_11] [i_13 + 2] [i_12 + 1] [i_11])) << (((((/* implicit */int) arr_47 [i_11] [i_11] [i_12 + 1] [i_13 - 2])) - (12981)))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (arr_47 [i_11] [i_11] [i_11] [i_12])))) : (((((/* implicit */int) arr_47 [i_11] [i_12 + 1] [i_11] [i_11])) >> (((((/* implicit */int) arr_47 [i_11] [(unsigned char)1] [(unsigned short)12] [i_11])) - (12993)))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_47 [i_11] [i_13 + 2] [i_12 + 1] [i_11])) << (((((((/* implicit */int) arr_47 [i_11] [i_11] [i_12 + 1] [i_13 - 2])) - (12981))) - (20470)))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (arr_47 [i_11] [i_11] [i_11] [i_12])))) : (((((/* implicit */int) arr_47 [i_11] [i_12 + 1] [i_11] [i_11])) >> (((((((/* implicit */int) arr_47 [i_11] [(unsigned char)1] [(unsigned short)12] [i_11])) - (12993))) - (20442))))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)57527)) : (max((((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (unsigned short)63075)) : (((/* implicit */int) (_Bool)0)))), (((((/* implicit */int) (unsigned short)51917)) * (((/* implicit */int) (short)7))))))));
    /* LoopNest 2 */
    for (signed char i_14 = 1; i_14 < 15; i_14 += 3) 
    {
        for (long long int i_15 = 2; i_15 < 15; i_15 += 4) 
        {
            {
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_44 [i_15]))) || (((/* implicit */_Bool) arr_54 [i_14 + 1]))));
                var_31 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) arr_55 [i_15 + 1])))));
                /* LoopSeq 1 */
                for (long long int i_16 = 0; i_16 < 17; i_16 += 3) 
                {
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_53 [i_14 + 1])) ? (((/* implicit */int) ((unsigned char) var_12))) : (((/* implicit */int) ((short) ((int) arr_59 [i_16] [i_14]))))));
                    /* LoopNest 2 */
                    for (signed char i_17 = 0; i_17 < 17; i_17 += 4) 
                    {
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            {
                                arr_65 [i_18] = (i_18 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((((/* implicit */int) var_15)) & (((/* implicit */int) var_6)))))) >> ((((~(((/* implicit */int) arr_48 [i_15 - 2] [i_18] [i_18])))) - (90)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((((/* implicit */int) var_15)) & (((/* implicit */int) var_6)))))) >> ((((((~(((/* implicit */int) arr_48 [i_15 - 2] [i_18] [i_18])))) - (90))) + (65))))));
                                var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) min((((signed char) min((var_10), (((/* implicit */signed char) var_17))))), (((/* implicit */signed char) arr_58 [i_14] [i_14] [i_14])))))));
                            }
                        } 
                    } 
                    var_34 -= max(((-(((/* implicit */int) (signed char)96)))), (((/* implicit */int) ((((/* implicit */_Bool) min((2597241065U), (((/* implicit */unsigned int) var_17))))) && (((/* implicit */_Bool) max((1373012380U), (((/* implicit */unsigned int) arr_57 [i_14] [i_14] [i_14])))))))));
                    arr_66 [(unsigned short)13] = ((/* implicit */unsigned short) (unsigned char)1);
                }
            }
        } 
    } 
}
