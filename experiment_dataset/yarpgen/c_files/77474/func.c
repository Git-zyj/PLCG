/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77474
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (var_3) : (((/* implicit */unsigned int) 2097148)))))));
        var_12 = ((/* implicit */int) ((short) (short)20207));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 4; i_1 < 18; i_1 += 2) /* same iter space */
        {
            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (((~(((/* implicit */int) arr_1 [i_0])))) | (((/* implicit */int) (signed char)5)))))));
            arr_5 [i_0] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) var_6);
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((((arr_4 [i_0]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_8)) - (60442))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(var_1)));
                }
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    var_15 |= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-5)) ? (((unsigned long long int) (unsigned short)65535)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_0])))))));
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        var_16 -= ((/* implicit */unsigned long long int) var_0);
                        var_17 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_2 + 1])) == (((/* implicit */int) arr_12 [i_2 + 1]))));
                        var_18 = ((/* implicit */unsigned char) arr_7 [i_0] [i_1 + 2] [i_4] [i_5]);
                    }
                    for (int i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned char) var_5);
                        var_20 = ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned short)0)))) - (((/* implicit */int) arr_7 [i_4] [i_2 + 1] [i_2 + 1] [i_1 - 4]))));
                        var_21 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535))));
                    }
                    for (int i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
                    {
                        arr_23 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_9 [17U] [i_1] [i_1 - 4] [i_1]))) + (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) arr_16 [i_1 - 2] [i_1 - 3] [i_2]))))));
                        arr_24 [i_0] [i_1] [i_4] [i_0] [i_7] = ((/* implicit */unsigned char) ((signed char) arr_14 [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_2] [(_Bool)0]));
                    }
                    var_22 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 612968764U)) ? (((/* implicit */int) arr_21 [i_1] [i_1 + 2] [i_1 + 1] [i_1] [i_2])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_3)));
                    var_23 = ((/* implicit */unsigned long long int) arr_7 [i_1 + 1] [i_2] [i_2] [i_2 + 1]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 3; i_8 < 17; i_8 += 3) 
                    {
                        arr_27 [18U] [i_4] [i_2] [i_2 + 1] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 4]))) | (3681998532U)));
                        arr_28 [i_4] [(short)9] [i_4] [(unsigned short)11] [i_4] [i_4] [i_4] = ((/* implicit */short) (~(((/* implicit */int) arr_13 [i_0] [i_1] [i_4] [i_8 - 2]))));
                    }
                    for (signed char i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        arr_31 [i_1] [i_4] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))) : (3181634111U)));
                        var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9166438485626841712ULL)) ? (((/* implicit */int) (signed char)5)) : (-1183968108)));
                    }
                }
                for (signed char i_10 = 2; i_10 < 19; i_10 += 4) 
                {
                    var_25 ^= ((/* implicit */short) ((int) ((((/* implicit */int) (unsigned short)65518)) >> (((((/* implicit */int) (unsigned char)83)) - (58))))));
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        arr_38 [i_0] [i_0] [i_2] [i_10] [(short)2] [i_0] [i_0] |= ((/* implicit */unsigned short) (unsigned char)15);
                        var_26 ^= ((/* implicit */short) ((((/* implicit */int) arr_21 [i_0] [i_10] [i_2] [i_1 - 2] [i_0])) != (((((/* implicit */_Bool) arr_19 [i_11] [i_10] [i_2] [7] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))));
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_10 - 2] [i_10 - 1] [i_2 + 1] [i_1 - 3])))))));
                    }
                }
                arr_39 [i_0] [i_1] [i_2 + 1] = ((/* implicit */_Bool) ((unsigned short) var_6));
            }
        }
        for (unsigned long long int i_12 = 4; i_12 < 18; i_12 += 2) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_12 + 1] [i_12 - 3] [i_12 + 2])) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [(signed char)12] [i_12])) : ((~(((/* implicit */int) var_0))))));
            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) arr_42 [i_12] [i_0] [i_0]))));
            var_30 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) (signed char)-11)) % (366895221))));
            /* LoopSeq 1 */
            for (unsigned char i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 1; i_14 < 18; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_51 [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */signed char) arr_12 [i_0]);
                        arr_52 [i_13] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((1048560) | (((/* implicit */int) (unsigned char)22))));
                        arr_53 [i_15] [i_15] [i_14 + 1] [i_15] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (arr_9 [i_14] [i_14 + 1] [i_14 + 1] [i_14 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_14] [i_14] [i_14] [i_14] [i_13])))));
                    }
                    var_31 ^= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) (short)-256)))));
                }
                var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) var_7))));
                /* LoopSeq 2 */
                for (unsigned int i_16 = 0; i_16 < 20; i_16 += 4) 
                {
                    arr_57 [i_0] [i_12 - 4] [i_12 - 4] [i_12 - 4] [i_13] = ((/* implicit */unsigned long long int) ((_Bool) arr_16 [i_0] [i_12 - 2] [(unsigned char)0]));
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [(signed char)10] [(unsigned short)11] [i_16])) ? (((arr_1 [i_0]) ? (arr_19 [i_12 + 1] [i_12 + 1] [i_12] [i_12] [i_12 - 2]) : (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_17 [i_16] [i_12] [i_12] [i_0]))));
                }
                for (unsigned short i_17 = 0; i_17 < 20; i_17 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_18 = 0; i_18 < 20; i_18 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned int) ((_Bool) ((var_1) % (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
                        arr_64 [i_0] [i_0] [i_12 - 4] [i_13] [i_17] [i_13] = ((/* implicit */unsigned char) ((((1048575) >> (((/* implicit */int) (signed char)5)))) + (((/* implicit */int) arr_37 [i_0] [i_12 + 2] [i_12 + 2] [i_17] [i_18] [i_17] [(unsigned short)5]))));
                    }
                    for (int i_19 = 0; i_19 < 20; i_19 += 2) 
                    {
                        var_35 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_12 + 2] [i_12 - 3] [i_12 - 3] [i_12 - 2] [i_12 - 4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)242))))) : (((/* implicit */int) ((unsigned char) var_4)))));
                        var_36 = ((/* implicit */unsigned long long int) arr_47 [(unsigned short)14] [i_12] [(unsigned short)14] [i_0]);
                    }
                    arr_67 [i_0] [i_13] [i_13] [i_0] = ((/* implicit */signed char) arr_44 [i_12] [i_13] [i_17]);
                }
            }
        }
    }
    var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((signed char) var_9)))));
}
