/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91299
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
        {
            var_12 += ((/* implicit */long long int) var_2);
            var_13 = ((/* implicit */int) arr_4 [i_0]);
        }
        for (signed char i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
        {
            arr_7 [i_2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) 1048320U))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [(_Bool)1] [i_2]))))), (max((3677502366U), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)13)))))))));
            arr_8 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_2]))))) ? (((((/* implicit */int) var_6)) << (((((/* implicit */int) arr_3 [i_0])) + (7995))))) : (((/* implicit */int) var_8))));
            var_14 = max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))), ((+(206311U))))), (((((/* implicit */_Bool) (unsigned short)24881)) ? (3807061986U) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned short) (unsigned char)255)))))))));
        }
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            var_15 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((206311U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)237)))))))) & (((unsigned long long int) var_3))));
            /* LoopSeq 3 */
            for (unsigned short i_4 = 1; i_4 < 16; i_4 += 1) 
            {
                var_16 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) var_11)))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    for (unsigned char i_6 = 1; i_6 < 15; i_6 += 3) 
                    {
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_6] [11U] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)14)), (4294760975U))))));
                            arr_22 [i_5] [i_6] = ((/* implicit */long long int) var_0);
                        }
                    } 
                } 
            }
            for (long long int i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned short) arr_15 [i_0] [(_Bool)1] [i_3] [(_Bool)1] [(signed char)16]);
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1832539338U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)));
                arr_25 [i_0] [(short)12] [i_3] [i_7] = ((/* implicit */unsigned int) ((4294760984U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27526)))));
            }
            /* vectorizable */
            for (long long int i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
            {
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_7))));
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    for (short i_10 = 1; i_10 < 14; i_10 += 2) 
                    {
                        {
                            arr_36 [i_0] [i_0] [i_3] [i_8] [i_0] [i_10 - 1] = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
                            var_20 = ((/* implicit */signed char) (~(var_9)));
                            arr_37 [i_0] [i_0] [i_8] [i_9] [i_9] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8721)) ? (2251799813554176LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35417)))));
                            arr_38 [i_0] [(unsigned short)4] [(unsigned char)12] [i_0] [i_9] [i_9] [i_8] = ((/* implicit */_Bool) var_5);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_11 = 2; i_11 < 15; i_11 += 4) 
                {
                    arr_41 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((var_0) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_12 [i_11 + 2] [i_11 + 1]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        arr_44 [i_0] [i_8] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 11969904761934241308ULL))));
                        var_21 = ((/* implicit */unsigned int) var_10);
                        var_22 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (unsigned char)137))))));
                    }
                    arr_45 [(unsigned char)9] [(unsigned char)9] [i_0] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)28))));
                    arr_46 [i_0] [i_0] [(unsigned short)9] [i_8] = ((/* implicit */unsigned short) 7727386047052984936LL);
                    var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_3] [i_8] [i_3] [(_Bool)1] [i_11 + 1])) ? (((/* implicit */int) arr_35 [i_11 - 1] [i_11 - 1] [(short)8] [i_11 - 1] [i_11])) : (((/* implicit */int) arr_19 [10ULL] [(_Bool)1] [i_11 + 1]))));
                }
                for (unsigned short i_13 = 0; i_13 < 17; i_13 += 3) 
                {
                    var_24 = ((/* implicit */unsigned short) ((int) var_1));
                    /* LoopSeq 3 */
                    for (long long int i_14 = 1; i_14 < 15; i_14 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (~(8796093021696ULL))))));
                        arr_51 [i_0] [i_3] [i_8] [i_0] [i_14] = ((arr_17 [i_0] [7LL] [9LL] [i_13] [i_14 + 1]) >> (((/* implicit */int) var_10)));
                        arr_52 [i_8] [i_8] [i_8] [i_13] [i_13] [i_8] = ((/* implicit */unsigned long long int) var_10);
                        var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)137))));
                        arr_53 [i_8] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_14 + 2] [(unsigned short)16] [i_14 - 1] [9U] [1LL]))));
                    }
                    for (long long int i_15 = 1; i_15 < 15; i_15 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_3])) <= (((/* implicit */int) (_Bool)1))));
                        arr_56 [i_8] [i_8] [2U] [i_8] [i_3] [i_8] [i_0] = ((/* implicit */unsigned short) ((unsigned int) (_Bool)0));
                        arr_57 [i_8] [(unsigned short)0] [i_8] [i_8] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_15 + 1] [i_3])) && (((/* implicit */_Bool) var_9))));
                        arr_58 [i_8] = ((/* implicit */unsigned short) arr_29 [i_0] [i_3] [i_0] [i_13] [i_13] [2LL]);
                    }
                    for (long long int i_16 = 1; i_16 < 15; i_16 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294760984U)) ? (((/* implicit */int) (_Bool)1)) : (var_1)))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_4)) + (2147483647))) << (((((/* implicit */int) (unsigned short)56800)) - (56800)))))) : (var_11)));
                        arr_61 [i_0] [(_Bool)1] [6LL] &= ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)81))));
                    }
                    arr_62 [i_0] [i_3] [i_8] [i_3] [(unsigned char)1] [i_13] = ((/* implicit */unsigned long long int) ((((0ULL) <= (((/* implicit */unsigned long long int) -945077812)))) && (((7727386047052984927LL) != (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) == (var_1)));
                }
            }
            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0]))) - (arr_30 [i_3] [i_3] [i_3] [i_3])))));
        }
        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)127)) % (-1628173817)))) : (32212254720ULL)))));
    }
    /* vectorizable */
    for (unsigned short i_17 = 2; i_17 < 10; i_17 += 2) 
    {
        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((var_6) ? (((((/* implicit */_Bool) (short)15)) ? (((/* implicit */long long int) -1229171451)) : (4177784109485584473LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_17] [(unsigned short)12] [i_17] [i_17]))))))));
        arr_65 [i_17] [i_17] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
        arr_66 [i_17 + 1] [(unsigned char)4] = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
    }
    var_33 = ((/* implicit */_Bool) var_3);
    var_34 = ((/* implicit */unsigned int) var_5);
    var_35 = ((/* implicit */unsigned char) var_2);
}
