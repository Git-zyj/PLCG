/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/781
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
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 8; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_9))));
                    var_14 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_8 [i_2] [i_0] [i_1] [i_0])) : (((/* implicit */int) var_1)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2] [1LL]))));
                                var_16 = ((/* implicit */signed char) max((((/* implicit */int) arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_4])), ((-(((/* implicit */int) arr_1 [i_0 - 2] [i_0 + 1]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_17 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned short)0)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) (short)-27513))))) ? (((6988938111649667245ULL) >> (((((/* implicit */int) (signed char)-94)) + (127))))) : (((/* implicit */unsigned long long int) 0U))))));
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_9 [i_2 + 1] [i_0 - 3] [i_0 + 3] [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 416377455)) < (0ULL)))) == ((-(((/* implicit */int) var_12))))))) : ((~(((/* implicit */int) (_Bool)1)))))))));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (6988938111649667235ULL)));
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */long long int) var_2)) : (((long long int) var_5)))))));
    /* LoopSeq 1 */
    for (int i_6 = 2; i_6 < 17; i_6 += 3) 
    {
        var_21 = ((/* implicit */signed char) -14LL);
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 18; i_7 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */long long int) ((unsigned char) -7714362787313558474LL));
            var_23 = ((/* implicit */unsigned short) (short)11);
            var_24 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_6])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)170)))));
            arr_24 [(unsigned char)2] [i_7] = ((/* implicit */short) ((arr_23 [i_6 - 2] [i_6 - 2] [13ULL]) + (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)0)) : (arr_22 [i_6])))));
        }
        for (signed char i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
        {
            arr_27 [i_6 + 1] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-11)) ? (657867492555914229LL) : (((/* implicit */long long int) ((/* implicit */int) (short)7))))) == (((/* implicit */long long int) ((/* implicit */int) var_12)))));
            arr_28 [i_6 + 1] [i_8] [i_8] = ((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned short)65535))))));
            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((var_0) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4)))) >= (((/* implicit */int) var_12)))))));
        }
        for (signed char i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
        {
            arr_31 [i_6] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */int) (short)7401)) % (((/* implicit */int) (short)12475)))))))));
            var_26 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)19390))));
            var_27 = ((/* implicit */unsigned char) max(((+(((((/* implicit */unsigned int) arr_23 [i_6 + 1] [i_6 + 1] [i_9])) * (1643738799U))))), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_25 [i_6] [i_9])) ? (arr_22 [i_6]) : (((/* implicit */int) var_8))))))));
        }
        arr_32 [i_6] = ((/* implicit */unsigned int) arr_22 [i_6]);
    }
}
