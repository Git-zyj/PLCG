/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91140
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
    var_20 = ((/* implicit */int) max((((unsigned char) var_16)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)1023)))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (!(var_1)))), (var_18)));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9739420458009878045ULL)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) (_Bool)1)))))))));
        var_23 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_1 [i_0] [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_24 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [(unsigned char)15])) ? (max((3049183832529675316LL), (((/* implicit */long long int) (_Bool)1)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_2))))))));
        var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)159)))) : (max((-8956199122206060091LL), (-20LL)))))) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) max((arr_2 [i_1] [i_1]), (((((/* implicit */int) (unsigned char)174)) < (((/* implicit */int) var_14)))))))));
        arr_5 [i_1] = ((/* implicit */signed char) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65515)) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-59)))))))));
    }
    for (signed char i_2 = 1; i_2 < 14; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1374753932U)) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) (_Bool)1))));
        var_26 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175))) != (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [i_2]))) : (arr_1 [i_2 + 1] [i_2]))))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1000511998)) || (((/* implicit */_Bool) min((var_19), (((/* implicit */short) arr_2 [i_2] [i_2 - 1])))))))))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 2; i_3 < 13; i_3 += 3) 
        {
            for (long long int i_4 = 1; i_4 < 13; i_4 += 2) 
            {
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) 5318638795045055179LL)) ? (((/* implicit */int) ((short) arr_2 [(signed char)10] [i_6]))) : (((/* implicit */int) var_5))));
                            var_28 = ((/* implicit */short) var_10);
                        }
                        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            var_29 |= ((/* implicit */unsigned long long int) ((((-3049183832529675316LL) + (9223372036854775807LL))) >> (((18446744073709551615ULL) - (18446744073709551568ULL)))));
                            var_30 += arr_14 [i_5] [0ULL] [i_5];
                        }
                        var_31 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_19 [i_2] [11ULL] [i_2] [i_5])) : (((/* implicit */int) var_9))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 4) 
    {
        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(signed char)3] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (var_12)))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52748)))));
        arr_23 [i_8] = ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) arr_2 [i_8] [i_8])));
        arr_24 [i_8] [i_8] = ((/* implicit */int) var_8);
    }
}
