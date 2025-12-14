/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66828
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */long long int) arr_8 [i_0 + 2] [4U] [6ULL]);
                    var_12 = ((/* implicit */signed char) 11285854541395538954ULL);
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_3 = 1; i_3 < 9; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) max((arr_4 [(signed char)5]), (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0 + 1]))))))));
                    arr_16 [i_0] [(_Bool)1] [11U] = ((/* implicit */signed char) min((7160889532314012662ULL), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_3] [10ULL])) || (((/* implicit */_Bool) arr_5 [i_4] [i_3]))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_5 = 2; i_5 < 11; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) arr_6 [i_0])))));
                    arr_21 [i_5] [i_5 - 2] [i_6] &= ((/* implicit */long long int) (~(((/* implicit */int) ((((arr_7 [i_0] [i_5] [i_5] [(_Bool)1]) >> (((arr_8 [i_6] [i_5] [i_0]) - (5808353389371883887ULL))))) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        arr_24 [i_0] [8U] [i_6] [i_7] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1])) ? (arr_5 [i_0 + 1] [i_5 - 1]) : (arr_5 [i_0 + 2] [i_5 - 2])))));
                        arr_25 [i_0] [(short)11] [i_6] [(signed char)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_1 [i_5 + 1] [i_0 - 1]))) ? (((/* implicit */int) arr_14 [i_0] [7ULL] [i_6] [i_7])) : ((+((~(((/* implicit */int) var_6))))))));
                        var_15 &= ((/* implicit */long long int) max(((~(((/* implicit */int) arr_3 [i_0 - 1] [(signed char)8] [i_5 - 2])))), ((-(((/* implicit */int) arr_3 [i_0 + 2] [9LL] [i_5 + 1]))))));
                        var_16 = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */unsigned long long int) max((arr_17 [i_0]), ((short)14732)))), (arr_8 [i_0] [(signed char)0] [i_0 + 1]))));
                    }
                    arr_26 [i_0] = var_6;
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) (short)-22894);
        var_18 -= ((/* implicit */unsigned short) arr_29 [i_8] [3ULL]);
        var_19 &= ((/* implicit */long long int) max((arr_28 [(unsigned short)16]), (((/* implicit */unsigned char) ((((/* implicit */int) arr_28 [16ULL])) > (((/* implicit */int) var_5)))))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        arr_32 [i_9] [i_9] = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_10))), (((/* implicit */unsigned long long int) max((arr_29 [i_9] [i_9]), (arr_29 [i_9] [i_9]))))));
        var_20 = min((((/* implicit */unsigned long long int) var_2)), (max((((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))), (((((/* implicit */_Bool) arr_29 [(signed char)12] [i_9])) ? (11285854541395538954ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
    }
}
