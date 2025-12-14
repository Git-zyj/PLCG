/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68663
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0]))) ^ ((~(((/* implicit */int) (signed char)-112))))));
        var_13 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
        arr_4 [(_Bool)1] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-110))) : (var_10))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24012))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-110))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) ^ (4U)))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) (short)17846);
    }
    for (unsigned char i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1073741792)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)204))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                for (int i_4 = 2; i_4 < 20; i_4 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (_Bool)0))));
                        arr_17 [2U] [2U] [i_3] [i_3] [(unsigned char)12] = ((/* implicit */_Bool) ((unsigned int) (((_Bool)1) ? (((((arr_9 [i_1 + 1] [i_1 + 1]) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)-1)) + (28))))) : (((/* implicit */long long int) var_12)))));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((arr_9 [i_1] [i_1]) == (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3]))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [i_4]))) : ((-(2919127959U)))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */int) ((((/* implicit */long long int) max((arr_12 [i_1]), (((/* implicit */int) (unsigned short)26454))))) + (((((/* implicit */_Bool) min((6257083661935851961ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-112))))) : (((((/* implicit */_Bool) arr_12 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2073055763333580695LL)))))));
        arr_18 [i_1] = ((/* implicit */unsigned int) (_Bool)1);
        arr_19 [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [15LL] [15LL]))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1 + 1]))) * (12016679469654932936ULL))))));
    }
    for (unsigned short i_5 = 3; i_5 < 10; i_5 += 2) /* same iter space */
    {
        arr_23 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_8))))) ? ((~(((/* implicit */int) (short)17852)))) : (((((((/* implicit */int) (signed char)-113)) + (2147483647))) << (((((/* implicit */int) (unsigned char)204)) - (204)))))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)0), ((_Bool)1))))) : (arr_9 [i_5] [i_5])));
        arr_24 [i_5] = ((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), ((+((~(((/* implicit */int) (_Bool)1))))))));
        var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (signed char)107)), (12796082957640082964ULL)));
        var_19 -= ((/* implicit */signed char) ((int) var_5));
    }
    /* vectorizable */
    for (unsigned short i_6 = 3; i_6 < 10; i_6 += 2) /* same iter space */
    {
        arr_27 [i_6] [(short)2] = ((/* implicit */unsigned char) var_5);
        /* LoopSeq 2 */
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            var_20 = ((/* implicit */unsigned char) ((var_10) & (((/* implicit */unsigned long long int) arr_9 [i_7] [i_6 - 1]))));
            var_21 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_22 [i_6])) + (((/* implicit */int) (unsigned char)216)))));
        }
        for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            var_22 = ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14301))) < (10U))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-110))))) : (12796082957640082964ULL));
            var_23 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (unsigned short)23818))))));
            arr_33 [i_6] [i_6] [i_8] = 9223372036854775807LL;
        }
        var_24 = ((/* implicit */unsigned char) (signed char)110);
        arr_34 [i_6] = ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)103))))) || (((/* implicit */_Bool) (unsigned char)216)));
    }
    var_25 = ((/* implicit */signed char) 622989938);
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)1))))))) ? (((((((/* implicit */_Bool) 3379673456960546074LL)) ? (var_3) : (((/* implicit */unsigned long long int) 598449399U)))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-17838))))) / (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)7574))))))))));
    var_27 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) var_4)), ((~(var_6))))), (((/* implicit */long long int) var_5))));
}
