/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99163
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
    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(var_1)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)54))) : (var_1)))) ? (((((/* implicit */_Bool) 2240806572128151672ULL)) ? (2539549805670487898LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-54)) + (2147483647))) << (((((/* implicit */int) (signed char)57)) - (57))))))))));
    var_19 = ((/* implicit */signed char) var_13);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) arr_1 [i_0])))));
        var_20 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
        arr_5 [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned short) var_13)))))) ? ((~((~(var_15))))) : (((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_1 = 3; i_1 < 21; i_1 += 2) 
    {
        arr_9 [i_1] = ((((/* implicit */int) arr_8 [i_1 - 2] [i_1 + 1])) ^ ((~(((/* implicit */int) var_13)))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 1) 
        {
            for (unsigned int i_3 = 3; i_3 < 23; i_3 += 2) 
            {
                {
                    var_21 = ((int) ((((/* implicit */_Bool) arr_6 [i_3 + 2])) ? (16205937501581399934ULL) : (((/* implicit */unsigned long long int) arr_6 [i_1 + 1]))));
                    var_22 |= ((/* implicit */short) ((unsigned int) arr_6 [i_1 - 2]));
                    var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((var_9) + (((/* implicit */int) arr_7 [i_3]))))) : (((((/* implicit */_Bool) var_15)) ? (16205937501581399934ULL) : (((/* implicit */unsigned long long int) var_11))))))) ? (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_16)) : (-1722802155)))) : (((((/* implicit */_Bool) -1722802155)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2]))) : (2093056U))))) : (max((max((959630631U), (((/* implicit */unsigned int) (short)-26283)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) == (var_9))))))));
                    var_24 = ((/* implicit */short) (signed char)-28);
                }
            } 
        } 
        arr_14 [i_1] = ((/* implicit */unsigned short) ((unsigned int) min(((short)-32763), (((/* implicit */short) (signed char)105)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    {
                        var_25 = ((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_1] [i_1]))));
                        arr_23 [i_1] [i_1] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_17 [i_1 - 3] [i_1])) / (16205937501581399952ULL)));
                        var_26 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -3265162532308444634LL)) ? (((/* implicit */int) (unsigned short)9104)) : (((/* implicit */int) (signed char)117))));
                        arr_24 [i_1] [i_4] [i_1] [i_6] = ((/* implicit */unsigned int) var_8);
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_8 [i_1] [i_1 + 1])))))));
                            arr_28 [i_1] [i_1] [i_1] [i_1 + 4] [i_1] = ((/* implicit */unsigned short) ((unsigned int) -1513202873));
                        }
                        for (short i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            var_28 -= ((/* implicit */long long int) arr_30 [i_1] [i_4] [i_5] [i_6] [i_8]);
                            arr_31 [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_1 + 1] [i_1] [i_1 - 2] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((arr_17 [i_1] [i_5]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6)))))) : (((var_3) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_1] [i_4] [i_5] [i_6] [i_8])))))));
                        }
                    }
                } 
            } 
            var_29 += ((/* implicit */unsigned long long int) ((int) arr_11 [i_1 + 2] [i_1 + 2] [i_1 - 1]));
            var_30 ^= ((/* implicit */short) ((unsigned char) arr_17 [i_1 + 4] [i_1 + 1]));
        }
        arr_32 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)80)), (arr_26 [i_1] [i_1] [i_1] [i_1] [i_1 + 3] [i_1])))) / (((/* implicit */int) ((4294967295U) >= (((/* implicit */unsigned int) var_9))))))));
    }
}
