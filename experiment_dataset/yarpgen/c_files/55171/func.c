/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55171
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_11 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)1172)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_0]))))))))));
        var_12 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)21258)))) | (((unsigned long long int) var_9))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_13 = arr_0 [i_1 - 2];
        var_14 = ((/* implicit */unsigned short) arr_2 [i_1]);
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            {
                                var_16 = (+(((/* implicit */int) (_Bool)1)));
                                arr_16 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1]))) ^ (var_5)));
                                var_17 = ((/* implicit */int) 104833284U);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) (~(arr_4 [i_1])));
    }
    for (unsigned short i_6 = 2; i_6 < 16; i_6 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) (-(((arr_13 [i_6] [i_6 + 1] [i_6] [i_6]) ? (((/* implicit */int) arr_13 [i_6] [i_6 + 1] [i_6] [i_6])) : (((/* implicit */int) arr_13 [i_6] [i_6 + 1] [i_6] [i_6]))))));
        var_20 = ((/* implicit */long long int) (-(((((/* implicit */int) var_3)) ^ (((/* implicit */int) (unsigned short)22892))))));
        arr_20 [i_6] [i_6] = ((/* implicit */_Bool) (-(arr_4 [i_6])));
        arr_21 [i_6] [i_6] = ((/* implicit */long long int) ((var_10) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */int) ((((/* implicit */int) arr_13 [i_6] [i_6] [i_6] [i_6])) >= (((/* implicit */int) var_10))))) : (((/* implicit */int) arr_5 [i_6 - 2] [i_6] [i_6 + 1])))))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 2334496452113866598LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)21258)) : (((/* implicit */int) (_Bool)1))))))))));
    }
    for (unsigned short i_7 = 2; i_7 < 16; i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            for (unsigned short i_9 = 1; i_9 < 16; i_9 += 2) 
            {
                {
                    var_22 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((arr_8 [(unsigned short)4] [(unsigned short)4] [(unsigned short)4]) + (2147483647))) >> (((arr_8 [6ULL] [6ULL] [6ULL]) + (992762312))))))));
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_10))));
                }
            } 
        } 
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_7 - 2] [i_7] [i_7])) ? (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)42647)) : (((/* implicit */int) var_8)))) >> (((((/* implicit */int) arr_2 [i_7])) ^ (((/* implicit */int) arr_12 [i_7])))))) : ((+(1186667626)))));
        var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (var_6)))) * (var_2)));
        arr_30 [i_7] = ((/* implicit */unsigned short) var_10);
    }
    /* LoopNest 3 */
    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 2) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_26 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_29 [i_10] [i_11] [i_12])), (var_0)))) / (var_4)));
                    arr_41 [i_10] [i_10] [i_12] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (unsigned short)60207)) - (((/* implicit */int) (unsigned short)18587)))));
                    var_27 = ((/* implicit */unsigned int) (((+(((var_6) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) / (((/* implicit */long long int) var_0))));
                }
            } 
        } 
    } 
    var_28 *= ((/* implicit */unsigned short) var_1);
    var_29 &= ((/* implicit */long long int) var_10);
}
