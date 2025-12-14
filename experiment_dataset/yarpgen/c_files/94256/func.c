/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94256
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
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))) : (min((561577403673429706ULL), (((/* implicit */unsigned long long int) (signed char)-2)))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    var_20 += ((/* implicit */long long int) var_7);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_13)) ? (7251899749470190678ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -859672810)) ? (-1578467942) : (-23))))));
                        arr_11 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (1089051858U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
                        arr_12 [i_1] = ((/* implicit */long long int) (unsigned char)168);
                    }
                    for (short i_4 = 2; i_4 < 18; i_4 += 2) 
                    {
                        arr_16 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 459794359)) ? (((/* implicit */int) var_5)) : (var_8)))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                        {
                            var_22 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_3))));
                            arr_19 [i_0] [(_Bool)1] [i_1] [i_4] [i_5] = (!(((/* implicit */_Bool) var_12)));
                        }
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                        {
                            arr_22 [i_0] [i_4] [i_1] [i_1] [i_1] [i_0] [i_0] = ((((int) var_1)) ^ (((((/* implicit */_Bool) var_10)) ? (-23) : (((/* implicit */int) var_0)))));
                            arr_23 [i_0] [i_0] [i_1] [i_0] [i_2] [i_1] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned char)38)))), (((/* implicit */int) (signed char)-8))))) ? (var_2) : (((/* implicit */unsigned int) ((var_9) / (((/* implicit */int) var_11)))))));
                            arr_24 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((var_12) / (((/* implicit */int) var_7)))) / (((((/* implicit */_Bool) (signed char)114)) ? (1450937641) : (((/* implicit */int) var_5))))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (short)-26073))))) - (((/* implicit */int) (!((_Bool)0)))))) : (((/* implicit */int) (!((_Bool)1))))));
                            var_23 ^= ((/* implicit */unsigned int) (-(((unsigned long long int) var_9))));
                        }
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
                        {
                            var_24 -= ((/* implicit */int) var_1);
                            arr_28 [i_0] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-24214))));
                            var_25 |= ((/* implicit */unsigned long long int) ((int) 1578467941));
                        }
                    }
                    arr_29 [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 15575154212418468164ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (var_16)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 3LL)) : (2791025967308511786ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_14)))))) : ((((!(((/* implicit */_Bool) var_12)))) ? ((-(var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7)))))));
                }
            } 
        } 
        var_26 += ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((-637298344) + (2147483647))) << (((1578467922) - (1578467922)))))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) -23)))))))));
        var_27 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(min((var_13), (var_8)))))) | (((((unsigned int) var_14)) << (((var_2) - (93071669U)))))));
    }
}
