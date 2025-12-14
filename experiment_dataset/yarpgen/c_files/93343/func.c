/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93343
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            arr_6 [i_1] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_15))) <= (var_12))) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 4; i_2 < 23; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) var_4);
                            var_18 = ((/* implicit */long long int) arr_4 [23U] [i_3] [(unsigned short)7]);
                            var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) 1073741824U)) ? (arr_13 [i_4] [i_3] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) % (((/* implicit */unsigned long long int) var_4))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_5 = 1; i_5 < 20; i_5 += 2) 
            {
                for (short i_6 = 2; i_6 < 21; i_6 += 3) 
                {
                    {
                        var_20 = arr_1 [i_1];
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_24 [(unsigned short)3] [(unsigned short)3] [(short)5] [i_6 + 2] [i_5] = ((/* implicit */short) ((unsigned char) var_13));
                            arr_25 [i_7] [i_5] [i_5] [i_1 - 2] [12] [i_5] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)31793))));
                        }
                        for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            arr_29 [i_0] [0LL] [i_5] [i_5] [i_5] [i_6] [i_6] = ((/* implicit */signed char) (_Bool)0);
                            arr_30 [i_5] = ((/* implicit */int) ((short) ((var_0) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (_Bool)1)))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            var_21 = (i_5 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */int) arr_31 [(unsigned short)20] [i_1 + 1] [19LL] [i_6] [i_6])) >> (((((unsigned long long int) arr_32 [i_5] [i_6 + 3] [i_1 - 2] [i_5])) - (3503697794709408631ULL)))))) : (((/* implicit */short) ((((/* implicit */int) arr_31 [(unsigned short)20] [i_1 + 1] [19LL] [i_6] [i_6])) >> (((((((unsigned long long int) arr_32 [i_5] [i_6 + 3] [i_1 - 2] [i_5])) - (3503697794709408631ULL))) - (13147044069161921274ULL))))));
                            var_22 = ((/* implicit */signed char) (~(((/* implicit */int) arr_31 [i_5] [i_1] [i_6 + 1] [i_5 + 2] [22ULL]))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1510519161187397077ULL)) ? (((/* implicit */int) arr_4 [i_5 + 1] [i_5] [i_5])) : (((/* implicit */int) var_15))));
                            arr_33 [i_0] [(_Bool)1] [i_5] [i_1 + 1] [i_0] [(unsigned short)16] [i_9] = ((/* implicit */unsigned long long int) arr_17 [i_9] [(unsigned short)9] [i_6] [(unsigned short)9] [(unsigned short)1] [(unsigned short)1]);
                        }
                        var_24 = ((/* implicit */short) (-(((/* implicit */int) arr_20 [i_0] [i_0] [(unsigned short)18] [i_5 + 4] [i_5] [i_5] [i_6 + 1]))));
                        var_25 = ((/* implicit */int) (short)29920);
                    }
                } 
            } 
            arr_34 [(signed char)17] = ((/* implicit */unsigned int) (+(arr_21 [i_1] [i_1] [i_1] [i_1 + 1] [i_1])));
        }
        var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (((unsigned long long int) min((var_9), (((/* implicit */int) arr_3 [i_0] [i_0] [(short)13])))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned short) (_Bool)1);
        arr_37 [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)125)) || (((/* implicit */_Bool) (short)32741)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_7)));
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 2) 
        {
            for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 24; i_14 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned int) (signed char)15);
                                var_29 = ((/* implicit */short) (+(((/* implicit */int) arr_12 [i_10] [i_10] [(_Bool)1] [i_13] [(_Bool)1] [i_13] [(_Bool)1]))));
                                var_30 = max((((/* implicit */unsigned long long int) ((_Bool) var_9))), (min((((/* implicit */unsigned long long int) var_8)), (var_3))));
                                arr_47 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (arr_38 [i_10] [i_13]) : (arr_38 [i_13] [i_10])))) ? (((/* implicit */int) arr_35 [i_10])) : (((/* implicit */int) (short)-32741))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned short) var_15);
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (short)-27784))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_4 [i_10] [i_10] [i_10]))))))) : (((max((var_12), (((/* implicit */unsigned int) arr_19 [(short)10] [i_12] [i_11] [i_10])))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [12] [i_11] [i_12] [i_11] [12] [i_12] [12])))))));
                    var_33 = ((/* implicit */int) var_11);
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned int) var_6);
    }
    var_35 = ((/* implicit */_Bool) max(((+((+(((/* implicit */int) var_8)))))), (((/* implicit */int) var_0))));
    /* LoopNest 3 */
    for (short i_15 = 0; i_15 < 18; i_15 += 1) 
    {
        for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 2) 
        {
            for (unsigned char i_17 = 1; i_17 < 17; i_17 += 4) 
            {
                {
                    var_36 = ((/* implicit */signed char) ((_Bool) (+(var_6))));
                    /* LoopSeq 1 */
                    for (signed char i_18 = 1; i_18 < 15; i_18 += 2) 
                    {
                        arr_58 [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_17 + 1] [i_17 + 1] [i_17 - 1]))))), (2304025388U)));
                        arr_59 [i_15] = ((/* implicit */unsigned int) (short)-32742);
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-27784))) != (var_12))) ? (((/* implicit */int) max((var_16), (var_8)))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)118))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_15] [i_16] [(unsigned short)13] [(unsigned short)13]))) < (var_3)))) <= (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_15 [i_15] [i_16] [i_15])) : (((/* implicit */int) min((((/* implicit */signed char) var_0)), (var_1))))))));
                        var_38 = ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (signed char)33)), ((short)-29939))))) - (max((((/* implicit */unsigned int) var_11)), (var_4)))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_19 = 3; i_19 < 22; i_19 += 2) 
    {
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_21 = 1; i_21 < 20; i_21 += 2) 
                {
                    for (signed char i_22 = 0; i_22 < 24; i_22 += 2) 
                    {
                        for (int i_23 = 0; i_23 < 24; i_23 += 2) 
                        {
                            {
                                var_39 = ((/* implicit */signed char) ((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_14))))));
                                arr_74 [i_19] [i_22] [i_19] = ((/* implicit */_Bool) var_7);
                                arr_75 [i_19] [i_20] [i_21 + 2] [i_22] [9U] = ((unsigned char) (unsigned short)0);
                                var_40 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) ((unsigned long long int) var_16))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_24 = 0; i_24 < 24; i_24 += 1) 
                {
                    for (signed char i_25 = 3; i_25 < 23; i_25 += 1) 
                    {
                        for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                        {
                            {
                                var_41 = ((/* implicit */signed char) var_6);
                                var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_14)))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)254))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((var_12) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-32741)) - (((/* implicit */int) arr_17 [i_19] [i_19] [i_24] [i_19] [i_25 - 3] [i_26])))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5)))) - (arr_70 [i_20] [(unsigned char)19] [(signed char)2] [i_24] [i_25 - 2])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
