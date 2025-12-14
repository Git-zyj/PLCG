/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85282
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) var_3);
        var_14 = ((/* implicit */unsigned char) (signed char)62);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned char) max((((/* implicit */long long int) var_12)), (var_9))))), (var_9)));
                        var_15 = ((/* implicit */unsigned int) var_8);
                        arr_10 [i_0] [i_2] [16LL] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)229))) + (-9223372036854775803LL)));
                    }
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_2])) ^ (((/* implicit */int) ((signed char) (signed char)-33)))));
                    var_17 = ((/* implicit */_Bool) ((long long int) ((arr_6 [i_0] [(signed char)9] [i_2 + 1]) && (((/* implicit */_Bool) arr_3 [i_1] [i_1 + 1] [i_2 + 2])))));
                }
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        var_18 = min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_12 [i_4] [i_4])), (((arr_12 [i_4] [i_4]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)3840))))))), (((((/* implicit */_Bool) (unsigned short)45812)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 961573087)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)936))) : (var_3)))) : (18446744073709551615ULL))));
        arr_13 [i_4] = ((/* implicit */int) min((((/* implicit */unsigned int) ((signed char) arr_11 [i_4]))), (arr_11 [i_4])));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_22 [i_4] [i_5] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_19 [i_4] [i_5] [i_5] [i_4])) ? (((/* implicit */int) arr_18 [i_4] [i_4] [i_6])) : (((/* implicit */int) arr_18 [i_4] [i_4] [i_6]))))));
                    arr_23 [i_4] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83))) - (arr_15 [i_4] [i_4] [i_4]))) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                }
            } 
        } 
        arr_24 [i_4] = ((/* implicit */unsigned char) ((int) ((signed char) arr_17 [i_4] [i_4] [i_4])));
        /* LoopNest 3 */
        for (long long int i_7 = 2; i_7 < 21; i_7 += 4) 
        {
            for (short i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) (~(min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (785441579059741385ULL))), (((/* implicit */unsigned long long int) (unsigned short)11296))))));
                        arr_34 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) var_6);
                        arr_35 [i_4] = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_12 [i_4] [i_4]))))));
                        arr_36 [i_4] [i_4] [i_4] [i_9] = ((/* implicit */unsigned long long int) min((((long long int) 961573097)), (((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_4] [i_4] [i_7 + 1])) + (var_8))))));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned char) (+(-1772163558)));
    /* LoopNest 3 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned char i_12 = 0; i_12 < 17; i_12 += 4) 
            {
                {
                    var_21 = ((/* implicit */signed char) arr_42 [i_11]);
                    arr_45 [i_10] [i_11] [i_10] [i_12] = ((/* implicit */unsigned long long int) arr_41 [i_10]);
                    arr_46 [i_10] [i_10] [i_12] = ((unsigned int) ((((/* implicit */int) arr_21 [i_10] [i_10] [i_12])) * (((/* implicit */int) arr_44 [i_10] [(signed char)2] [i_12]))));
                }
            } 
        } 
    } 
}
