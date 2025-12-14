/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81815
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
    var_10 = ((/* implicit */_Bool) (short)-27748);
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 11; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [3ULL] [i_0] [(_Bool)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
                        var_11 ^= ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
                        arr_10 [(unsigned char)10] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(var_7)));
                    }
                } 
            } 
        } 
        var_12 = ((((/* implicit */int) var_1)) != (arr_8 [i_0] [(short)2] [(short)2]));
    }
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        arr_13 [i_4] = ((/* implicit */unsigned long long int) arr_12 [i_4] [i_4]);
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (unsigned short)25615))));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 2; i_5 < 24; i_5 += 1) 
        {
            arr_16 [i_4] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (((1964722200780411984ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4]))))))) ^ (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_12 [(unsigned short)22] [(unsigned short)22])) + (((/* implicit */int) var_4)))))))));
            var_14 ^= ((/* implicit */int) arr_12 [i_5 + 1] [i_5 - 2]);
        }
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_20 [i_6] = ((/* implicit */unsigned int) var_4);
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            arr_23 [i_6] = ((/* implicit */unsigned short) (+(arr_14 [i_6])));
            arr_24 [i_7] = ((/* implicit */unsigned short) (~(arr_19 [i_7])));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                for (unsigned short i_9 = 1; i_9 < 16; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        {
                            arr_31 [(unsigned short)11] [(unsigned short)11] [i_7] [i_8] [i_8] [i_9] [(unsigned short)11] = ((/* implicit */_Bool) arr_15 [i_6]);
                            var_15 = ((/* implicit */unsigned short) arr_25 [i_6] [i_7]);
                            arr_32 [(_Bool)1] [i_10] = ((/* implicit */_Bool) (~(arr_29 [i_9 - 1] [i_9 + 1] [i_10] [i_10])));
                            var_16 = ((((arr_28 [i_6] [i_7] [i_8] [i_9] [i_10]) + (2147483647))) << (((((arr_14 [i_9 + 1]) + (1586953874))) - (22))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_11 = 2; i_11 < 13; i_11 += 1) 
        {
            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) min((arr_33 [i_11] [(unsigned short)16]), (((/* implicit */int) arr_11 [i_6])))))));
            arr_35 [i_6] [13ULL] [i_6] = ((/* implicit */long long int) arr_30 [i_6] [i_6] [i_11 + 1] [i_11] [i_11]);
        }
        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
        {
            arr_40 [i_12] [(signed char)6] = ((/* implicit */unsigned long long int) (+((+((-(((/* implicit */int) var_1))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 3; i_13 < 14; i_13 += 1) 
            {
                for (unsigned short i_14 = 0; i_14 < 17; i_14 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_15 = 0; i_15 < 17; i_15 += 1) 
                        {
                            var_18 &= ((/* implicit */unsigned short) max(((~(min((var_7), (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) arr_11 [i_6]))));
                            var_19 = ((/* implicit */short) var_4);
                            var_20 += ((/* implicit */int) var_8);
                            var_21 &= ((/* implicit */unsigned short) (+(min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_6))), (((/* implicit */unsigned long long int) arr_26 [i_15]))))));
                            var_22 ^= ((/* implicit */long long int) (signed char)-103);
                        }
                        /* LoopSeq 2 */
                        for (int i_16 = 0; i_16 < 17; i_16 += 1) 
                        {
                            arr_51 [5] [i_12] [i_13] [i_12] [i_16] = ((/* implicit */unsigned short) var_9);
                            var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((((((/* implicit */int) (signed char)-106)) + (2147483647))) >> (((((/* implicit */int) var_4)) - (114))))) : ((+(arr_14 [i_6])))))) + (min((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_11 [i_12 + 1])))))))));
                        }
                        for (unsigned char i_17 = 0; i_17 < 17; i_17 += 1) 
                        {
                            arr_56 [i_17] [1] [4] [i_14] [i_17] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) var_9))) >> (min((min((((/* implicit */unsigned long long int) var_9)), (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_37 [i_14])))))))));
                            arr_57 [i_17] = ((/* implicit */int) ((((/* implicit */long long int) ((((min((var_0), (((/* implicit */int) var_4)))) + (2147483647))) >> (((((/* implicit */int) arr_15 [i_14])) - (11243)))))) & (((long long int) arr_43 [i_6]))));
                            var_24 = ((/* implicit */int) var_8);
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            arr_61 [i_6] [i_18] [i_18] [i_14] [i_18] = ((/* implicit */unsigned char) 5525127363592517017ULL);
                            var_25 = ((/* implicit */unsigned char) arr_36 [i_14]);
                            arr_62 [i_18] = ((((/* implicit */int) arr_12 [1ULL] [i_6])) != (arr_21 [i_6] [10ULL]));
                            var_26 &= ((/* implicit */unsigned short) max((((unsigned long long int) min((var_7), (((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) var_4))));
                        }
                        var_27 = ((/* implicit */signed char) (short)-27751);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_19 = 2; i_19 < 16; i_19 += 1) 
        {
            var_28 = ((/* implicit */signed char) var_0);
            var_29 += ((/* implicit */unsigned short) (+(1751410696)));
            /* LoopNest 2 */
            for (short i_20 = 1; i_20 < 16; i_20 += 1) 
            {
                for (int i_21 = 0; i_21 < 17; i_21 += 1) 
                {
                    {
                        var_30 = ((/* implicit */unsigned char) (~(var_6)));
                        var_31 = ((((/* implicit */_Bool) arr_39 [i_6] [i_19 - 2] [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_19] [i_19 + 1] [(unsigned char)6] [i_20 - 1] [i_20 + 1] [i_19 + 1] [(short)14]))) : (arr_47 [i_19] [i_21]));
                    }
                } 
            } 
        }
    }
    for (unsigned short i_22 = 2; i_22 < 16; i_22 += 1) 
    {
        var_32 |= ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) arr_12 [i_22 - 1] [i_22 - 1])), (arr_72 [i_22 + 1])))));
        var_33 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_11 [i_22]))))))), (min((min((((/* implicit */unsigned long long int) var_9)), (arr_70 [i_22]))), (((/* implicit */unsigned long long int) (unsigned short)29840))))));
        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) max((arr_71 [i_22 - 2]), (arr_71 [i_22 - 1])))) : (arr_14 [i_22])));
        /* LoopNest 2 */
        for (int i_23 = 3; i_23 < 18; i_23 += 1) 
        {
            for (signed char i_24 = 3; i_24 < 18; i_24 += 1) 
            {
                {
                    var_35 = min((arr_76 [(unsigned short)10] [(unsigned short)10] [i_23 - 1] [(unsigned short)10]), (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned short) arr_77 [(unsigned short)8] [(signed char)2] [(signed char)2] [14ULL])), (var_8))))));
                    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_75 [i_22 - 2] [i_23 - 2]))) % ((+(arr_70 [i_22])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_73 [i_23] [i_23]))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((arr_14 [i_23 - 1]) | (((/* implicit */int) (signed char)(-127 - 1)))))) : (min((arr_74 [i_22] [i_23] [i_24]), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                    var_37 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (var_6)))) ? (((/* implicit */int) (unsigned short)43678)) : (((var_7) - (((/* implicit */int) arr_15 [i_22])))))) <= (((/* implicit */int) min((arr_12 [i_23 - 3] [i_22 - 2]), (((/* implicit */unsigned char) var_4)))))));
                }
            } 
        } 
        arr_79 [i_22] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_14 [i_22])), ((~(arr_78 [i_22] [i_22 + 2])))));
    }
}
