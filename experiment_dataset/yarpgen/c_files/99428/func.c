/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99428
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166))) & (((((/* implicit */_Bool) var_5)) ? ((+(var_5))) : (((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = (+(((/* implicit */int) var_9)));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    var_13 += ((/* implicit */unsigned long long int) (short)-30598);
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)166))))) && (((((/* implicit */int) arr_9 [i_0] [4] [i_2] [i_3])) != (((/* implicit */int) (short)-29673))))));
                }
                arr_11 [5LL] [5LL] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) / (var_8)))) ? (((/* implicit */unsigned long long int) 544955550188786367LL)) : ((~(var_7)))));
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (((var_9) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4])))))));
                    arr_15 [(short)14] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)7))));
                    var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_3))));
                    arr_16 [i_4] [i_2] [i_1] [i_0] &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)113)) != (((/* implicit */int) (unsigned char)166))))) << (((((/* implicit */int) (unsigned char)90)) - (78)))));
                    var_17 = ((/* implicit */unsigned int) ((2131925898U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8191)))));
                }
                for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-9301)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)1699))));
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_0] [(short)4] [(short)7] [i_0] [i_0])) > (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        var_20 = ((((/* implicit */_Bool) ((short) arr_5 [i_0] [i_2] [i_6]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (2163041398U));
                        arr_21 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))))) / (((/* implicit */int) var_9))));
                        arr_22 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)98))));
                    }
                    for (unsigned short i_7 = 1; i_7 < 18; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((signed char) 2163041378U));
                        var_22 = ((/* implicit */unsigned char) ((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-83)))));
                        arr_26 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)6965)) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 2131925889U)) : (377698675688047620ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19988)))));
                        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
                        var_24 = ((/* implicit */signed char) (~(((/* implicit */int) (short)29177))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
                    {
                        arr_30 [i_8] [i_5] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((short) (unsigned char)90));
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((var_5) != (((((/* implicit */_Bool) 16777215U)) ? (885817973U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)90))))))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) /* same iter space */
                    {
                        var_26 += ((/* implicit */unsigned char) (-((~(((/* implicit */int) (unsigned char)127))))));
                        var_27 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_27 [10U] [i_9] [i_2] [i_5] [i_9] [i_5] [i_2])) / (((/* implicit */int) arr_8 [i_5] [i_9]))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) /* same iter space */
                    {
                        arr_36 [i_10] [0ULL] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))) < (((unsigned int) arr_18 [i_1] [i_5] [(unsigned short)15]))));
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_5] [i_5] [i_2] [i_1] [i_0] [i_0])) ^ (((((/* implicit */int) (unsigned char)89)) << (((arr_24 [i_0] [6ULL] [i_1] [i_2] [i_2] [17U] [(unsigned char)18]) + (440600212)))))));
                    }
                }
                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) arr_13 [i_0] [i_0] [i_1] [i_2]))));
            }
            for (long long int i_11 = 0; i_11 < 20; i_11 += 1) 
            {
                var_30 -= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_14 [i_0] [i_1] [i_11] [i_11] [i_11] [i_11]))));
                arr_39 [i_0] [i_1] = ((/* implicit */int) ((long long int) (signed char)-83));
            }
            for (int i_12 = 1; i_12 < 19; i_12 += 3) 
            {
                var_31 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) ^ (9223372036854775807LL))) - (((/* implicit */long long int) 370367527))));
                arr_42 [0U] [15U] [i_1] [i_12] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_40 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_12 + 1] [i_12])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_12 + 1] [8] [5] [i_0] [i_0])) || (((/* implicit */_Bool) var_6)))))) : ((~(arr_6 [(signed char)19]))));
                var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (+(((var_5) << (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_1] [i_12 - 1] [i_12])))))))));
                arr_43 [i_0] [i_1] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) 2131925888U))) || ((!(((/* implicit */_Bool) var_1))))));
            }
            arr_44 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)214));
        }
        for (int i_13 = 1; i_13 < 18; i_13 += 1) 
        {
            arr_48 [i_0] = ((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0]);
            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (((var_5) << (((((/* implicit */int) (short)-2884)) + (2908))))))))));
        }
        arr_49 [i_0] = ((/* implicit */short) ((_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [17U] [17U] [13ULL]));
        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4023425794U)) ? (250545917U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60791)))));
    }
    for (unsigned char i_14 = 0; i_14 < 15; i_14 += 4) 
    {
        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((2131925898U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_14] [i_14] [i_14])))))) ? ((-(var_8))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_9 [i_14] [i_14] [i_14] [i_14])))))));
        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) arr_29 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))));
        var_37 *= var_4;
        arr_53 [i_14] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_10)), (min((((/* implicit */unsigned long long int) var_0)), (var_7)))));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 18; i_15 += 3) 
    {
        arr_56 [i_15] = ((/* implicit */long long int) 1056906183U);
        var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9))) : (16711133640067439481ULL)));
        var_39 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_15] [i_15] [i_15])) ? (((/* implicit */unsigned long long int) var_5)) : (var_7)));
    }
    for (unsigned short i_16 = 0; i_16 < 19; i_16 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_17 = 4; i_17 < 17; i_17 += 4) 
        {
            arr_63 [i_16] [i_16] [i_17 - 4] = ((/* implicit */unsigned char) (-(min((6382690242667718064LL), (((/* implicit */long long int) (unsigned short)39251))))));
            var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) var_6))));
        }
        arr_64 [i_16] = ((/* implicit */unsigned char) (_Bool)0);
    }
    var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) ((signed char) 1689634634U))))) < (((((/* implicit */int) max(((short)-2884), (var_1)))) * (((/* implicit */int) var_10)))))))));
}
