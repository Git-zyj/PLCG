/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98635
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_1 [i_0 - 1]))))));
        var_14 ^= ((/* implicit */short) max(((~(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])))), (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) arr_0 [i_0 - 1] [i_0 - 1])))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_15 ^= ((/* implicit */signed char) ((arr_4 [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2342)))));
        var_16 = ((int) var_4);
    }
    for (short i_2 = 1; i_2 < 19; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)2342)), (max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)-3149)), ((unsigned short)63170)))), (((4113639958U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36934))))))))))));
            var_18 = ((/* implicit */unsigned short) max((max((arr_3 [i_2 + 2]), (arr_3 [i_3]))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0)))))));
            arr_9 [i_2] = ((/* implicit */int) max((((/* implicit */long long int) max((arr_4 [i_2 - 1]), (arr_4 [i_2 + 1])))), (((((/* implicit */_Bool) arr_4 [i_2 + 2])) ? (((/* implicit */long long int) arr_4 [i_2 + 1])) : (4611686018427387904LL)))));
            /* LoopSeq 1 */
            for (unsigned char i_4 = 2; i_4 < 19; i_4 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    arr_16 [i_4 - 2] [(unsigned short)5] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 - 1] [i_5] [i_5 + 1]))))), (arr_1 [i_3])));
                    var_19 += ((/* implicit */unsigned short) arr_12 [i_2]);
                }
                /* vectorizable */
                for (unsigned short i_6 = 1; i_6 < 19; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        arr_21 [i_2] [i_6] [i_2] = ((/* implicit */unsigned char) var_7);
                        arr_22 [i_2] [i_3] [i_3] [i_6] [i_2] = ((/* implicit */int) arr_19 [i_6] [i_3] [i_3] [i_6] [i_6]);
                        var_20 = ((arr_5 [i_2 - 1] [i_4 - 2]) > (((/* implicit */long long int) arr_17 [i_7] [i_7] [i_4])));
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)63173)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32744))) : (181327360U))) >> ((((-(((/* implicit */int) var_9)))) - (2169))))))));
                        var_22 = ((/* implicit */unsigned short) ((arr_13 [i_2] [i_2 + 2] [(short)9]) ? (((/* implicit */int) arr_13 [i_2] [i_2 + 2] [i_3])) : (((/* implicit */int) arr_0 [i_2] [i_2 - 1]))));
                    }
                    arr_23 [i_6] = ((/* implicit */int) var_7);
                }
                /* LoopSeq 3 */
                for (long long int i_8 = 4; i_8 < 20; i_8 += 2) 
                {
                    arr_26 [i_2] [i_3] [i_4] [i_8] [i_8] = ((/* implicit */unsigned int) (((~(((-1741657534635476100LL) | (((/* implicit */long long int) ((/* implicit */int) (short)32767))))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_1)))) ? (max((65532U), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_2] [i_2])) >= (((/* implicit */int) (unsigned short)63173)))))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)63160)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)163))) : (0LL)));
                        var_24 ^= ((/* implicit */_Bool) arr_28 [0U] [i_8]);
                        arr_29 [i_9] [i_3] [i_4 + 1] [i_4] [i_8] [i_9] [i_9 - 1] = max((((((/* implicit */_Bool) arr_27 [(short)18] [i_3] [(unsigned short)13] [i_3] [i_9 - 1] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_8 + 1] [i_4 + 1] [i_2 - 1]))) : (((((/* implicit */_Bool) 63)) ? (((/* implicit */long long int) -900321930)) : (-1741657534635476113LL))))), (min((((((/* implicit */_Bool) arr_14 [i_2] [i_2 + 2] [i_2] [i_2] [i_2])) ? (arr_2 [i_3] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_11 [i_2] [(_Bool)1] [i_2])), (arr_20 [i_2 + 1] [i_2 + 1] [i_3] [i_2 + 1] [i_4 - 1] [16U] [i_9])))))));
                        var_25 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [(unsigned char)14]))) >= (((((/* implicit */_Bool) (unsigned char)246)) ? (6597749130462750162LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                        var_26 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (max((var_7), (var_2)))))) & (arr_19 [i_4] [i_4] [i_4] [i_4] [i_8])));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_27 = ((long long int) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 544855117)))))) : (181327353U)));
                        arr_32 [i_2] [0] [i_4] [(short)3] [(_Bool)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [(signed char)18] [(signed char)18] [i_2]))));
                        var_28 -= ((/* implicit */unsigned short) var_2);
                    }
                    for (int i_11 = 3; i_11 < 20; i_11 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)18295)) ? (min(((-(arr_34 [i_11] [i_8 - 2] [i_4] [i_8] [i_8 - 2]))), (((/* implicit */unsigned long long int) ((long long int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])) || (((/* implicit */_Bool) var_5))))))));
                        arr_35 [i_2] [(unsigned short)14] [(short)16] [i_2] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((~(arr_27 [i_2 + 1] [i_3] [i_3] [i_4] [i_8] [i_3]))))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        arr_38 [i_4 + 1] [i_3] [i_4 - 1] [i_2] [i_12] [i_12] [i_2] = (((!(((/* implicit */_Bool) (unsigned char)255)))) && (((/* implicit */_Bool) var_2)));
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) 0LL)))))));
                        var_31 = ((/* implicit */unsigned short) ((4555479228914111052LL) << (((arr_19 [i_2 + 1] [i_2 + 2] [i_2 + 1] [i_4 + 1] [i_12]) - (2511658836217759816LL)))));
                    }
                    /* vectorizable */
                    for (signed char i_13 = 3; i_13 < 19; i_13 += 2) 
                    {
                        arr_41 [i_13] = ((/* implicit */_Bool) (unsigned char)255);
                        var_32 = ((/* implicit */short) var_3);
                        var_33 += ((/* implicit */int) var_0);
                        var_34 = ((/* implicit */int) ((signed char) arr_25 [i_2 + 2] [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 1] [i_2]));
                    }
                    for (long long int i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        var_35 = ((/* implicit */int) max(((unsigned short)65505), (((/* implicit */unsigned short) (signed char)-15))));
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)217)), (1321425838694861216LL)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_30 [i_2] [i_2] [i_2] [i_2] [i_2 + 2])) : (((/* implicit */int) arr_24 [i_2 + 1] [i_3] [i_4 - 1] [i_8] [i_14])))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-4318)) || (((/* implicit */_Bool) arr_37 [i_3] [i_3] [i_3] [i_3] [i_3] [(signed char)4]))))))))));
                        var_37 = ((int) (_Bool)1);
                        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) (unsigned char)53))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_15 = 0; i_15 < 21; i_15 += 4) 
                {
                    var_39 = ((/* implicit */int) min((var_39), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_15 [i_2] [(short)7])) : (((/* implicit */int) arr_15 [i_4] [i_4]))))));
                    var_40 = ((/* implicit */int) ((short) arr_45 [i_4 + 2] [i_2 + 2] [(signed char)6] [i_15]));
                    /* LoopSeq 3 */
                    for (long long int i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) (~((-(((/* implicit */int) (short)-9537)))))))));
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_7)) <= (0LL))))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) - (8873549029010312899LL)))));
                    }
                    for (unsigned char i_17 = 2; i_17 < 19; i_17 += 4) 
                    {
                        var_43 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2434))) : (-5375216349104096015LL))));
                        arr_52 [i_2] [i_2 + 2] [(unsigned char)14] [i_4 - 1] [i_15] [(signed char)15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 256500189677934265ULL)) ? (arr_4 [i_2 - 1]) : (arr_4 [i_2 - 1])));
                    }
                    for (unsigned char i_18 = 1; i_18 < 19; i_18 += 2) 
                    {
                        var_44 += ((/* implicit */_Bool) ((((long long int) arr_47 [i_2])) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_2] [i_3] [i_4] [i_15] [i_4] [i_4])) ? (arr_25 [i_2 + 1] [i_3] [i_2 + 1] [i_3] [i_15] [i_18 + 2]) : (((/* implicit */int) var_0)))))));
                        var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_51 [i_2 - 1] [i_4 + 2] [i_18 + 2]))));
                    }
                }
                for (unsigned char i_19 = 1; i_19 < 20; i_19 += 3) 
                {
                    var_46 ^= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6))) >= (871207609U))) ? (5375216349104095995LL) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                    var_47 = ((/* implicit */short) max((arr_49 [i_2] [(_Bool)1] [i_4] [i_4] [i_4]), (((/* implicit */unsigned int) ((short) (signed char)121)))));
                    arr_59 [i_2 - 1] [i_3] [i_4] [i_19] = ((/* implicit */int) ((((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) ^ (var_7))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) <= ((~(219029758)))))))));
                }
            }
        }
        /* LoopSeq 1 */
        for (short i_20 = 0; i_20 < 21; i_20 += 3) 
        {
            var_48 += ((/* implicit */signed char) ((unsigned short) min((((/* implicit */long long int) (~(((/* implicit */int) var_4))))), (((long long int) 1023)))));
            var_49 += ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_1))) || (((/* implicit */_Bool) ((int) var_5)))))), (max((max((arr_27 [i_2] [i_2 + 1] [i_2] [(unsigned char)16] [i_2] [(unsigned char)2]), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_2] [i_2] [i_20] [i_20] [i_20] [i_20])) >= (((/* implicit */int) (_Bool)1)))))))));
        }
    }
    var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((var_1), (((/* implicit */unsigned int) var_5)))), (((var_1) << (((var_7) - (3046990822U)))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((((((/* implicit */int) var_8)) >= (((/* implicit */int) var_0)))), (((((/* implicit */int) var_4)) >= (1023))))))));
    var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)18864)))))))) : ((+(((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)108))))))))))));
    var_52 += ((/* implicit */unsigned char) var_5);
    var_53 = ((/* implicit */long long int) min((var_53), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((max(((unsigned short)2353), (((/* implicit */unsigned short) (unsigned char)255)))), (((/* implicit */unsigned short) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_6)))))))), (var_10))))));
}
