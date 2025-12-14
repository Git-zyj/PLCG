/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96691
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) ((_Bool) 1879048192U));
                    arr_6 [i_1] = ((/* implicit */unsigned short) arr_4 [i_1] [i_1 + 1]);
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_0])))) : (((unsigned int) var_12))));
    }
    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        arr_11 [i_3] [i_3] = ((arr_1 [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_3]), (arr_1 [i_3]))))) : (((unsigned int) arr_1 [i_3])));
        var_14 = ((/* implicit */short) ((((/* implicit */long long int) 2415919130U)) == (269225054084191801LL)));
        arr_12 [8ULL] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_3] [i_3])) && (((/* implicit */_Bool) arr_8 [i_3])))));
    }
    for (signed char i_4 = 2; i_4 < 23; i_4 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) ((int) arr_14 [i_4 - 2]));
        arr_15 [i_4] [i_4] = ((/* implicit */int) ((signed char) ((unsigned char) arr_14 [i_4 + 1])));
        var_16 += ((/* implicit */signed char) arr_14 [i_4]);
        var_17 = ((/* implicit */long long int) ((max((((int) arr_14 [i_4])), (arr_13 [i_4 - 2]))) >> (((((/* implicit */int) arr_14 [i_4])) - (233)))));
    }
    var_18 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) var_9))) - (((/* implicit */int) ((((unsigned long long int) var_9)) <= (((/* implicit */unsigned long long int) var_11)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        var_19 -= ((((int) arr_18 [18ULL])) >> (((((/* implicit */int) arr_18 [14LL])) - (171))));
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 22; i_6 += 2) 
        {
            for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    {
                        arr_27 [i_5] [i_5] [i_7] [i_5] = ((/* implicit */int) ((unsigned long long int) ((unsigned char) 2415919097U)));
                        arr_28 [i_5] [i_5] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((arr_22 [i_6] [i_7] [i_7]) + (((/* implicit */long long int) var_1))))), (max((var_7), (((/* implicit */unsigned long long int) arr_13 [i_5])))))) - (((/* implicit */unsigned long long int) arr_13 [i_5]))));
                        arr_29 [i_5] [i_6 - 2] [i_5] = ((/* implicit */unsigned long long int) ((unsigned char) max((arr_23 [i_6 - 3] [i_6 + 2]), (arr_23 [i_6 - 1] [i_6 + 1]))));
                        arr_30 [i_5] [i_5] = ((/* implicit */int) arr_21 [i_5] [i_6] [i_7] [i_8]);
                    }
                } 
            } 
        } 
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_5])) / (var_12)))) ? (((((/* implicit */_Bool) ((short) var_8))) ? (var_5) : (max((var_9), (((/* implicit */long long int) var_12)))))) : (((/* implicit */long long int) ((unsigned int) ((int) arr_25 [i_5] [i_5] [i_5] [i_5])))));
        var_21 = ((/* implicit */long long int) ((_Bool) min((arr_16 [i_5]), (arr_16 [i_5]))));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) 
    {
        arr_35 [i_9] = ((/* implicit */unsigned long long int) ((long long int) arr_14 [i_9]));
        arr_36 [i_9] = ((arr_17 [i_9]) + (arr_17 [i_9]));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 1) 
    {
        var_22 = ((int) (~(((/* implicit */int) arr_2 [i_10] [i_10] [i_10]))));
        var_23 = ((/* implicit */unsigned char) ((min((2415919103U), (((/* implicit */unsigned int) ((var_2) - (1118094086)))))) ^ (((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_32 [i_10]), (((/* implicit */unsigned char) arr_23 [i_10] [i_10]))))))))));
        arr_39 [10U] &= ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_22 [i_10] [i_10] [10]))) || (((/* implicit */_Bool) min((arr_25 [i_10] [i_10] [(unsigned char)19] [i_10]), (((unsigned char) arr_26 [i_10] [(unsigned short)8] [i_10] [i_10] [i_10])))))));
    }
    var_24 = ((/* implicit */short) var_2);
}
