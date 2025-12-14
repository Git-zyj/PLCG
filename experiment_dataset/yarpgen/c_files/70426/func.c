/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70426
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)76)) % (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_12) : (-1719758436)))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_17 -= ((/* implicit */signed char) min((-1719758436), (1719758421)));
            arr_7 [i_1] [i_1] = ((/* implicit */short) ((unsigned char) (+(65534))));
            var_18 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (1872924325U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
        }
        for (int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 19; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(12200124572869938933ULL)))) && (((/* implicit */_Bool) -2308238507998995792LL))));
                            var_20 = ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_4 + 1])) < (((/* implicit */int) arr_2 [i_5]))))) + (min((((/* implicit */int) (signed char)-96)), ((-2147483647 - 1)))));
                            var_21 += (~(((/* implicit */int) (_Bool)1)));
                            arr_19 [7] [i_5] [i_5] [i_5] [(signed char)19] [i_0] = ((/* implicit */short) (signed char)25);
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_15 [i_4] [i_4] [i_4] [i_4] [i_4 - 1] [(unsigned char)6]))));
                        }
                    } 
                } 
                arr_20 [i_0] [i_2] = ((/* implicit */unsigned char) (((((((-(var_14))) + (9223372036854775807LL))) << (((arr_3 [i_2]) + (1735471490))))) > (var_5)));
            }
            /* vectorizable */
            for (short i_6 = 1; i_6 < 19; i_6 += 4) 
            {
                var_23 = (~(((int) var_13)));
                arr_24 [(unsigned char)17] [(unsigned char)17] [4U] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (arr_5 [(_Bool)1] [i_0])))) && (((/* implicit */_Bool) ((signed char) arr_2 [i_0])))));
            }
            for (int i_7 = 2; i_7 < 19; i_7 += 4) 
            {
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (arr_15 [i_0] [i_7] [i_7] [i_0] [i_0] [i_7]) : (((/* implicit */unsigned long long int) ((((var_10) + (9223372036854775807LL))) << (((((/* implicit */int) arr_12 [i_7 - 2] [i_7 - 2] [i_7] [(short)16])) - (44871)))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 2; i_8 < 19; i_8 += 4) 
                {
                    arr_30 [i_8] = min(((!(((/* implicit */_Bool) var_15)))), ((!(var_0))));
                    var_25 = ((/* implicit */unsigned short) min((-2147483634), ((-(((/* implicit */int) (unsigned char)240))))));
                    arr_31 [i_0] [i_2] [i_0] [i_8] = ((/* implicit */int) arr_18 [i_0] [i_2] [i_0] [i_0]);
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */short) arr_14 [i_0] [i_7 - 1] [i_7 - 1] [i_8 + 1])), (arr_13 [i_8] [i_7 - 2] [i_2] [i_2] [i_0])))), (max((((unsigned int) var_13)), (((/* implicit */unsigned int) max((arr_13 [i_0] [i_2] [i_2] [i_2] [i_8]), ((short)-26599)))))))))));
                }
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) (-(arr_27 [(short)18] [i_0] [i_2] [i_7 + 1])))) : (arr_6 [i_7] [i_7])))))));
                var_28 -= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (-(4291621428496191268ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -7979084512852270401LL)) ? (((/* implicit */long long int) 1719758428)) : (-7407711400664847381LL)))))))));
                var_29 = ((/* implicit */unsigned int) -2147483622);
            }
            arr_32 [i_2] [i_2] [i_0] = ((/* implicit */short) min((((/* implicit */int) arr_1 [i_0] [i_0])), (((((/* implicit */int) var_3)) * (((((/* implicit */_Bool) 1167967823)) ? (((/* implicit */int) (unsigned short)34871)) : (((/* implicit */int) (signed char)73))))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_11 = 1; i_11 < 9; i_11 += 1) 
            {
                var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((int) arr_37 [i_10] [i_10])))));
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) 9223372036854775807LL);
                            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) (-(0LL))))));
                        }
                    } 
                } 
                arr_43 [i_9] [i_10] [i_11] [i_11] = ((/* implicit */_Bool) arr_13 [i_11 - 1] [i_11] [i_11 - 1] [i_11] [i_11 - 1]);
            }
            var_33 = arr_5 [2U] [i_9];
        }
        var_34 = ((/* implicit */unsigned int) arr_13 [i_9] [19U] [i_9] [(unsigned short)4] [i_9]);
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_35 = ((/* implicit */unsigned int) arr_8 [i_14]);
        var_36 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1719758423)) ? ((-(1719758409))) : (((((/* implicit */int) var_6)) << (((((/* implicit */int) (short)-3968)) + (3973)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)18286)))) : (((((/* implicit */_Bool) (unsigned short)18295)) ? ((~(var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)219), (((/* implicit */unsigned char) arr_4 [(short)8]))))))))));
    }
    var_37 = ((/* implicit */unsigned int) (_Bool)1);
    var_38 = ((/* implicit */long long int) ((var_13) ^ (((((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) << (((var_10) + (5346412521946194980LL)))))));
}
