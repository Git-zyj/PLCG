/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65894
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] |= ((/* implicit */signed char) arr_5 [i_1]);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */int) arr_3 [i_0] [i_1] [i_2]);
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                            {
                                var_12 -= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_4])) > (((int) 939524096))))) == (((((/* implicit */_Bool) 2980485566426274687LL)) ? (((/* implicit */int) ((var_4) != (((/* implicit */unsigned int) -2090803798))))) : (min((((/* implicit */int) arr_3 [i_4] [i_3 - 1] [i_2])), (2090803798)))))));
                                var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)53))));
                                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_2] [i_1])) << (((2980485566426274687LL) - (2980485566426274679LL)))))) : (((unsigned int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_12 [i_1] [i_1] [i_2] [i_3 + 2])))) : (((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) (+(arr_0 [i_0])))) : (min((((/* implicit */unsigned long long int) var_3)), (8796093021952ULL))))))))));
                            }
                        }
                    } 
                } 
                var_15 = ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_1]);
                /* LoopNest 2 */
                for (unsigned short i_5 = 3; i_5 < 9; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (short i_7 = 0; i_7 < 10; i_7 += 4) 
                            {
                                var_16 ^= ((/* implicit */long long int) ((((2980485566426274687LL) >> (((/* implicit */int) (signed char)53)))) != (((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_0] [i_1] [i_5 - 1] [i_6 + 1])) | (((/* implicit */int) ((short) var_3))))))));
                                var_17 = ((((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) var_6)))))) ? (((/* implicit */int) ((unsigned char) ((unsigned int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_3)))))));
                            }
                            for (unsigned long long int i_8 = 1; i_8 < 8; i_8 += 4) 
                            {
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_1] [i_5 - 2] [i_6 + 1] [i_8 + 2])) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_6 + 1])) ? (min((0LL), ((-9223372036854775807LL - 1LL)))) : ((~(2980485566426274687LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_8 + 2]))))))));
                                var_19 = ((/* implicit */unsigned char) min((var_1), (((/* implicit */int) min((arr_4 [i_1] [i_8 + 2]), (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_5 - 1] [i_6 - 1])) || (((/* implicit */_Bool) var_8)))))))));
                                var_20 = ((/* implicit */unsigned char) var_4);
                            }
                            /* LoopSeq 3 */
                            for (unsigned char i_9 = 1; i_9 < 8; i_9 += 1) 
                            {
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) % (min((((/* implicit */unsigned long long int) (signed char)-73)), (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_17 [i_9 - 1] [i_1] [i_0]))));
                                var_22 = ((/* implicit */_Bool) min((arr_14 [i_5 - 3]), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)103)) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)53))))))))));
                                var_23 = ((/* implicit */short) ((((/* implicit */long long int) var_0)) > (((long long int) 2089938376U))));
                                var_24 = ((/* implicit */unsigned int) var_7);
                            }
                            /* vectorizable */
                            for (long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                            {
                                var_25 ^= ((/* implicit */int) (~(arr_24 [i_10] [i_10] [i_6 + 1] [i_5 + 1] [i_1] [i_0])));
                                arr_31 [i_0] [i_1] [i_10] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_10] [i_1] [i_5 - 1] [i_0] [i_5 - 3] [i_1])) ? (((/* implicit */int) (signed char)-53)) : (((((/* implicit */int) arr_28 [i_0] [i_1] [i_1] [i_5 - 2] [i_6 + 1] [i_10])) - (((/* implicit */int) var_6))))));
                                arr_32 [i_0] [i_1] [i_5 - 1] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) -2090803798)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) arr_18 [i_10] [i_6 - 1] [i_5 - 3] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_10]))) : (arr_0 [i_0])))));
                            }
                            for (short i_11 = 2; i_11 < 9; i_11 += 2) 
                            {
                                arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = min((((/* implicit */int) ((((/* implicit */int) arr_7 [i_6 + 1] [i_11 - 2])) >= (((/* implicit */int) var_9))))), (((((/* implicit */int) var_3)) & (arr_29 [i_0] [i_11 + 1] [i_5 - 3] [i_6 + 1] [i_5 + 1] [i_1]))));
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (unsigned char)206))))))) + (((/* implicit */int) (unsigned char)40))));
                                var_27 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (unsigned short)28306)) ? (arr_24 [i_0] [i_1] [i_5 + 1] [i_6 + 1] [i_11 - 2] [i_11 - 1]) : (((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_5 - 3] [i_6 + 1])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_1]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */short) (signed char)97))))) || ((!(((/* implicit */_Bool) var_6))))))))));
                            }
                            /* LoopSeq 2 */
                            for (signed char i_12 = 0; i_12 < 10; i_12 += 4) /* same iter space */
                            {
                                arr_39 [i_0] [i_0] [i_0] [i_1] [i_5 - 1] [i_6 + 1] [i_12] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_24 [i_12] [i_6 + 1] [i_5 + 1] [i_5 + 1] [i_1] [i_0])) ? (((/* implicit */int) var_3)) : (var_1))), (((/* implicit */int) arr_13 [i_0] [i_1] [i_5 - 2] [i_6 - 1])))))));
                                arr_40 [i_12] [i_6 + 1] [i_5 - 3] [i_1] [i_0] = ((/* implicit */long long int) var_1);
                                var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15763)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)42)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_7)), (arr_34 [i_0] [i_0] [i_0] [i_6 + 1] [i_12] [i_5 - 3] [i_0]))))) : ((+(min((arr_25 [i_0] [i_6 - 1] [i_0] [i_6 - 1] [i_1]), (((/* implicit */long long int) var_2)))))));
                                var_29 = ((/* implicit */unsigned long long int) var_7);
                            }
                            for (signed char i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
                            {
                                var_30 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned char) 2256021386389741199LL))), (2980485566426274687LL)));
                                var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) arr_1 [i_0] [i_13]))));
                                arr_45 [i_0] [i_0] [i_1] [i_5 - 3] [i_6 + 1] [i_13] = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-1809072218417370804LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)79))));
                            }
                            var_32 = ((/* implicit */long long int) arr_23 [i_0] [i_1] [i_1] [i_5 - 3] [i_6 - 1]);
                            var_33 = ((((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned char)15)))), (max((((/* implicit */int) (signed char)-113)), (arr_29 [i_0] [i_1] [i_5 - 1] [i_5 - 3] [i_6 + 1] [i_6 - 1])))))) ? ((((~(var_10))) + (((((/* implicit */_Bool) var_10)) ? (arr_30 [i_0] [i_0] [i_1] [i_5 - 1] [i_6 - 1] [i_6 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52384))))))) : ((+(((((/* implicit */unsigned int) var_1)) + (var_10))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_14 = 0; i_14 < 17; i_14 += 2) 
    {
        for (signed char i_15 = 0; i_15 < 17; i_15 += 2) 
        {
            {
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) var_5))));
                var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2205028920U)) || (((/* implicit */_Bool) (unsigned char)190)))))));
            }
        } 
    } 
    var_36 = (+(var_10));
}
