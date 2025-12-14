/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77165
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) (-(var_7)))) : (var_4)))) ? (((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_2 [i_0])))) : (var_6)));
        arr_4 [i_0] = var_13;
        arr_5 [i_0] [i_0] = ((/* implicit */int) min((((unsigned long long int) -3364128387391664729LL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 42634317)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) var_3)) : (((((/* implicit */_Bool) var_16)) ? (1116869020058956975LL) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))))));
        arr_6 [i_0] |= ((/* implicit */unsigned short) var_11);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_9 [12U] |= ((/* implicit */unsigned long long int) arr_7 [14]);
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((+(1649726332))) : (var_16)))) ? (((/* implicit */unsigned long long int) ((42634344) << (((/* implicit */int) ((_Bool) 3364128387391664705LL)))))) : (max((((/* implicit */unsigned long long int) -656165601)), (955738047714298951ULL)))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 2; i_2 < 20; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    {
                        arr_18 [i_1 - 1] [i_1 - 1] [i_1] = ((/* implicit */signed char) var_11);
                        var_18 ^= ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) (unsigned char)12)) ? (arr_10 [i_1]) : (((/* implicit */unsigned int) 1105590621)))), (((/* implicit */unsigned int) min((var_16), (((/* implicit */int) var_9))))))), (((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) -656165601)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)99)))))))));
                        var_19 = ((unsigned char) ((((/* implicit */_Bool) (-(656165609)))) ? (((((/* implicit */int) arr_11 [i_1])) / (2147483638))) : (((((/* implicit */_Bool) (short)26774)) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) var_14))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        var_20 = ((/* implicit */signed char) (~(var_3)));
        /* LoopSeq 1 */
        for (unsigned short i_6 = 3; i_6 < 8; i_6 += 3) 
        {
            arr_24 [i_5] [i_6] = ((/* implicit */_Bool) (~(((unsigned int) var_12))));
            var_21 = ((/* implicit */int) arr_21 [i_5] [i_6]);
            /* LoopNest 2 */
            for (signed char i_7 = 3; i_7 < 8; i_7 += 1) 
            {
                for (unsigned short i_8 = 2; i_8 < 6; i_8 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
                        {
                            arr_32 [i_5] [i_5] [i_5] [i_6] [i_9] = ((/* implicit */long long int) var_8);
                            arr_33 [i_5] [i_5] [i_5] [i_6] [i_5] = max(((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)11479)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (signed char)-1)));
                        }
                        for (long long int i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */short) max((((/* implicit */long long int) (short)-26760)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4095)) ? (var_11) : (((/* implicit */int) var_8))))) ? (-6062749222551772586LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-11486))))))))));
                            var_23 = var_6;
                            arr_38 [i_5] [i_5] [i_5] [i_6] [i_5] [i_5] = ((/* implicit */unsigned short) arr_29 [i_10] [i_6] [i_8] [i_7 + 2] [i_5] [i_6] [i_5]);
                        }
                        arr_39 [i_5] [i_5] [i_6] = ((/* implicit */long long int) (_Bool)0);
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
        {
            for (unsigned char i_12 = 0; i_12 < 10; i_12 += 1) 
            {
                for (signed char i_13 = 0; i_13 < 10; i_13 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_14 = 3; i_14 < 9; i_14 += 2) 
                        {
                            arr_53 [i_11] [i_13] [i_11] = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)52)) ? (18446744073709551589ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)160))))), (((/* implicit */unsigned long long int) arr_16 [i_11] [i_11] [i_11] [i_13] [i_14]))));
                            var_24 = ((/* implicit */short) arr_44 [i_5] [i_11] [i_12]);
                            arr_54 [i_5] [i_11] [i_12] [i_12] [i_13] [i_12] = ((/* implicit */unsigned long long int) ((var_6) << (((((((((/* implicit */_Bool) var_2)) ? (max((-1105590622), (((/* implicit */int) (short)-32240)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-10)))))) + (32263))) - (22)))));
                        }
                        for (long long int i_15 = 0; i_15 < 10; i_15 += 1) 
                        {
                            var_25 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((721646598U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)219))))))) + (((arr_30 [i_5] [i_11]) >> (((arr_30 [(unsigned char)5] [i_11]) - (11093262462108715721ULL)))))));
                            var_26 ^= ((/* implicit */unsigned char) (~(((((var_11) + (2147483647))) << (((((/* implicit */int) var_0)) - (188)))))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_11] [(short)12] [i_12] [i_11] [i_15])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_46 [i_5] [(unsigned char)3] [i_12] [i_13]))))) ? (arr_50 [i_5] [i_5] [i_12] [i_13] [i_13] [i_11]) : (2112123073))))));
                            arr_58 [i_5] [i_11] [i_11] [i_12] [i_13] [i_11] [i_15] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((arr_47 [i_5] [i_12] [i_13]), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)20222)) && (((/* implicit */_Bool) -656165601)))))))), (((((/* implicit */_Bool) -3856573144702947956LL)) ? (arr_22 [i_11]) : (((/* implicit */unsigned long long int) var_5))))));
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((signed char) min((((/* implicit */long long int) 0U)), (-728034535806486710LL)))))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 2) 
                        {
                            arr_63 [i_11] [i_13] [i_11] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && ((!(((/* implicit */_Bool) arr_48 [i_5] [i_11] [i_11])))))))) : (min((-5913590351311055498LL), (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)65509)), (2112123073))))))));
                            arr_64 [i_11] = ((/* implicit */unsigned int) arr_28 [i_5] [0LL] [(unsigned char)1] [i_16]);
                        }
                        var_29 = ((/* implicit */short) 2147483647);
                        var_30 ^= ((/* implicit */unsigned short) (-(max((arr_22 [i_13]), (((/* implicit */unsigned long long int) (signed char)-27))))));
                        /* LoopSeq 1 */
                        for (long long int i_17 = 1; i_17 < 7; i_17 += 2) 
                        {
                            var_31 |= ((/* implicit */int) ((short) arr_11 [i_12]));
                            var_32 = ((/* implicit */unsigned long long int) (((~(var_1))) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_17 - 1] [i_11])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_8 [i_11])))))));
                            arr_67 [i_5] [i_11] [i_11] [i_13] [i_11] [i_17] = ((/* implicit */unsigned int) min((max((arr_26 [i_5] [i_11] [i_17 - 1]), (((/* implicit */int) (!((_Bool)1)))))), ((-(((/* implicit */int) (signed char)23))))));
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((arr_7 [i_11]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_34 = var_1;
    var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
}
