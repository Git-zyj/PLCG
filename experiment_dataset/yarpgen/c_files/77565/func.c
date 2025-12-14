/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77565
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
    var_17 = ((/* implicit */_Bool) -8676022510537395478LL);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) var_0))))) >= (min(((+(3787866817719870879LL))), (max((-3787866817719870898LL), (((/* implicit */long long int) (_Bool)1))))))));
        arr_4 [i_0] = ((/* implicit */int) (-(3787866817719870879LL)));
        arr_5 [2ULL] [(unsigned short)7] = ((/* implicit */short) -3787866817719870879LL);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned long long int) (+(min((3787866817719870879LL), (arr_0 [i_1 - 1] [i_1 - 1])))));
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((min((var_3), (((/* implicit */long long int) arr_2 [i_1 - 2] [i_1])))) / (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
            }
            /* vectorizable */
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
            {
                arr_13 [i_3] [i_1 - 1] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_16))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        {
                            arr_18 [i_5] [i_5] [i_3] [i_3] [i_3] [22U] [i_0] = var_7;
                            arr_19 [i_0] [i_1] [i_3] [i_4] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
                            var_20 = (-(((/* implicit */int) var_13)));
                            arr_20 [i_1] [i_3] [i_3] [i_5] = (~(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((-3787866817719870879LL) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_16))))))))));
                var_22 ^= ((/* implicit */unsigned char) var_3);
            }
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        {
                            arr_27 [i_0] [i_1 - 2] [i_1] [i_1] [i_6] [i_6] [i_1 - 2] = ((/* implicit */int) min((var_8), (((/* implicit */unsigned long long int) ((var_14) / (((/* implicit */long long int) -323097358)))))));
                            var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_16)))))))) ? ((-(max((-3787866817719870879LL), (((/* implicit */long long int) (short)-1825)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) (short)-13634)) : (((/* implicit */int) (signed char)10)))))))))));
                        }
                    } 
                } 
                arr_28 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_11 [i_6] [i_6]))))))) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) min((min(((short)7), (((/* implicit */short) var_1)))), (((/* implicit */short) var_16)))))));
                /* LoopSeq 2 */
                for (unsigned char i_9 = 1; i_9 < 24; i_9 += 4) 
                {
                    arr_33 [i_0] [i_1] [i_6] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)99)) ? (((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_9 + 1])) ? (((/* implicit */int) (unsigned char)97)) : ((-(((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_9] [i_6] [i_9] [i_6])))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_15)) < (var_7))))));
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_8))));
                }
                for (int i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    var_25 = ((/* implicit */int) 18446744073709551611ULL);
                    arr_38 [(unsigned short)7] [i_1] [i_1] [i_6] [i_10] [i_10] = min(((-((-(18446744073709551615ULL))))), (((/* implicit */unsigned long long int) arr_24 [i_0] [11LL] [i_6] [i_10] [11LL] [i_1 + 1])));
                }
            }
            /* LoopNest 3 */
            for (unsigned short i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 1; i_12 < 22; i_12 += 3) 
                {
                    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_16)), (min((((/* implicit */unsigned int) var_13)), (arr_21 [i_12 + 1] [i_1 - 1])))));
                            arr_49 [i_0] [i_0] [i_11] [i_12] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (-192604735)));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)12625)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (short)25726))))))) ? (((((/* implicit */long long int) (-(((/* implicit */int) var_6))))) + ((~(3787866817719870879LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_17 [(signed char)24] [i_13] [i_0] [i_1 - 1] [i_1 - 1] [(signed char)15] [i_12 + 3]) < (arr_17 [i_1] [i_13] [i_13] [i_1 - 2] [i_1 - 2] [i_12] [i_12 + 3])))))));
                        }
                    } 
                } 
            } 
            var_28 = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_1 - 2] [i_1] [(short)0] [i_1]))))));
            var_29 = ((/* implicit */unsigned short) var_8);
        }
        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) var_4))));
    }
    for (unsigned int i_14 = 0; i_14 < 25; i_14 += 3) 
    {
        var_31 = ((/* implicit */int) (~(var_7)));
        var_32 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((var_11) & (((/* implicit */unsigned long long int) 323097357)))))))));
    }
    var_33 = ((/* implicit */unsigned short) (short)-13634);
    var_34 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (-2785810998737397596LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
}
