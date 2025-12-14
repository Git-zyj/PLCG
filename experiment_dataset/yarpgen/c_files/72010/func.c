/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72010
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
    var_12 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [(short)16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((arr_1 [i_0]) * (((/* implicit */unsigned long long int) arr_0 [i_0])))) >> (((/* implicit */int) ((_Bool) 6487853372684652393ULL)))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 4; i_2 < 10; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
            {
                {
                    arr_13 [i_1] [i_2] [i_1] = ((1099511627775ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) & (var_6)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        arr_17 [i_4] [(unsigned char)10] [12U] [i_4] = (-(((/* implicit */int) (unsigned char)13)));
                        arr_18 [i_1] [i_2] [i_2] [i_4] [i_4] = ((((/* implicit */_Bool) 2067160761263065066ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_10 [i_1])))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))) - (var_1))));
                    }
                }
            } 
        } 
        arr_19 [i_1] = ((/* implicit */unsigned int) ((((-9096680006787478291LL) + (9223372036854775807LL))) << (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_2)))))));
    }
    for (signed char i_5 = 2; i_5 < 15; i_5 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) ((arr_1 [i_5]) / (((/* implicit */unsigned long long int) var_6)))))) - (((/* implicit */int) ((((var_1) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-30504))))) || (((/* implicit */_Bool) (unsigned char)231)))))));
        arr_22 [(signed char)14] = ((/* implicit */unsigned int) (unsigned char)240);
        var_14 = ((/* implicit */unsigned long long int) (signed char)113);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 1) 
        {
            {
                arr_28 [i_7] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))) > (var_7)))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))) != (var_7))))));
                var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((arr_26 [i_6] [i_7] [i_7]), (((/* implicit */unsigned long long int) var_9))))))) ? (1568267148750457716ULL) : (((/* implicit */unsigned long long int) ((long long int) arr_27 [i_7] [i_7] [i_7 + 2])))));
                var_16 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_7 + 1] [i_7 - 1] [i_7 + 1])) || (((/* implicit */_Bool) var_3))))) < (((/* implicit */int) var_2))));
                arr_29 [i_6] [i_7] [(signed char)11] = ((/* implicit */int) max((((((/* implicit */_Bool) (short)-23678)) ? (var_8) : (arr_27 [i_7 - 1] [i_7 - 1] [i_7 + 1]))), (((/* implicit */unsigned long long int) ((short) (signed char)114)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) -9096680006787478280LL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_8 = 0; i_8 < 21; i_8 += 4) 
    {
        var_18 ^= 10274860362878843693ULL;
        var_19 = ((/* implicit */unsigned int) var_8);
    }
    /* vectorizable */
    for (short i_9 = 1; i_9 < 16; i_9 += 4) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) 8675014652185796563ULL))));
        /* LoopSeq 1 */
        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) (-(var_6)))) * (19U)));
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-116))))))))));
        }
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) > (((/* implicit */int) arr_33 [i_9 - 1] [i_9 - 1]))));
        var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) var_9)))));
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 17; i_11 += 1) 
        {
            for (int i_12 = 0; i_12 < 17; i_12 += 3) 
            {
                {
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_9 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19607))) : (arr_40 [i_9 - 1] [i_9] [i_9] [i_9])));
                    /* LoopNest 2 */
                    for (long long int i_13 = 2; i_13 < 16; i_13 += 1) 
                    {
                        for (long long int i_14 = 0; i_14 < 17; i_14 += 2) 
                        {
                            {
                                arr_47 [i_11] [i_13 - 2] [3ULL] [11] [i_11] = ((/* implicit */int) var_5);
                                var_26 = ((/* implicit */short) arr_26 [i_13] [i_12] [(signed char)16]);
                                var_27 ^= (+(((/* implicit */int) arr_34 [i_9 + 1])));
                                var_28 = ((int) 2199156340742852280ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
