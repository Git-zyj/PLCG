/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98716
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
    var_15 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) ((signed char) arr_1 [i_0]))) : (((/* implicit */int) ((signed char) arr_1 [i_0])))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
                {
                    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0 - 1]))));
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (arr_8 [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                }
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */short) ((signed char) (+(((/* implicit */int) var_11)))));
                    var_19 = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) arr_11 [i_1])))));
                }
                /* LoopSeq 4 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */_Bool) ((signed char) ((var_13) + (((/* implicit */unsigned int) ((/* implicit */int) var_7))))));
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((unsigned long long int) var_4)))));
                    arr_16 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) var_5)))));
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned int) (!(((_Bool) arr_7 [i_0] [i_1] [i_1] [i_6]))));
                    arr_19 [i_0] = ((/* implicit */unsigned int) var_9);
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) var_7)) << (((((/* implicit */int) arr_9 [i_1] [i_1])) - (85))))));
                    var_24 += ((unsigned short) var_14);
                }
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_25 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) var_3)))));
                    /* LoopSeq 2 */
                    for (int i_9 = 4; i_9 < 21; i_9 += 1) 
                    {
                        arr_30 [i_0] [i_0] [i_1] [i_2] [i_2] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((+(arr_0 [i_0])))));
                        var_26 = arr_23 [i_9] [i_8] [i_2] [i_1] [i_1] [i_0];
                    }
                    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        var_27 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (arr_23 [i_10] [i_10] [i_8] [i_1] [i_1] [i_0])))) ? ((-(((/* implicit */int) arr_3 [i_10])))) : (((/* implicit */int) var_7))));
                        var_28 = ((/* implicit */unsigned long long int) (-(var_14)));
                        arr_34 [i_0] [i_0] [i_2] [i_8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_8 - 1] [i_8] [i_8] [i_8] [i_10] [i_10])) && (((/* implicit */_Bool) ((var_10) | (((/* implicit */unsigned long long int) arr_8 [i_8])))))));
                        var_29 = arr_11 [i_10];
                    }
                }
                var_30 = ((/* implicit */int) var_8);
            }
            for (int i_11 = 0; i_11 < 23; i_11 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 1; i_12 < 22; i_12 += 2) 
                {
                    var_31 &= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) (!(arr_18 [i_12] [i_0] [i_0]))))));
                    var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (-(arr_25 [i_0 - 1] [i_12 - 1]))))));
                    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) var_6))));
                    var_34 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_9 [i_0] [i_0]))));
                }
                var_35 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_8)) ? (arr_32 [i_0] [i_1] [i_0] [i_1] [i_1] [i_11] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0])))))));
                var_36 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_11] [i_11] [i_1] [i_1] [i_0] [i_0] [i_0]))) : (var_14)))) ? (((/* implicit */int) arr_9 [i_0] [i_1])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0 - 1] [i_11]))));
            }
            for (int i_13 = 0; i_13 < 23; i_13 += 4) /* same iter space */
            {
                arr_43 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 2]))));
                var_37 = ((/* implicit */signed char) var_5);
                var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_0 - 2] [i_0 - 2] [i_1] [i_13])) ? (((/* implicit */int) arr_14 [i_0 + 1] [i_13] [i_13] [i_0 + 1])) : (((/* implicit */int) var_5))));
                /* LoopSeq 2 */
                for (short i_14 = 2; i_14 < 20; i_14 += 2) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned short) var_8);
                    arr_46 [i_0] [i_1] [i_13] [i_13] [i_14] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
                    var_40 = ((/* implicit */long long int) (-((-(((/* implicit */int) var_5))))));
                    var_41 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) var_7)))));
                }
                for (short i_15 = 2; i_15 < 20; i_15 += 2) /* same iter space */
                {
                    var_42 = ((/* implicit */unsigned long long int) arr_48 [i_13]);
                    /* LoopSeq 2 */
                    for (signed char i_16 = 0; i_16 < 23; i_16 += 3) /* same iter space */
                    {
                        arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_26 [i_16]);
                        var_43 -= ((/* implicit */_Bool) arr_37 [i_16]);
                    }
                    for (signed char i_17 = 0; i_17 < 23; i_17 += 3) /* same iter space */
                    {
                        var_44 = ((/* implicit */unsigned long long int) ((_Bool) (~(var_8))));
                        var_45 = ((/* implicit */_Bool) arr_40 [i_17] [i_15 + 1] [i_0 - 1] [i_0]);
                    }
                    arr_57 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) arr_12 [i_0 - 1] [i_15 + 1] [i_13] [i_15]));
                }
            }
            /* LoopSeq 1 */
            for (unsigned short i_18 = 2; i_18 < 22; i_18 += 3) 
            {
                var_46 = ((short) ((((/* implicit */int) var_6)) > (((/* implicit */int) arr_50 [i_0] [i_1] [i_0] [i_18] [i_0]))));
                var_47 = ((/* implicit */short) ((unsigned int) (-(arr_24 [i_0] [i_18] [i_0] [i_0] [i_0]))));
                var_48 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_0] [i_1] [i_18] [i_1] [i_1]))))));
            }
            var_49 = ((/* implicit */long long int) ((signed char) ((unsigned char) arr_45 [i_0] [i_0] [i_0] [i_0])));
            var_50 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) var_8)))));
        }
        for (long long int i_19 = 1; i_19 < 22; i_19 += 2) 
        {
            arr_62 [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_19 + 1] [i_19])) ? (((unsigned int) arr_25 [i_0] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_18 [i_0] [i_0] [i_0])))))));
            var_51 += ((/* implicit */short) ((((/* implicit */int) ((short) arr_10 [i_0] [i_0] [i_0] [i_19] [i_0]))) >= (((/* implicit */int) var_6))));
        }
    }
    var_52 = ((/* implicit */_Bool) var_13);
    var_53 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) ((int) var_13))) ? (min((((/* implicit */unsigned long long int) var_0)), (var_10))) : (((/* implicit */unsigned long long int) var_14))))));
}
