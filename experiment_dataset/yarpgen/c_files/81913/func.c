/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81913
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
    var_12 = ((/* implicit */unsigned short) (signed char)-31);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-31)) ? (7788807187084078982ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-27))))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_2 = 1; i_2 < 15; i_2 += 3) /* same iter space */
            {
                var_14 = ((/* implicit */unsigned int) (unsigned short)7752);
                arr_7 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((arr_6 [i_0] [i_0] [(unsigned char)8] [i_2 - 1]) ? (arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_0])) + (2147483647))) << (((((/* implicit */int) var_11)) - (9921))))))));
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_8)));
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 4) 
                {
                    arr_11 [i_0] [i_2] = ((/* implicit */unsigned long long int) var_4);
                    arr_12 [i_0] [i_2] = arr_5 [i_2] [i_1] [i_2 + 1] [i_0];
                }
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2 + 1])) ? (((/* implicit */int) arr_3 [i_2 + 1])) : (((/* implicit */int) arr_3 [i_2 - 1]))));
                    arr_17 [4ULL] [i_1] [i_1] [i_2] = (unsigned short)5307;
                    var_17 -= ((/* implicit */unsigned int) ((long long int) arr_14 [i_0] [i_1] [i_1]));
                }
            }
            /* vectorizable */
            for (long long int i_5 = 1; i_5 < 15; i_5 += 3) /* same iter space */
            {
                arr_21 [i_0] [i_0] [1] = ((/* implicit */signed char) arr_5 [12LL] [12LL] [6] [i_5 - 1]);
                var_18 -= ((/* implicit */_Bool) (short)-17062);
                arr_22 [i_0] [i_1] [i_5] [i_5] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_5])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_5 [7LL] [i_1] [i_5 + 1] [i_5]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)26))))))));
            }
            /* vectorizable */
            for (short i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                var_19 = ((/* implicit */short) (+(arr_10 [i_0] [i_1] [i_1] [9ULL] [i_0] [i_1])));
                /* LoopNest 2 */
                for (long long int i_7 = 2; i_7 < 13; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) var_4);
                            arr_33 [i_0] [i_1] [i_6] [i_0] [i_8] = ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [4ULL] [i_1] [4ULL] [i_6] [i_7] [4ULL])) : (((/* implicit */int) var_2))))) > (((((/* implicit */_Bool) arr_0 [(signed char)2])) ? (((/* implicit */long long int) arr_27 [i_0] [5U])) : (arr_19 [i_0] [i_1] [i_6]))));
                            var_21 = ((/* implicit */long long int) arr_5 [i_0] [i_1] [9ULL] [i_7]);
                            var_22 = ((/* implicit */unsigned short) var_4);
                            arr_34 [i_0] [i_0] [i_6] [i_7] [i_8] = ((/* implicit */int) var_8);
                        }
                    } 
                } 
            }
            var_23 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_14 [i_0] [i_1] [i_1]))) > (((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_14 [i_0] [i_1] [i_1])) - (19166)))))));
            arr_35 [i_0] = (!(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-31)), (arr_0 [6LL])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)149)) ? (11156499033231953789ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30)))))))));
        }
        /* vectorizable */
        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
        {
            var_24 += ((/* implicit */unsigned char) arr_5 [i_0] [i_9] [i_0] [i_9]);
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 1; i_11 < 14; i_11 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 16; i_12 += 2) 
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)27)) || (((/* implicit */_Bool) arr_43 [i_11 - 1] [i_10] [i_11] [i_11 - 1]))));
                            var_26 = (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26))) > (4331618760960116721ULL)))));
                            arr_48 [1] [5U] [i_9] [5U] [i_10] [i_12] = ((/* implicit */unsigned int) ((((long long int) var_5)) % (((/* implicit */long long int) arr_42 [i_0] [i_9] [12LL] [i_12]))));
                            arr_49 [i_10] [i_10] = ((/* implicit */signed char) (+(((/* implicit */int) arr_44 [i_11 - 1] [i_9] [i_10] [i_11] [i_12] [i_12]))));
                            var_27 = ((/* implicit */unsigned char) (~(arr_37 [i_0])));
                        }
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_46 [8ULL] [i_11 + 1] [8ULL] [i_11 + 2] [i_11 + 1] [i_11 + 2])) ? (((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) arr_27 [i_10] [i_0])))) : (((/* implicit */unsigned long long int) arr_38 [i_10] [(unsigned short)4] [(unsigned short)4] [i_11]))));
                    }
                } 
            } 
        }
        for (unsigned short i_13 = 0; i_13 < 16; i_13 += 4) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned long long int) ((var_5) << (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_0 [i_13])) ? (((/* implicit */int) (_Bool)0)) : (var_5))) : (((/* implicit */int) var_1))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_14 = 3; i_14 < 14; i_14 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_15 = 0; i_15 < 16; i_15 += 4) 
                {
                    var_30 = ((/* implicit */_Bool) arr_53 [i_13] [i_13]);
                    var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_47 [i_0] [i_13] [i_14] [i_14] [i_0] [9ULL] [i_14])) ? (arr_25 [i_0] [i_14 - 3] [i_14 - 3] [i_14 - 3]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))))))));
                    arr_59 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_13] [3LL])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */int) var_2)) >> (((var_8) - (2145642235U))))) : ((-(((/* implicit */int) (short)-8878)))));
                }
                for (int i_16 = 1; i_16 < 15; i_16 += 2) 
                {
                    arr_62 [i_0] [i_13] [i_14] [i_14] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_40 [i_13] [i_16])) : (var_10))) << (((((unsigned long long int) var_0)) - (2138228558078291191ULL)))));
                    var_32 = ((/* implicit */unsigned char) var_1);
                }
                arr_63 [i_0] [i_0] [(unsigned short)0] [i_0] = ((/* implicit */long long int) (((((~(((/* implicit */int) (signed char)27)))) + (2147483647))) >> (((((/* implicit */int) arr_13 [i_13] [i_14 - 2] [i_14 - 2] [i_14 + 1])) + (27799)))));
            }
            var_33 -= var_0;
        }
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 19; i_17 += 3) 
    {
        arr_66 [10ULL] = ((/* implicit */unsigned long long int) var_8);
        /* LoopSeq 1 */
        for (signed char i_18 = 0; i_18 < 19; i_18 += 3) 
        {
            arr_70 [i_18] = ((/* implicit */unsigned int) (signed char)-31);
            var_34 = ((/* implicit */long long int) arr_69 [i_17] [i_18]);
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_69 [i_17] [i_18])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_67 [i_17] [i_17] [i_17])) : (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_65 [i_17] [i_18])) : (((/* implicit */int) arr_67 [i_17] [i_18] [1]))))));
        }
        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_64 [i_17])) : (((/* implicit */int) var_2))));
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        var_37 = ((/* implicit */unsigned short) max((var_37), (arr_61 [i_19])));
        arr_73 [i_19] = ((/* implicit */long long int) ((((((((/* implicit */int) var_2)) > (var_5))) ? (12038163811293253953ULL) : ((+(1694785153974703502ULL))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1283)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) arr_56 [i_19] [i_19] [7] [i_19])) : (var_7)))));
    }
}
