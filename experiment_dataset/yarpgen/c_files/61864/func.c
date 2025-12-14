/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61864
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0 - 2] [i_2] [i_0] = ((/* implicit */signed char) (((-(arr_1 [i_0 - 2]))) - (((arr_1 [i_0 - 1]) / (((/* implicit */int) arr_11 [i_0 - 2] [3LL] [i_3 - 1] [i_3] [i_3] [i_3]))))));
                                arr_13 [i_4] [i_3] [i_0] [i_0] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((short) 295759804))) - ((~(((/* implicit */int) arr_4 [i_0 + 1] [i_1])))))) > (((max((2147483647), (arr_1 [i_0]))) + (((((/* implicit */int) arr_5 [i_0] [(unsigned char)8] [i_0])) + (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_0] = ((/* implicit */short) (((~(max((2013265920ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((-145911968), (((/* implicit */int) arr_0 [i_1])))))))));
                    arr_15 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-96)) - (((/* implicit */int) arr_4 [i_0 - 2] [i_0 + 1])))) / ((-(((/* implicit */int) arr_5 [i_0 - 2] [i_1] [i_0]))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_2)) / ((-(min((var_0), (((/* implicit */long long int) var_2))))))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > ((-(3164306537U)))))) % (((((/* implicit */int) min((((/* implicit */short) var_9)), ((short)32767)))) | (557058807)))));
    var_13 = ((/* implicit */_Bool) (+(min(((~(((/* implicit */int) var_6)))), ((~(((/* implicit */int) var_6))))))));
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                {
                    arr_24 [i_5] [i_6 + 1] [i_7] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-16341)), ((unsigned short)448)))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_7] [i_6 + 1] [i_5])) >= (2147483642)))) : ((~(((/* implicit */int) arr_18 [i_7])))))) << (((((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_10 [i_5] [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_7] [i_7])) : (((/* implicit */int) (signed char)100)))) ^ ((~(((/* implicit */int) (unsigned short)65068)))))) + (65078)))));
                    arr_25 [i_7] = ((/* implicit */unsigned short) (((((~(3164306522U))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5] [i_6 + 1] [i_7]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)31778)))));
                }
            } 
        } 
    } 
}
