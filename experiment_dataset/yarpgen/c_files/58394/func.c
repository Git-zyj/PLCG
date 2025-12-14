/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58394
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
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)234))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_4 [i_0] [i_1])))))));
                    arr_7 [13U] [i_1] [i_0] [i_0 + 1] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)28495)) >= (((/* implicit */int) arr_2 [i_0])))) ? (((2275223712910051540ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65526))))) : (((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_6 [i_0 - 1] [i_1] [(unsigned char)4])))));
                }
                for (unsigned char i_3 = 2; i_3 < 14; i_3 += 1) /* same iter space */
                {
                    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) 3935336354408526806LL)), ((-((+(arr_6 [i_0] [i_1] [i_0]))))))))));
                    var_12 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_4 [i_0 - 2] [i_3 - 1]))))), (((((/* implicit */_Bool) max((10ULL), (((/* implicit */unsigned long long int) var_6))))) ? (min((18446744073709551613ULL), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))))));
                    var_13 = ((/* implicit */_Bool) min((var_13), ((!(((/* implicit */_Bool) (unsigned char)184))))));
                    arr_10 [i_3] [i_1] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)37040))))), (var_2)));
                }
                for (unsigned char i_4 = 2; i_4 < 14; i_4 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_1] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) arr_12 [i_0 - 1] [i_1] [i_4])), (var_2))), (((/* implicit */unsigned long long int) arr_11 [8U] [i_0 - 1] [8U] [i_0 - 1]))));
                    arr_14 [i_4 - 2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) != (((/* implicit */int) max((((unsigned char) var_9)), (((unsigned char) var_9)))))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    arr_17 [i_1] [i_1] [i_1] [i_5] = (unsigned char)207;
                    var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551598ULL)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28485))) / (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63)))));
                    arr_18 [i_0] [13LL] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(signed char)4] [i_0 - 1] [8U])))))) ? (((/* implicit */unsigned long long int) (+(var_7)))) : (max((((/* implicit */unsigned long long int) (signed char)-1)), (arr_3 [i_0])))));
                    arr_19 [i_5] [i_5] [i_5] [i_0 + 1] = ((/* implicit */unsigned long long int) (unsigned char)239);
                }
                /* vectorizable */
                for (unsigned char i_6 = 1; i_6 < 14; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 3; i_7 < 15; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 2; i_8 < 15; i_8 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) ((unsigned char) (unsigned short)45533));
                                arr_29 [i_0] [i_1] [i_7] [i_7 - 1] [i_8 - 2] [i_6 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_0 - 1] [i_6 + 2] [i_7] [i_8 - 1]))));
                                arr_30 [i_0 - 1] [2ULL] [i_6] [i_7 - 3] [i_7] [i_6 + 2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775785LL)) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0 - 2] [i_0 - 2] [i_1] [i_8]))) : (var_5)));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_6 - 1] [i_0 - 1] [i_0 - 1])) && (((/* implicit */_Bool) arr_11 [i_6 + 1] [i_6 + 1] [i_0 - 2] [i_0 - 2])))))));
                }
                /* LoopNest 3 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 3) 
                    {
                        for (long long int i_11 = 1; i_11 < 15; i_11 += 1) 
                        {
                            {
                                arr_39 [i_10] [i_9] [i_11 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56010))) : ((+((+(var_8)))))));
                                arr_40 [(unsigned char)4] [i_1] [(unsigned char)4] [i_1] [i_10] [(signed char)0] [i_1] = ((/* implicit */unsigned char) arr_36 [i_10] [i_9] [i_10]);
                                arr_41 [i_0] [i_0] [i_0] [i_10] [i_0 - 1] [5U] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)38))))) ^ (min((var_0), (((/* implicit */unsigned long long int) (signed char)20))))));
                                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_2))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_12 = 2; i_12 < 15; i_12 += 3) 
    {
        var_18 ^= ((/* implicit */unsigned int) arr_44 [i_12]);
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((signed char) var_6)))));
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182))) / (12174765391457661981ULL)));
}
