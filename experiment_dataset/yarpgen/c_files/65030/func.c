/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65030
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(arr_3 [i_0])))), (max((arr_1 [i_0]), (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))))))) ? (((/* implicit */long long int) (+(arr_1 [i_1])))) : (((long long int) (short)12459))));
                var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))));
                var_18 |= ((/* implicit */signed char) -46940135);
            }
        } 
    } 
    var_19 += ((/* implicit */short) (!(((/* implicit */_Bool) (~(var_8))))));
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((var_15) ? (var_8) : (((/* implicit */int) (unsigned char)221)))) : (((int) 17244232346723194545ULL))))) : (max((((((/* implicit */unsigned long long int) -3)) ^ (var_6))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (var_6))))))))));
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_4] [i_4])))));
                    var_22 = ((/* implicit */long long int) arr_9 [i_4] [i_3]);
                    var_23 &= ((/* implicit */signed char) ((max((arr_9 [i_3] [i_3]), (arr_9 [i_2] [i_4]))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)171)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_0 [(unsigned char)4] [i_5]))));
                        var_25 = ((/* implicit */signed char) arr_1 [i_5]);
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((((/* implicit */_Bool) (-((+(-299295837)))))) ? (16833257192555856241ULL) : (((/* implicit */unsigned long long int) max((min((arr_15 [i_2] [i_2] [i_2]), (((/* implicit */unsigned int) 1383694358)))), (((/* implicit */unsigned int) arr_11 [i_2] [i_2] [14ULL] [i_2])))))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
    {
        arr_23 [i_8] [i_8] = ((/* implicit */short) max((((/* implicit */unsigned short) ((((var_9) << (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_8] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [(signed char)14] [i_8] [i_8]))) : (var_10))))))), (min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_8]))))), (arr_21 [6U])))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                {
                    var_27 = ((/* implicit */short) min(((-(((/* implicit */int) arr_17 [i_10] [i_9] [i_9] [i_8])))), (((/* implicit */int) arr_17 [i_8] [i_8] [i_8] [i_8]))));
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned int) (unsigned char)74)), (arr_20 [(signed char)1] [i_10] [i_10] [(short)14] [i_8]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_5 [i_9])))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)177)), ((unsigned short)55208))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 17; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (signed char i_13 = 0; i_13 < 17; i_13 += 4) 
                {
                    {
                        arr_37 [i_8] [i_8] [i_8] [i_8] = ((unsigned char) ((((var_11) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_12]))))) ? (((arr_27 [i_13] [i_11] [i_11] [6U]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_8] [i_8] [i_13]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_12 [i_8] [i_11] [i_11]))))));
                        var_29 = (-(min((arr_22 [i_11] [i_11]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_8]))))))));
                    }
                } 
            } 
        } 
    }
    var_30 -= ((/* implicit */int) min((max((max((((/* implicit */unsigned long long int) var_12)), (4511722518448462999ULL))), (13140984267827638681ULL))), (((/* implicit */unsigned long long int) var_12))));
}
