/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71148
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
    var_14 = ((/* implicit */unsigned long long int) ((long long int) (short)255));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((unsigned char) ((((/* implicit */_Bool) (unsigned char)180)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)76))))))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(signed char)3] [i_0]))) & (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32767)))))) : (arr_0 [i_0] [3ULL])))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) var_9);
        arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((752813106636205488LL) / (((/* implicit */long long int) arr_3 [i_1]))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))) || (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) || (((arr_4 [i_1] [i_1]) < (arr_0 [i_1] [i_1])))))));
    }
    for (int i_2 = 4; i_2 < 9; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_17 |= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) min((var_8), (arr_9 [i_2] [i_2 + 1]))))))) ? (arr_4 [i_3] [(signed char)16]) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -1750230767)) ? (((/* implicit */int) (unsigned char)98)) : (1750230766))))))));
                    var_18 -= ((/* implicit */_Bool) ((unsigned short) (unsigned short)32769));
                }
            } 
        } 
        var_19 = ((((/* implicit */_Bool) (~(arr_0 [i_2 + 1] [i_2 - 4])))) ? (((((/* implicit */_Bool) (unsigned short)8588)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_10)))) : ((~(1750230797))));
        arr_13 [i_2] = ((/* implicit */unsigned char) var_12);
    }
    var_20 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((var_6), ((unsigned short)32769)))))) == (min((((/* implicit */int) ((signed char) -7222373900316665176LL))), (((((/* implicit */int) var_5)) / (((/* implicit */int) (short)32767))))))));
    var_21 = ((unsigned short) var_5);
    /* LoopSeq 2 */
    for (unsigned short i_5 = 1; i_5 < 20; i_5 += 3) 
    {
        var_22 ^= ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)62)), (var_6)))) * (((/* implicit */int) arr_15 [i_5 + 2] [i_5 + 2]))))) ? (255) : (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_2))))) > (var_13)))));
        var_23 = ((/* implicit */signed char) ((unsigned long long int) 2486002677U));
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                {
                    var_24 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_7] [i_6]))) % (1193767648U));
                    arr_26 [i_6] [i_6] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_21 [i_6] [i_6] [11ULL])) ? (7222373900316665175LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) / (((/* implicit */long long int) 1750230766))));
                    arr_27 [(unsigned short)10] = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) / (((((/* implicit */_Bool) arr_24 [i_8] [i_7] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))));
                }
            } 
        } 
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_6] [i_6] [i_6])) ? (arr_24 [i_6] [i_6] [i_6]) : (arr_24 [i_6] [i_6] [i_6])));
        var_26 = ((/* implicit */long long int) (unsigned short)32767);
    }
}
