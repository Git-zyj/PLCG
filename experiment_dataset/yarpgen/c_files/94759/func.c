/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94759
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_2)), (var_10)))))))) : (max((min((var_1), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)49)), (var_9))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))) : ((~(var_5)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)252))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_7))) : (((/* implicit */long long int) var_10))));
        arr_3 [i_0] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), ((-(var_9)))))) ? (((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) var_7)) : ((-(9223371761976868864ULL))))) : (arr_1 [i_0] [i_0]));
        arr_4 [(unsigned char)20] &= ((/* implicit */_Bool) min((arr_1 [(short)16] [i_0]), (((/* implicit */unsigned long long int) -2995554010246747422LL))));
        var_13 = ((/* implicit */_Bool) (+(18446744073709551605ULL)));
    }
    for (unsigned int i_1 = 3; i_1 < 15; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) arr_0 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 15; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 15; i_3 += 4) 
            {
                {
                    var_14 &= ((/* implicit */signed char) max((-7293316067027329423LL), (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_3])))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 3; i_5 < 14; i_5 += 2) 
                        {
                            {
                                var_15 *= ((/* implicit */unsigned long long int) var_7);
                                var_16 = ((/* implicit */int) min(((+(arr_5 [i_1]))), (((/* implicit */long long int) arr_10 [i_1] [i_1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            arr_19 [i_1] [i_6] = ((/* implicit */unsigned char) arr_0 [i_1]);
            arr_20 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [10U] [i_1])) ? (((/* implicit */long long int) var_10)) : (((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_6])) ? (((/* implicit */long long int) arr_17 [i_1] [i_1] [i_1])) : (arr_7 [i_6])))));
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned int i_8 = 2; i_8 < 14; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] [i_9] = ((/* implicit */unsigned short) ((arr_29 [i_9] [i_9] [i_8 + 1] [i_9] [i_8]) | (((/* implicit */int) (unsigned char)255))));
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1]))));
                            var_18 = ((/* implicit */unsigned int) arr_21 [i_1 - 1] [i_1 - 1] [i_8 + 2] [i_1 - 1]);
                            arr_32 [i_1] [i_6] [i_9] [i_1] [i_9] = ((/* implicit */short) var_2);
                        }
                    } 
                } 
            } 
            arr_33 [i_1] [i_1] = ((/* implicit */short) arr_17 [i_1] [i_1] [i_1]);
        }
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
        {
            arr_36 [i_10] [i_10] = min((min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_16 [i_10] [i_10])), ((unsigned char)0)))), (arr_26 [i_1] [i_1] [i_1] [i_1] [i_10]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_8)))) : (((((/* implicit */_Bool) -861375906)) ? (var_10) : (((/* implicit */int) var_4))))))));
            arr_37 [i_10] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_10] [i_10] [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 - 2])) && (((/* implicit */_Bool) var_10))));
            var_19 = ((/* implicit */unsigned long long int) arr_7 [i_1]);
            var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), ((-(arr_26 [i_1] [i_1 + 1] [i_1 - 1] [i_10 + 1] [i_1 + 1])))));
        }
        arr_38 [i_1] = arr_9 [i_1] [i_1] [i_1];
        var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1])))) < (((/* implicit */int) arr_6 [i_1 + 1]))))), (((((/* implicit */unsigned long long int) var_9)) | (arr_9 [i_1] [i_1] [i_1 - 3])))));
    }
    for (int i_11 = 1; i_11 < 9; i_11 += 4) 
    {
        var_22 += ((/* implicit */unsigned int) var_3);
        arr_43 [i_11] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_0 [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (18446744073709551605ULL))), (((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)0)))))));
        /* LoopSeq 2 */
        for (int i_12 = 3; i_12 < 8; i_12 += 4) /* same iter space */
        {
            arr_46 [i_11] = ((/* implicit */unsigned int) var_4);
            var_23 = min((max((var_7), (((/* implicit */long long int) min((((/* implicit */int) arr_6 [i_11])), (var_10)))))), (((/* implicit */long long int) (-(((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) var_4)))))))));
        }
        for (int i_13 = 3; i_13 < 8; i_13 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_14 = 1; i_14 < 7; i_14 += 4) 
            {
                arr_53 [i_11] [i_11] [i_11] = arr_44 [i_13 + 1] [i_11];
                var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_11 - 1] [i_11 - 1])) ? (var_7) : (((/* implicit */long long int) var_11))));
                var_25 ^= -6531812437902413676LL;
                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)243))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_11 - 1]))) : (var_7))))));
                arr_54 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) (~(((var_4) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-1LL)))));
            }
            arr_55 [i_13] [i_11] [i_13] = ((((/* implicit */_Bool) arr_11 [i_11] [i_13] [i_13])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_11 - 1]))))) : ((-(((/* implicit */int) arr_44 [i_11 - 1] [i_11])))));
        }
        arr_56 [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_7 [i_11])) : (arr_12 [i_11])))) ? (arr_51 [i_11 - 1] [i_11] [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)8938))))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_11] [i_11]))) : (4770088523669374053LL)));
        arr_57 [i_11] = min((max((max((arr_41 [i_11]), (((/* implicit */unsigned int) 2147483647)))), (((/* implicit */unsigned int) min((((/* implicit */int) var_4)), (997577216)))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)219))) < ((+(arr_1 [i_11] [i_11])))))));
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 12; i_15 += 2) 
    {
        for (unsigned char i_16 = 1; i_16 < 11; i_16 += 2) 
        {
            {
                arr_63 [i_15] [i_15] [i_16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (arr_15 [i_15] [i_15] [i_15] [i_16] [i_16] [i_16]) : (((/* implicit */long long int) -663392227)))), ((-(arr_5 [i_15]))))))));
                var_27 -= ((/* implicit */int) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_11 [i_16] [i_16 + 1] [i_16])) : (((/* implicit */int) arr_11 [i_16] [i_16 - 1] [i_16]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_15] [i_16 + 1] [i_15])) ? (((/* implicit */int) arr_11 [i_16 + 1] [i_16 + 1] [i_15])) : (((/* implicit */int) arr_11 [i_16] [i_16 - 1] [i_16]))))) : (((((/* implicit */_Bool) 992U)) ? (3722168527424160079ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_16] [i_16 + 1] [i_15])))))));
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
}
