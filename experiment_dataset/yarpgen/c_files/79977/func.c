/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79977
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
    var_12 = ((((/* implicit */int) var_2)) + (min((((/* implicit */int) var_1)), (((((/* implicit */int) (unsigned char)24)) | (((/* implicit */int) (unsigned char)24)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [(short)0] [i_1] = ((/* implicit */int) (unsigned char)231);
                var_13 = (~((-(((/* implicit */int) ((arr_3 [11ULL] [11ULL]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12)))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) arr_2 [i_0] [i_1]);
                                arr_14 [i_0] [i_1] [i_0] [3ULL] [i_1] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (unsigned char)218)), (944724363927003834ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-17)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 10; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8))) : (17502019709782547754ULL))) << (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)21))))), (17095106188542911951ULL)))));
                            var_15 = ((/* implicit */long long int) arr_7 [i_1] [11U] [11U]);
                        }
                    } 
                } 
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-39)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [(unsigned char)3] [i_1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) (short)-39))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(short)8] [i_1])) || (((/* implicit */_Bool) arr_8 [i_1] [11] [i_1] [2ULL])))))) : (((((/* implicit */_Bool) (short)13)) ? (arr_10 [i_1] [8LL] [i_1] [i_1] [i_1] [(unsigned short)3] [i_1]) : (((/* implicit */unsigned long long int) var_3))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        for (unsigned short i_8 = 4; i_8 < 22; i_8 += 4) 
        {
            for (long long int i_9 = 1; i_9 < 20; i_9 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) ((var_3) >> (((((((/* implicit */int) arr_26 [i_7] [15LL] [i_7] [i_7])) & (((/* implicit */int) arr_26 [i_8] [i_8 + 1] [22U] [i_8 - 1])))) - (187)))));
                    var_18 = ((/* implicit */int) var_1);
                    var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)7)))))) * (((unsigned long long int) arr_23 [i_7]))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) min(((short)-16), (((/* implicit */short) (unsigned char)37))))) : ((+(((/* implicit */int) (short)3))))));
    var_21 = ((/* implicit */unsigned long long int) (~(var_3)));
}
