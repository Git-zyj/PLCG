/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71008
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_17))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            var_19 -= max((((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))), (((min((var_4), (var_14))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_1 [(_Bool)0] [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [20LL]))))))));
            arr_6 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_4)), (arr_4 [i_0] [i_1] [i_1])))), (var_9))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (1071208007U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
        }
        /* vectorizable */
        for (long long int i_2 = 3; i_2 < 21; i_2 += 4) 
        {
            var_20 += ((/* implicit */_Bool) (~(arr_5 [i_2 - 2])));
            var_21 = ((/* implicit */short) ((arr_8 [i_2 + 1] [i_2 - 3] [i_0]) < (((var_4) ? (arr_1 [i_0] [i_0]) : (arr_7 [4ULL])))));
            /* LoopSeq 2 */
            for (unsigned char i_3 = 1; i_3 < 20; i_3 += 1) 
            {
                arr_12 [i_0] [i_0] = ((/* implicit */int) (unsigned short)32768);
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_20 [i_0] = ((/* implicit */_Bool) var_17);
                            arr_21 [(signed char)6] [i_2] [i_2] [i_0] [i_2] [i_5] [(short)19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_4] [i_5])) || (((/* implicit */_Bool) arr_4 [i_0] [i_2 - 3] [20]))));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_9))));
                            var_23 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
                            var_24 = ((/* implicit */int) ((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47623))) : (arr_5 [i_2 - 2])));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (long long int i_6 = 2; i_6 < 19; i_6 += 3) 
                {
                    arr_26 [(_Bool)1] [12LL] [i_0] [i_6] [i_0] = var_15;
                    var_25 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_13)))) ? (arr_19 [i_6 + 3]) : (((/* implicit */int) (signed char)28))));
                }
                for (signed char i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned short) var_17);
                    var_27 = ((/* implicit */unsigned long long int) ((unsigned char) var_0));
                    var_28 = ((/* implicit */signed char) (+(((/* implicit */int) var_11))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        arr_31 [i_0] [i_0] = ((/* implicit */long long int) var_10);
                        var_29 = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (short)0)))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        var_30 = ((/* implicit */short) ((unsigned int) var_12));
                        arr_36 [18ULL] [i_0] [i_0] [13U] = ((/* implicit */unsigned short) ((short) ((unsigned char) var_5)));
                    }
                    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        var_31 = ((/* implicit */int) (~(((arr_14 [i_0] [i_0] [i_0] [(unsigned short)2]) >> (((/* implicit */int) (unsigned short)0))))));
                        var_32 ^= ((/* implicit */unsigned short) (short)-12850);
                    }
                    for (short i_11 = 1; i_11 < 20; i_11 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned short) ((unsigned long long int) arr_33 [i_2 - 3] [i_3]));
                        var_34 &= ((/* implicit */_Bool) (+(((/* implicit */int) var_14))));
                        var_35 -= ((/* implicit */unsigned int) ((unsigned short) arr_24 [(unsigned char)4] [i_2 - 1] [i_3 + 2] [(_Bool)1] [i_11 + 2] [10ULL]));
                        arr_43 [i_0] [i_2] [(signed char)2] [i_0] [1U] [i_11 + 1] [i_11] = (~(((((/* implicit */_Bool) arr_4 [i_2] [i_3 - 1] [i_11])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))));
                        arr_44 [i_0] [i_3] [(_Bool)1] [i_0] = ((unsigned short) arr_38 [i_0] [i_0] [i_3 + 2] [i_0] [i_11] [i_11]);
                    }
                }
                for (signed char i_12 = 0; i_12 < 22; i_12 += 1) /* same iter space */
                {
                    var_36 *= ((/* implicit */unsigned short) (-(((((/* implicit */int) (short)-29829)) ^ (arr_2 [6LL])))));
                    var_37 += ((/* implicit */unsigned short) (+(((/* implicit */int) arr_39 [i_0] [(_Bool)1] [i_3 + 1] [i_3 - 1] [i_12]))));
                    arr_48 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)32768))))) ? (((/* implicit */long long int) arr_14 [i_0] [i_3] [i_2 - 2] [i_0])) : (((((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_0])) - (var_2)))));
                    arr_49 [i_0] [i_0] [12ULL] [(short)10] [(signed char)8] = ((/* implicit */short) ((signed char) ((unsigned long long int) var_11)));
                }
                for (signed char i_13 = 0; i_13 < 22; i_13 += 1) /* same iter space */
                {
                    var_38 &= ((/* implicit */short) var_10);
                    arr_53 [i_13] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) (signed char)(-127 - 1)))))));
                }
            }
            for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
            {
                arr_58 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_57 [i_14] [i_0] [i_0] [i_0])) ? ((-(arr_18 [(unsigned short)11] [(unsigned short)19] [i_14]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_2 - 1])))));
                var_39 = ((/* implicit */unsigned long long int) arr_46 [i_0] [i_2 - 1]);
            }
        }
        for (unsigned int i_15 = 0; i_15 < 22; i_15 += 3) 
        {
            var_40 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) (signed char)-117))))))));
            arr_61 [i_0] = ((/* implicit */signed char) -8149871583056947802LL);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_16 = 2; i_16 < 18; i_16 += 3) 
        {
            for (signed char i_17 = 2; i_17 < 18; i_17 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_18 = 0; i_18 < 22; i_18 += 1) /* same iter space */
                    {
                        arr_70 [i_0] [i_0] [i_17] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) ((short) var_8))), (((((/* implicit */_Bool) arr_55 [i_0] [8U] [i_16 + 2] [i_0])) ? (arr_8 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_0] [i_0] [i_17] [i_0])))))));
                        var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) var_17))));
                        var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) ((var_2) & (((/* implicit */long long int) arr_38 [i_0] [4LL] [(unsigned short)4] [i_0] [(_Bool)0] [i_0])))))));
                    }
                    /* vectorizable */
                    for (short i_19 = 0; i_19 < 22; i_19 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (short i_20 = 0; i_20 < 22; i_20 += 3) 
                        {
                            arr_76 [i_0] [0ULL] [i_0] [7U] [i_20] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_35 [i_0] [21ULL] [21ULL] [i_0] [(unsigned short)7])))) - (((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (arr_56 [i_0] [i_16] [i_0] [i_0])))));
                            var_43 = ((((/* implicit */_Bool) arr_63 [i_19] [i_16 + 2] [i_0])) ? (((/* implicit */int) arr_63 [i_19] [i_16 + 4] [i_0])) : (((/* implicit */int) var_15)));
                        }
                        for (short i_21 = 1; i_21 < 21; i_21 += 2) 
                        {
                            var_44 ^= ((/* implicit */_Bool) ((unsigned short) var_3));
                            var_45 += ((/* implicit */short) arr_62 [12LL] [12LL]);
                            var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) ((int) arr_60 [i_0] [2ULL])))));
                        }
                        for (int i_22 = 0; i_22 < 22; i_22 += 4) 
                        {
                            var_47 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (var_6) : (arr_62 [20LL] [i_22])));
                            arr_82 [(unsigned char)6] [i_16] [12LL] [i_0] [i_16] [(unsigned char)16] [(short)17] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_16))));
                        }
                        for (int i_23 = 0; i_23 < 22; i_23 += 1) 
                        {
                            arr_86 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((_Bool) arr_78 [8] [(unsigned short)12] [i_17 + 4] [i_19] [i_0] [8]))));
                            var_48 += ((/* implicit */unsigned short) arr_23 [i_16]);
                            var_49 &= ((/* implicit */unsigned int) var_9);
                            var_50 = (short)32767;
                            var_51 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_62 [i_16 - 2] [i_0]))));
                        }
                        arr_87 [i_0] [9U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [(unsigned short)4] [i_0] [i_17] [i_17])) ? (arr_67 [i_0] [i_16] [(unsigned short)7] [i_0]) : (arr_67 [20U] [i_16] [i_17] [i_0])));
                        var_52 = ((/* implicit */unsigned char) arr_25 [17U] [8LL] [i_0] [i_19]);
                    }
                    var_53 = ((((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((((/* implicit */_Bool) var_9)) ? (arr_54 [i_0] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) : (((unsigned long long int) var_12)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_67 [i_16] [i_16] [i_16 + 2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_84 [i_0] [i_0] [i_16 + 2] [i_17] [i_17 + 3] [i_0] [i_17 - 2]))) : (arr_67 [i_0] [i_0] [i_16 + 2] [i_0])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_24 = 0; i_24 < 22; i_24 += 3) 
        {
            for (unsigned short i_25 = 0; i_25 < 22; i_25 += 4) 
            {
                {
                    var_54 = ((unsigned long long int) var_11);
                    arr_94 [i_0] [i_0] = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) arr_68 [i_0] [i_0] [i_24] [i_25])))));
                    var_55 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max(((short)0), (((/* implicit */short) arr_9 [i_0] [i_24]))))), (min((((((/* implicit */unsigned int) ((/* implicit */int) arr_89 [i_0] [i_0] [i_25]))) & (var_6))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_39 [i_0] [i_24] [i_24] [i_24] [i_25])))))))));
                }
            } 
        } 
    }
    for (short i_26 = 3; i_26 < 11; i_26 += 3) 
    {
        arr_98 [i_26] [i_26] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) var_10))))))));
        arr_99 [i_26] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) ((signed char) arr_92 [i_26]))))));
    }
    var_56 -= ((/* implicit */unsigned char) var_7);
}
