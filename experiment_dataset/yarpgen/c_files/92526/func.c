/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92526
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
    var_19 = ((/* implicit */_Bool) (((+(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (var_1))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        arr_2 [8] [8] = ((/* implicit */long long int) arr_0 [i_0 - 1]);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+(arr_0 [i_0 - 2])));
        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) (short)-21412))));
    }
    /* LoopSeq 2 */
    for (short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) (+(((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_3] [i_2])))) + (((/* implicit */int) ((var_9) && (((/* implicit */_Bool) var_16)))))))));
                    arr_14 [i_1] [i_1] = ((/* implicit */long long int) arr_6 [i_1] [i_1]);
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)-6930)))) : ((-(var_0)))));
    }
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_15)))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))) : (arr_0 [i_4])))));
        var_24 = ((/* implicit */_Bool) arr_8 [15U] [i_4]);
        /* LoopSeq 3 */
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned short) var_1);
            arr_21 [12] [(short)16] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_5])) * (((/* implicit */int) arr_9 [i_4] [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) arr_5 [9LL] [17LL])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))) ? (((/* implicit */long long int) (+(arr_19 [i_4] [i_4])))) : (((((/* implicit */_Bool) arr_19 [i_4] [i_5])) ? (((arr_20 [i_4] [i_4]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32767))))) : (((/* implicit */long long int) (+(arr_0 [i_5]))))))));
            arr_22 [i_5] [i_4] = ((arr_12 [i_4] [14LL] [i_4] [3U]) ? (min(((~(arr_20 [i_4] [4LL]))), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_17)) != (((/* implicit */int) (short)8922)))))));
            arr_23 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) arr_9 [i_4] [i_4])) : (((/* implicit */int) arr_9 [i_4] [i_4]))))) ? (((((/* implicit */_Bool) arr_9 [i_4] [i_5])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_4] [i_5])))) : ((+(((/* implicit */int) arr_9 [i_4] [i_4]))))));
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (int i_9 = 3; i_9 < 20; i_9 += 1) 
                    {
                        {
                            arr_35 [i_7] [i_6] [i_7] [i_7] [i_6] [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
                            var_26 *= ((/* implicit */unsigned int) ((arr_24 [10LL]) - (-1436928412)));
                            arr_36 [i_7] [16U] [11LL] [(unsigned char)19] [11LL] [i_7] = ((((/* implicit */_Bool) ((var_8) ? (arr_20 [i_9] [14]) : (arr_27 [15U] [i_6] [i_7 - 1] [(unsigned short)13])))) ? (arr_34 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7] [i_7] [i_7 - 1] [i_7]) : (((2395277677U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                            arr_37 [i_4] [i_7] [i_7] [i_7] [i_9 - 3] [17LL] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) var_14))))));
                        }
                    } 
                } 
            } 
            arr_38 [i_6] [i_4] = ((/* implicit */_Bool) var_5);
            /* LoopSeq 3 */
            for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                arr_42 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_17))));
                var_27 *= ((/* implicit */signed char) ((unsigned long long int) arr_19 [i_10] [15]));
            }
            for (unsigned int i_11 = 0; i_11 < 21; i_11 += 2) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned int) ((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4])))));
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_4] [i_6])) ? (arr_28 [i_4] [10] [4U] [i_11]) : (arr_28 [i_4] [i_6] [i_11] [i_6])));
                arr_47 [4] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
                arr_48 [i_6] [(_Bool)1] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [2U] [i_6])) << (((((/* implicit */int) arr_33 [20] [i_6] [i_6] [i_6] [i_6])) - (58535)))));
                var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_11] [i_6] [i_4] [i_4])) ? (((/* implicit */long long int) var_16)) : (arr_27 [i_4] [i_4] [i_4] [i_4])));
            }
            for (unsigned int i_12 = 0; i_12 < 21; i_12 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 21; i_14 += 2) 
                    {
                        {
                            arr_57 [i_4] [i_6] [i_14] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_46 [i_4])) : (((/* implicit */int) arr_46 [i_4]))));
                            arr_58 [i_6] [i_13] [i_6] = ((/* implicit */long long int) (~((-(var_13)))));
                            var_31 = ((/* implicit */unsigned short) arr_52 [11LL] [i_6] [i_12] [i_13]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_15 = 0; i_15 < 21; i_15 += 1) /* same iter space */
                {
                    arr_62 [11LL] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_4]))));
                    arr_63 [6LL] [i_6] [i_6] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) var_14))));
                }
                for (int i_16 = 0; i_16 < 21; i_16 += 1) /* same iter space */
                {
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_4] [i_12])) % (((/* implicit */int) arr_44 [(_Bool)1] [i_6] [i_6] [1]))));
                    var_33 = (+(((/* implicit */int) var_18)));
                    arr_66 [i_16] [i_6] [i_16] = ((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_4] [i_16]))));
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (-6455771056468544899LL)))) > (((/* implicit */int) var_7))));
                    var_35 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)57758)) ? (((/* implicit */long long int) var_15)) : (((long long int) arr_17 [i_6]))));
                }
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (long long int i_18 = 0; i_18 < 21; i_18 += 2) 
                    {
                        {
                            var_36 *= (-(2792045886U));
                            arr_71 [i_17] = ((/* implicit */_Bool) arr_8 [i_4] [i_6]);
                        }
                    } 
                } 
            }
        }
        for (unsigned int i_19 = 0; i_19 < 21; i_19 += 4) /* same iter space */
        {
            arr_75 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 1899689626U)) ? (917983217) : (((/* implicit */int) (_Bool)0))));
            var_37 = ((((/* implicit */_Bool) (+(arr_32 [i_4] [i_4] [i_4] [i_19] [i_4] [i_19])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_43 [i_19] [i_4])) : (((/* implicit */int) arr_43 [i_4] [i_4]))))) : ((-(arr_25 [i_19] [i_4]))));
            var_38 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)44389)) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)60380))))))))) + ((+(((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_1)))))));
        }
        arr_76 [8LL] = ((/* implicit */unsigned int) var_14);
        arr_77 [13U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9007182074871808LL)) ? (arr_17 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_54 [i_4] [i_4] [i_4]) && ((_Bool)0))))))))));
    }
    var_39 = ((/* implicit */unsigned int) min((((/* implicit */int) var_14)), (((((/* implicit */int) var_5)) % (((/* implicit */int) var_18))))));
}
