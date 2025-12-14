/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73000
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_10))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_3)))))))) >> (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((16ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-95))))) : (((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_11))))))));
        var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned char) min((arr_0 [(unsigned short)2] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)34762)))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (5LL) : (arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */short) max((((/* implicit */long long int) ((short) var_11))), ((-9223372036854775807LL - 1LL))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 34084860461056LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (-1411582225290332882LL)));
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_15 = ((/* implicit */signed char) max(((+(-2548013862852175636LL))), (((/* implicit */long long int) max(((unsigned short)34762), (((/* implicit */unsigned short) (short)15)))))));
            var_16 = ((/* implicit */short) (~(var_11)));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65525))) : (-9223372036854775804LL)));
            var_18 = ((/* implicit */unsigned char) var_11);
            var_19 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) arr_6 [i_0] [i_0])) % (((((((/* implicit */int) arr_7 [i_1])) + (2147483647))) << (((arr_1 [i_0]) - (5446967560767559756LL))))))));
        }
        for (short i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            var_20 ^= ((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2])) ? (arr_8 [i_0] [(unsigned char)16] [i_0]) : (var_3))), (-9LL))) < (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2]))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)41168)) : (((/* implicit */int) var_7)))))))));
            /* LoopNest 2 */
            for (long long int i_3 = 4; i_3 < 22; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    {
                        var_21 += ((/* implicit */unsigned char) arr_1 [i_4]);
                        /* LoopSeq 4 */
                        for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_13 [i_3 - 1] [i_3 + 2] [i_3 - 3] [i_3 - 1])), (arr_11 [i_0] [i_3 + 2] [i_3 - 1] [i_3 - 3]))))));
                            var_23 = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_7 [i_3 + 1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)229)) && (((/* implicit */_Bool) 7334934810043815962ULL)))))) : (min((((/* implicit */long long int) ((unsigned char) arr_9 [i_0]))), ((~(var_4)))))));
                        }
                        for (unsigned short i_6 = 2; i_6 < 23; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) ((unsigned char) var_4))), (((arr_5 [i_0] [i_0] [i_3 + 2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                            var_26 = ((/* implicit */short) max((arr_6 [i_2] [i_6]), (max(((unsigned char)32), ((unsigned char)32)))));
                            var_27 = ((/* implicit */signed char) var_13);
                            var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-19184))));
                            arr_19 [i_0] [i_2] [i_3] [i_4] [i_6] = ((/* implicit */signed char) var_10);
                        }
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_7] [i_4])) ? (arr_5 [13LL] [13LL] [i_7]) : (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_2))))) : (arr_14 [i_2] [i_0] [i_3 - 2] [i_3 + 1] [(unsigned short)12] [i_3] [i_7])));
                            var_30 = ((/* implicit */signed char) arr_23 [i_3 - 4] [i_3] [i_3 + 2] [i_3] [i_0]);
                            var_31 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_1)))));
                        }
                        /* vectorizable */
                        for (unsigned short i_8 = 2; i_8 < 20; i_8 += 4) 
                        {
                            arr_26 [i_3 - 3] [(unsigned short)19] [i_3 + 1] [i_0] [(unsigned short)19] [i_3 + 1] [i_3] = ((/* implicit */long long int) (unsigned char)88);
                            var_32 ^= ((/* implicit */unsigned char) (short)-19184);
                        }
                        arr_27 [i_0] [i_2] [i_4] [i_4] |= ((/* implicit */long long int) ((signed char) arr_23 [i_3] [16ULL] [i_3] [i_3] [i_4]));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            var_33 = ((/* implicit */long long int) arr_21 [2LL] [i_0] [i_0] [(unsigned short)3] [i_0] [i_0] [i_0]);
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) 11916204209030581791ULL))) ? (arr_0 [(unsigned short)21] [i_9]) : (((unsigned long long int) var_1))));
        }
        for (signed char i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            arr_32 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) / (var_4))) / (((/* implicit */long long int) ((/* implicit */int) (short)28672))))) > (-1411582225290332882LL)));
            var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) arr_12 [i_0] [i_0] [(unsigned short)19] [(unsigned short)19]))));
            var_36 = ((/* implicit */unsigned short) 576460752303423487LL);
        }
    }
    for (long long int i_11 = 2; i_11 < 13; i_11 += 1) /* same iter space */
    {
        arr_35 [14ULL] |= ((/* implicit */short) max((576460752303423487LL), (((/* implicit */long long int) (short)3584))));
        arr_36 [(signed char)2] [(signed char)2] |= ((/* implicit */unsigned short) ((max((-4142389214716902008LL), (((/* implicit */long long int) var_2)))) <= (((((/* implicit */_Bool) (short)1062)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))) : (-576460752303423488LL)))));
        var_37 += ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4453030682478730603LL)) ? (((/* implicit */int) arr_20 [(unsigned char)0])) : (((/* implicit */int) (short)-1))))), (11916204209030581791ULL)))));
    }
    for (long long int i_12 = 2; i_12 < 13; i_12 += 1) /* same iter space */
    {
        var_38 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_1 [i_12 + 2]), (arr_1 [i_12 - 1])))) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) arr_17 [i_12] [i_12 + 2]))));
        var_39 = ((/* implicit */short) 8935141660703064064ULL);
        arr_39 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((6530539864678969827ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)46)) - (((/* implicit */int) (unsigned short)26172))))))) : (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_12 - 1] [(unsigned char)20] [i_12 - 1] [i_12] [i_12] [i_12 - 1] [i_12]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)8160))) & (var_5)))))));
    }
    for (long long int i_13 = 2; i_13 < 13; i_13 += 1) /* same iter space */
    {
        var_40 |= ((/* implicit */unsigned char) max((min((((/* implicit */long long int) (+(((/* implicit */int) var_12))))), (var_3))), (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)210)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)26938)))))))));
        var_41 += ((/* implicit */long long int) ((unsigned short) max((arr_11 [(unsigned char)0] [(unsigned char)6] [i_13] [(unsigned char)6]), (((/* implicit */unsigned short) arr_7 [i_13 + 4])))));
    }
    var_42 ^= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)10)) * (((/* implicit */int) (unsigned short)32764))))) ? (min((((/* implicit */long long int) var_6)), (var_11))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 4) /* same iter space */
    {
        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) arr_8 [i_14] [i_14] [i_14]))));
        /* LoopNest 2 */
        for (unsigned char i_15 = 0; i_15 < 16; i_15 += 1) 
        {
            for (short i_16 = 0; i_16 < 16; i_16 += 1) 
            {
                {
                    var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) (-(arr_5 [i_14] [i_15] [i_16]))))));
                    var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-26105)) ? (((/* implicit */int) arr_42 [i_14])) : (((/* implicit */int) arr_47 [i_14] [i_15] [i_14] [i_14]))));
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 0; i_17 < 16; i_17 += 4) 
                    {
                        for (long long int i_18 = 0; i_18 < 16; i_18 += 4) 
                        {
                            {
                                var_46 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_3)))) ? (arr_31 [i_15]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                                var_47 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_44 [(unsigned char)12] [i_15] [(unsigned char)12])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_44 [i_17] [i_15] [i_14]))));
                            }
                        } 
                    } 
                    arr_54 [i_15] [i_15] = ((/* implicit */unsigned short) arr_42 [i_14]);
                }
            } 
        } 
    }
    for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 4) /* same iter space */
    {
        var_48 = ((/* implicit */short) ((((/* implicit */_Bool) arr_56 [i_19])) ? (max((((/* implicit */unsigned long long int) arr_45 [i_19] [i_19] [i_19])), (var_0))) : (((/* implicit */unsigned long long int) (-(var_4))))));
        /* LoopNest 2 */
        for (unsigned char i_20 = 0; i_20 < 16; i_20 += 4) 
        {
            for (short i_21 = 2; i_21 < 15; i_21 += 3) 
            {
                {
                    arr_62 [i_19] [i_21] = ((/* implicit */signed char) (unsigned short)0);
                    var_49 = ((/* implicit */signed char) arr_58 [i_19] [i_19] [i_19]);
                }
            } 
        } 
        var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (min(((+(((/* implicit */int) (short)32755)))), (((((/* implicit */int) arr_34 [i_19] [i_19])) / (((/* implicit */int) (short)32747)))))) : (((/* implicit */int) (unsigned short)65535))));
    }
    for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 4) /* same iter space */
    {
        var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)0)), ((short)1065))))) : (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [(signed char)18] [i_22] [i_22] [i_22]))))))))));
        arr_67 [1ULL] [(short)14] = ((/* implicit */short) ((137438953408ULL) >> (((((/* implicit */int) (short)-26938)) + (26979)))));
    }
    var_52 = var_8;
}
