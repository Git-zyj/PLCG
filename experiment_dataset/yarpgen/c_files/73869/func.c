/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73869
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [i_4] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((arr_12 [i_1] [i_3] [i_4] [i_1] [19U]), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) (signed char)-1))))) ? (max((((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2] [i_3])), (((((/* implicit */_Bool) (signed char)-16)) ? (150609256U) : (4294967284U))))) : (4144358046U)));
                                var_10 = ((/* implicit */int) min((max((((/* implicit */unsigned int) arr_11 [i_1] [i_2] [i_3] [i_3])), (((var_2) >> (((arr_6 [i_0] [i_0] [i_2] [i_3]) - (2024798132))))))), ((~(((150609229U) << (((2326224732U) - (2326224702U)))))))));
                                var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -363248917)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65507))) : (150609261U))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_4 - 1] [(unsigned char)20])) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_4 + 1] [i_1])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        arr_18 [i_0] [i_5] [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_5] [(signed char)6] [i_2] [16] [i_1] [1] [i_0])) ? (min((((/* implicit */long long int) arr_0 [i_5])), (min((((/* implicit */long long int) arr_8 [i_5] [i_5] [i_2])), (var_3))))) : (((((/* implicit */_Bool) min((arr_1 [i_1]), (((/* implicit */unsigned long long int) var_8))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_5 [i_5]) : (((/* implicit */long long int) 1098656586)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                        var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_16 [i_5]), (arr_16 [i_5]))))));
                    }
                    for (int i_6 = 3; i_6 < 20; i_6 += 2) 
                    {
                        var_13 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 951491589))))));
                        arr_21 [i_0] [i_1] [i_1] [i_2] [i_6] [i_6] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_13 [i_0] [10LL] [i_2] [i_6] [i_2])), (arr_16 [i_6])));
                    }
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            {
                                arr_27 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)44)) >> (((-951491590) + (951491610)))));
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_8] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (-1404187701)));
                                var_14 *= arr_7 [i_0] [i_0] [i_1];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((((/* implicit */_Bool) min(((~(var_6))), (var_6)))) ? (min((min((var_6), (var_0))), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-109)))))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1166156754U)) ? (647354021963972542ULL) : (((/* implicit */unsigned long long int) var_2))))) ? (150609248U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_4))))))) ? (((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned short)27183))))))) : ((-(((((/* implicit */_Bool) 3306783360U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_2)))))));
    var_17 = ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) (signed char)0)) : (0));
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 4; i_9 < 24; i_9 += 2) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            for (signed char i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-125)) - (((/* implicit */int) arr_32 [i_9 - 2] [i_9 - 2])))))));
                    arr_35 [i_9] [i_10] = ((/* implicit */long long int) 11133720042732720428ULL);
                    var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_30 [21ULL])) | (var_0)));
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        for (int i_13 = 0; i_13 < 25; i_13 += 3) 
                        {
                            {
                                arr_40 [i_9] [i_10] [i_11] [i_12] [i_13] [i_11] = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned char)232));
                                var_20 = ((/* implicit */unsigned long long int) ((unsigned short) 16483560685642059822ULL));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483639)) ? (((/* implicit */int) (unsigned short)6149)) : (1870977865)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
