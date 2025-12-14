/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77257
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
    var_18 = ((/* implicit */int) var_17);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_19 += (+((-(((/* implicit */int) (unsigned short)5202)))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            arr_5 [(short)5] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? ((((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) min((arr_3 [i_0] [i_0] [i_1]), (var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))) : (var_1)));
            var_20 = var_12;
        }
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7841113578979614423LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL)))) ? (((long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_1)))) : (((/* implicit */long long int) (+(((((/* implicit */int) arr_0 [i_0] [i_0])) / (arr_1 [i_0]))))))));
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -7841113578979614407LL)) ? (7841113578979614406LL) : ((-9223372036854775807LL - 1LL))));
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
        {
            arr_12 [i_3] = ((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3])))))) / (arr_10 [i_3] [i_2] [i_2])))));
            var_21 = ((/* implicit */_Bool) (-(min((14702497435552868661ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
            var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 9223372036854775807LL))));
            var_23 = ((/* implicit */_Bool) ((((arr_10 [i_2] [2] [i_3]) >= (arr_10 [i_2] [i_3] [i_3]))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 12982480464319533454ULL)) ? ((-2147483647 - 1)) : (16777200))), (((/* implicit */int) ((arr_11 [i_2]) != (arr_11 [i_3]))))))) : (min((((((/* implicit */_Bool) (short)14636)) ? (arr_10 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned int) arr_11 [i_2])))), (arr_10 [i_2] [i_2] [i_2])))));
            arr_13 [i_3] = ((((((/* implicit */_Bool) ((long long int) var_5))) && (((/* implicit */_Bool) min((arr_11 [i_2]), (arr_11 [i_3])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_10 [i_3] [(unsigned short)5] [i_2])), (var_14)))) && (((((/* implicit */_Bool) arr_8 [i_2])) && (((/* implicit */_Bool) arr_11 [i_3])))))))) : (min((((((/* implicit */_Bool) arr_10 [i_3] [i_2] [i_2])) ? (arr_8 [(unsigned char)7]) : (arr_8 [i_2]))), (min((((/* implicit */long long int) var_13)), (arr_8 [i_2]))))));
        }
        for (long long int i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_5 = 2; i_5 < 15; i_5 += 1) 
            {
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)41)) ? (12982480464319533454ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-68)))));
                var_25 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_15 [i_2] [i_2])) ? (arr_15 [i_4] [i_2]) : (arr_15 [i_5] [i_2]))), (arr_15 [i_2] [i_2])));
            }
            arr_19 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) arr_14 [i_4] [i_2])) : (arr_11 [i_2]))))));
            arr_20 [i_2] [i_4] [i_4] = arr_17 [0] [i_4] [0];
        }
        /* LoopSeq 3 */
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_7 = 4; i_7 < 16; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) var_6);
                        var_27 = ((/* implicit */unsigned char) var_10);
                    }
                } 
            } 
            arr_27 [i_2] [i_6] [i_6] = (short)-12505;
        }
        for (signed char i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 1) 
                {
                    for (long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        {
                            var_28 = (_Bool)1;
                            var_29 = ((((/* implicit */_Bool) (~(-7841113578979614407LL)))) ? (((((/* implicit */int) (_Bool)1)) / ((+(((/* implicit */int) arr_18 [i_12])))))) : (((((/* implicit */int) min((((/* implicit */unsigned char) var_9)), (arr_28 [i_10])))) << (((((/* implicit */int) arr_26 [(unsigned char)4] [i_9] [i_9] [i_9])) - (51))))));
                            var_30 = ((/* implicit */unsigned int) min((arr_35 [i_2] [i_10]), (arr_35 [i_10] [i_2])));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */short) max(((((((+(arr_21 [i_2] [i_9]))) + (2147483647))) << (((((((/* implicit */int) arr_31 [i_2] [i_9])) ^ (var_0))) - (284862430))))), (((/* implicit */int) var_17))));
        }
        for (signed char i_13 = 0; i_13 < 18; i_13 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_14 = 0; i_14 < 18; i_14 += 1) 
            {
                var_32 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (arr_43 [(short)0]) : (((/* implicit */long long int) ((/* implicit */int) arr_41 [(_Bool)0] [(_Bool)0])))));
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 3) 
                {
                    for (unsigned char i_16 = 0; i_16 < 18; i_16 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) arr_17 [i_2] [i_13] [i_14]);
                            var_34 ^= ((/* implicit */long long int) arr_18 [0LL]);
                        }
                    } 
                } 
                var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_37 [i_14] [i_13] [i_2]))));
            }
            for (long long int i_17 = 0; i_17 < 18; i_17 += 4) 
            {
                arr_51 [i_2] [i_13] [i_17] = ((/* implicit */short) (unsigned char)231);
                var_36 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((signed char) (unsigned short)65535))) ? (min((var_14), (((/* implicit */unsigned long long int) -7841113578979614407LL)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_13] [i_13]))))))) | (((/* implicit */unsigned long long int) arr_29 [i_2]))));
                var_37 = ((/* implicit */unsigned long long int) arr_49 [i_2] [i_13]);
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 1) 
            {
                var_38 = ((/* implicit */unsigned int) (-(min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) arr_37 [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))))));
                var_39 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_53 [i_18] [i_13] [(signed char)5])) ? (((((/* implicit */_Bool) arr_31 [i_2] [i_13])) ? (arr_8 [i_2]) : (((/* implicit */long long int) arr_36 [i_2] [i_2] [i_2] [i_2] [i_2])))) : (((/* implicit */long long int) min((((/* implicit */int) arr_35 [i_2] [i_2])), (arr_39 [i_18])))))) ^ (arr_52 [i_13] [i_18])));
                /* LoopSeq 2 */
                for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                {
                    var_40 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_32 [i_2]))))) ? (((((/* implicit */_Bool) 14981732958437767239ULL)) ? (5483125632517847025LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))))) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_35 [i_18] [i_19])), ((unsigned short)65535)))) ? (min((var_2), (((/* implicit */int) arr_33 [i_2] [i_13] [i_2] [i_19])))) : ((+(((/* implicit */int) var_4)))))) : (((/* implicit */int) min((arr_26 [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_19 - 1]), (arr_26 [i_19 - 1] [i_19 - 1] [i_19] [i_19 - 1]))))));
                    arr_56 [i_18] [i_18] [i_13] [i_13] [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_42 [i_19 - 1] [i_18] [i_13] [i_2])) : (1325658107))) / (min((((/* implicit */int) arr_25 [i_2] [i_2] [i_2] [i_2])), (var_0)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)56220)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)65535))))), (-5230697532994538812LL)))) : (12982480464319533464ULL)));
                    var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) min((((/* implicit */long long int) (unsigned char)3)), (117440512LL))))));
                    arr_57 [i_18] = ((/* implicit */int) (!(((min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (5365312554358555607ULL))) < (((/* implicit */unsigned long long int) arr_52 [i_2] [i_2]))))));
                }
                /* vectorizable */
                for (short i_20 = 2; i_20 < 14; i_20 += 3) 
                {
                    arr_61 [i_2] [i_13] [i_13] [i_18] [i_20 + 3] = ((((arr_37 [i_2] [i_13] [i_18]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_2] [i_18] [i_20]))))) ? (((/* implicit */unsigned long long int) arr_43 [i_18])) : (((2653134470410911045ULL) ^ (((/* implicit */unsigned long long int) arr_49 [i_18] [i_20])))));
                    arr_62 [i_2] [i_18] = ((/* implicit */unsigned int) ((arr_16 [i_2] [i_2] [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_2] [i_2] [i_18] [i_20 + 3])))));
                }
                var_42 = ((/* implicit */unsigned char) 13081431519350996012ULL);
            }
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                var_43 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) arr_40 [i_2] [i_13] [i_21])))));
                arr_65 [i_2] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_54 [i_2] [i_13] [i_21] [i_21])) < (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) min((arr_64 [(signed char)13] [i_13] [i_2] [i_2]), (arr_64 [i_2] [i_2] [i_2] [(unsigned char)14])))) : (min(((~(((/* implicit */int) var_13)))), (arr_39 [i_21])))));
                var_44 = ((/* implicit */_Bool) arr_25 [(unsigned char)8] [i_21] [i_13] [i_2]);
                arr_66 [i_21] [13LL] [(unsigned char)6] = ((/* implicit */unsigned long long int) arr_52 [i_21] [i_13]);
            }
            arr_67 [i_13] = min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_42 [i_2] [i_2] [0] [i_2])) ? (((/* implicit */int) arr_41 [0] [0])) : (((/* implicit */int) (unsigned char)24)))) ^ (min((var_0), (((/* implicit */int) (unsigned short)65535))))))), (((((/* implicit */_Bool) arr_37 [i_2] [i_13] [i_13])) ? (arr_37 [i_2] [i_2] [i_13]) : (arr_37 [i_13] [i_13] [i_2]))));
        }
        var_45 = arr_43 [(_Bool)1];
        var_46 = ((/* implicit */_Bool) (signed char)-102);
    }
    for (short i_22 = 2; i_22 < 21; i_22 += 3) 
    {
        arr_70 [i_22] [i_22] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)19874))))) : (min((arr_68 [i_22] [i_22]), (arr_68 [i_22] [i_22])))))));
        var_47 = ((/* implicit */unsigned short) 0LL);
        arr_71 [i_22] = ((/* implicit */_Bool) max((arr_69 [i_22]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_68 [i_22] [i_22])))))));
    }
    var_48 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(-9223372036854775797LL)))), (((((/* implicit */_Bool) min((var_17), (var_13)))) ? (max((((/* implicit */unsigned long long int) var_17)), (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
    var_49 = ((/* implicit */unsigned int) var_8);
}
