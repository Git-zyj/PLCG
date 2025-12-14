/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88885
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */signed char) ((short) ((unsigned long long int) var_0)));
                    var_11 = (!(((_Bool) arr_6 [(short)11] [i_2 - 3] [i_2 + 2] [i_1])));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_4] [i_3] [i_1] = ((int) 423226625);
                                arr_13 [i_1] = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) arr_7 [i_4] [i_4 + 1] [i_4] [i_4] [i_4 - 1] [i_4 + 1])), (((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_5 [i_2] [i_1] [i_1] [(short)2]) : (((/* implicit */unsigned long long int) var_1)))))), (((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) (signed char)45))))))))));
                                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((short) 8725724278030336ULL))) : (((/* implicit */int) max(((unsigned short)3), (((/* implicit */unsigned short) (signed char)-45)))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_1] = min((((((/* implicit */int) arr_8 [i_2 - 3] [i_2 - 3] [i_1] [i_1])) & (((/* implicit */int) arr_10 [i_2 - 2] [i_1])))), (((/* implicit */int) (signed char)-45)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        for (unsigned int i_6 = 2; i_6 < 21; i_6 += 1) 
        {
            {
                arr_20 [i_6] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((max((((/* implicit */signed char) arr_19 [i_5] [i_6])), (arr_16 [i_6]))), (arr_16 [i_5]))))));
                var_13 = ((/* implicit */signed char) var_6);
                arr_21 [i_6] [i_6] = ((/* implicit */int) (unsigned char)253);
            }
        } 
    } 
    var_14 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (signed char)-21)), ((+(var_5))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 2; i_7 < 20; i_7 += 4) 
    {
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            for (long long int i_9 = 2; i_9 < 20; i_9 += 1) 
            {
                {
                    arr_28 [i_7 - 1] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max(((unsigned char)3), (((/* implicit */unsigned char) arr_26 [(unsigned char)16])))))))) ? (((/* implicit */int) (unsigned short)4604)) : (((((/* implicit */int) arr_18 [i_8 + 1])) & (((/* implicit */int) arr_18 [i_8 + 1]))))));
                    var_15 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43239))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) ^ (8656197921264668046ULL)))))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_19 [(short)7] [(short)7]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15124504724375011700ULL))) + (((/* implicit */unsigned long long int) arr_17 [i_8] [i_8]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) max(((unsigned short)23822), (((/* implicit */unsigned short) (unsigned char)144)))))))) : (((/* implicit */int) (!(arr_19 [i_9 - 2] [i_9]))))));
                    var_17 = ((/* implicit */int) min((((unsigned long long int) arr_17 [i_8] [i_8 + 1])), (((/* implicit */unsigned long long int) (signed char)-6))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_10 = 0; i_10 < 14; i_10 += 2) 
    {
        for (int i_11 = 1; i_11 < 13; i_11 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)60932))));
                var_19 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (_Bool)1)), (max((11563278380982571257ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))))));
            }
        } 
    } 
}
