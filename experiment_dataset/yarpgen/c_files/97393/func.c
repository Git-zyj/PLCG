/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97393
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
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)29669)))))));
    var_17 = var_6;
    /* LoopSeq 3 */
    for (int i_0 = 4; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_1))));
        arr_4 [5ULL] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_0]))));
        arr_5 [i_0] [(unsigned short)11] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_14))) - (((/* implicit */int) ((unsigned char) var_2)))));
    }
    for (int i_1 = 4; i_1 < 10; i_1 += 2) /* same iter space */
    {
        arr_9 [i_1] = 5953682974792442014LL;
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)16027))))), ((unsigned short)24080)))) ? (min((arr_2 [i_1 + 1] [i_1]), (arr_2 [i_1 + 2] [0U]))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (8997546980636885197LL))))));
                        arr_17 [i_4] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) min((var_0), (-1547388992)));
                        /* LoopSeq 4 */
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            arr_21 [(unsigned short)10] [(_Bool)1] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((3597259010U) - (arr_3 [i_2 + 1])))) && (((/* implicit */_Bool) (+(1483173663))))));
                            arr_22 [i_3] [i_2 + 1] [i_2] [i_4] [i_5] = ((/* implicit */int) ((unsigned char) var_8));
                            var_20 = (-(((((((/* implicit */int) (signed char)(-127 - 1))) ^ (-1387027528))) << (((((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_13))))) - (30))))));
                            arr_23 [i_1] [i_1 - 3] [i_1] [i_2] [i_1 + 2] [i_1] = ((/* implicit */signed char) 0U);
                        }
                        for (long long int i_6 = 3; i_6 < 8; i_6 += 2) 
                        {
                            var_21 ^= arr_16 [i_2 + 1] [i_2] [i_1 - 1];
                            arr_27 [i_2] [i_2] [i_3] [i_4] [i_6] = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_14)) << (((/* implicit */int) arr_15 [i_6 + 3]))))));
                            arr_28 [i_1 - 4] [i_2] [i_2] [i_4] [i_1 - 4] = ((/* implicit */signed char) var_7);
                            arr_29 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_16 [i_2 + 1] [i_1 - 2] [(unsigned short)5]), (arr_16 [i_2 + 1] [i_1 - 4] [i_1 + 1]))))));
                            var_22 -= ((/* implicit */signed char) 15545156213566906672ULL);
                        }
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            arr_32 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */long long int) var_12);
                            arr_33 [i_7] [i_2] [i_7] |= ((/* implicit */unsigned char) ((min((16414685927347025665ULL), (((/* implicit */unsigned long long int) arr_24 [i_2 + 1] [i_7] [i_1 - 2] [i_7] [i_1])))) < (((/* implicit */unsigned long long int) var_3))));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((((unsigned int) arr_25 [3LL] [i_1 - 1] [i_2 + 1] [i_2] [i_7])), (((/* implicit */unsigned int) arr_25 [(signed char)0] [i_1 - 4] [i_2 + 1] [i_3] [i_3])))))));
                        }
                        for (long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            arr_37 [i_1] [i_2] [i_1] [i_1] [i_1] [i_8] = ((/* implicit */unsigned long long int) ((2251799545249792LL) * (((/* implicit */long long int) ((/* implicit */int) ((-1051737966000247448LL) < (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                            arr_38 [i_2] [i_2] = ((unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65532))) | (arr_12 [i_2] [i_2]))), (((/* implicit */unsigned int) (signed char)-123))));
                        }
                        arr_39 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((3400214935U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-15928)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)1792)))))))) | (min((((/* implicit */long long int) arr_12 [i_1 + 1] [i_1 + 1])), (arr_7 [i_1 - 4] [i_2])))));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) (signed char)74)), (min((arr_20 [i_1 - 3]), (((/* implicit */unsigned int) min(((unsigned char)224), (((/* implicit */unsigned char) (_Bool)0))))))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_9 = 1; i_9 < 8; i_9 += 2) 
    {
        var_25 += ((/* implicit */short) ((int) (signed char)(-127 - 1)));
        /* LoopSeq 1 */
        for (long long int i_10 = 1; i_10 < 10; i_10 += 2) 
        {
            arr_44 [i_9 + 2] [i_10] [i_10] = ((/* implicit */long long int) (unsigned short)4865);
            arr_45 [i_9] [i_9] [10LL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) arr_20 [i_9 + 2])))));
            arr_46 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (((_Bool)1) && (((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))))));
            /* LoopSeq 1 */
            for (unsigned int i_11 = 3; i_11 < 10; i_11 += 1) 
            {
                var_26 ^= var_4;
                arr_49 [i_10 + 1] [i_9] = ((/* implicit */long long int) var_15);
                var_27 = ((/* implicit */unsigned short) 1383246234);
            }
        }
        arr_50 [i_9] = ((/* implicit */signed char) max((((((arr_31 [i_9 + 2] [i_9 + 3] [i_9 + 1] [i_9 - 1]) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */long long int) (-(arr_48 [(signed char)3] [i_9]))))));
        arr_51 [i_9] [i_9 + 3] = ((/* implicit */unsigned int) arr_24 [i_9 - 1] [i_9 + 1] [i_9 + 1] [(unsigned char)6] [i_9 + 2]);
    }
}
