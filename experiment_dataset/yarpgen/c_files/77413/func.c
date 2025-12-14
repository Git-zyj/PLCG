/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77413
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
    var_16 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (max((((/* implicit */unsigned long long int) var_10)), (6401701151551156072ULL))))) / (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)65535)), (var_0))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_12))));
        arr_4 [i_0] = ((/* implicit */short) (!(var_3)));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_17 |= ((/* implicit */unsigned int) (signed char)94);
                    arr_10 [i_2] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_15)) : (var_4))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2])))));
                    arr_11 [i_0] [11LL] [22U] [(unsigned short)19] = ((/* implicit */unsigned short) arr_1 [(unsigned short)10]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) == (arr_2 [i_1 + 4] [i_1 + 4])));
                                arr_18 [i_0] [i_1] [i_1 + 2] [i_3] [i_3] = ((/* implicit */unsigned short) ((-1LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_13))));
            arr_22 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)19609)) < (((/* implicit */int) (_Bool)0))));
            arr_23 [i_0] [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_5])) * (((/* implicit */int) arr_14 [i_0] [i_0] [i_5] [i_5] [22LL]))));
            var_20 = ((/* implicit */signed char) var_15);
            /* LoopSeq 1 */
            for (unsigned int i_6 = 1; i_6 < 24; i_6 += 1) 
            {
                arr_27 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) var_10);
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (~(var_10))))));
                /* LoopSeq 3 */
                for (short i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    arr_30 [i_0] [i_0] [i_6] [i_0] [i_5] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65535))));
                    var_22 = ((/* implicit */long long int) ((unsigned short) 10850413730658802960ULL));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)94)) ? (((var_5) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_14 [i_5] [i_6 + 1] [i_5] [i_5] [i_6 - 1]))));
                    var_24 = ((/* implicit */unsigned long long int) (_Bool)1);
                }
                for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) /* same iter space */
                {
                    var_25 = (+(var_4));
                    var_26 = ((/* implicit */unsigned long long int) arr_8 [i_6 - 1] [i_6 + 1]);
                    var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_6 + 1] [i_6] [i_8])) ? (-3LL) : (((/* implicit */long long int) ((/* implicit */int) ((6401701151551156069ULL) > (((/* implicit */unsigned long long int) 1691622391))))))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
                {
                    var_28 = (+(6401701151551156069ULL));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))));
                        arr_38 [19] [i_9] [i_0] = (unsigned short)30063;
                        var_30 = ((/* implicit */unsigned short) var_3);
                    }
                    for (signed char i_11 = 3; i_11 < 23; i_11 += 2) 
                    {
                        var_31 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
                        var_32 = ((/* implicit */int) min((var_32), (((((/* implicit */int) (_Bool)0)) + ((-(((/* implicit */int) (short)-1))))))));
                        arr_41 [i_0] [i_0] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) ((12045042922158395541ULL) | (18446744073709551615ULL)));
                        arr_42 [i_0] = ((/* implicit */short) ((arr_24 [i_11] [i_11] [i_11 - 1]) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-18)) < (((/* implicit */int) (short)-1))))))));
                    }
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        arr_47 [i_0] [i_5] [i_6] [i_9] [i_12] = ((/* implicit */unsigned int) var_13);
                        arr_48 [i_0] [i_6] [i_6] [i_9] [i_12] |= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (var_15)));
                        var_33 = ((/* implicit */unsigned short) 2906299019U);
                        var_34 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                    }
                    var_35 = ((/* implicit */unsigned int) var_4);
                }
            }
        }
        for (unsigned int i_13 = 0; i_13 < 25; i_13 += 4) /* same iter space */
        {
            var_36 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)35472)) >> (((((/* implicit */int) (unsigned short)65535)) - (65508)))))) && ((!(((/* implicit */_Bool) (unsigned short)30039)))));
            var_37 = ((/* implicit */unsigned int) (~(arr_43 [i_0] [(short)9] [(_Bool)1] [i_13] [i_13])));
            var_38 -= ((/* implicit */short) (-(((/* implicit */int) var_9))));
            arr_51 [i_0] [i_0] [i_0] = (~(arr_26 [i_13] [i_13] [i_0]));
        }
        for (unsigned int i_14 = 0; i_14 < 25; i_14 += 4) /* same iter space */
        {
            var_39 = (-(var_15));
            var_40 = ((/* implicit */unsigned short) arr_31 [i_0] [i_14] [i_0] [(short)18] [(short)18]);
            arr_54 [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */short) var_13);
            arr_55 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_5 [i_0]))));
            var_41 = ((/* implicit */unsigned long long int) min((var_41), (((((/* implicit */_Bool) (short)17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (10850413730658802978ULL)))));
        }
        for (short i_15 = 2; i_15 < 23; i_15 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_16 = 0; i_16 < 25; i_16 += 1) 
            {
                for (unsigned short i_17 = 0; i_17 < 25; i_17 += 1) 
                {
                    {
                        arr_63 [i_0] [i_0] [i_16] [i_17] = -1;
                        var_42 += ((/* implicit */short) (-(((/* implicit */int) var_8))));
                    }
                } 
            } 
            arr_64 [i_15] [i_15] = ((/* implicit */_Bool) arr_35 [i_0] [i_15 + 1] [i_0] [i_0]);
            var_43 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_32 [i_15 + 2] [i_15 + 1] [i_15]))));
            arr_65 [16U] [i_15 - 2] = ((/* implicit */_Bool) arr_16 [i_15] [i_0] [(_Bool)1] [i_0] [i_0] [i_0]);
        }
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
    {
        var_44 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)8730))) & (4294967295U)));
        var_45 = ((/* implicit */unsigned int) ((long long int) -1LL));
        var_46 = ((/* implicit */unsigned int) var_13);
        arr_68 [i_18] = ((/* implicit */unsigned short) (-(((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1)))))));
    }
    var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) (!(((/* implicit */_Bool) 716025265U)))))));
}
