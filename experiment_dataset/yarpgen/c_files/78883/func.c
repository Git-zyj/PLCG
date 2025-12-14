/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78883
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
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        arr_3 [i_0 + 1] [2U] = ((/* implicit */short) max((((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) (signed char)126))), (max((var_6), (((/* implicit */int) (_Bool)0))))))), (var_7)));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_12 *= ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_9 [i_2] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_11))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((((/* implicit */int) ((max((arr_10 [i_0 - 1] [10] [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_8)))) <= (((/* implicit */long long int) ((/* implicit */int) ((var_1) || (var_3)))))))) ^ (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (short)6273)) : (((/* implicit */int) (unsigned short)65535)))));
    }
    for (unsigned short i_4 = 2; i_4 < 18; i_4 += 2) 
    {
        var_14 = min((((((/* implicit */int) ((var_8) != (var_8)))) << (((((1732449631) + (371395592))) - (2103845204))))), (((/* implicit */int) ((arr_13 [i_4 + 1]) < (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)121)))))))));
        var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_14 [i_4] [i_4 - 2])) ? (arr_13 [i_4 - 2]) : (arr_13 [i_4 - 2]))) != (((/* implicit */int) ((short) arr_13 [i_4 - 2])))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_5] [i_5])) * (((/* implicit */int) arr_16 [i_5] [i_5]))))) ? (((arr_16 [i_5] [i_5]) ? (var_4) : (((/* implicit */int) arr_16 [i_5] [i_5])))) : (((/* implicit */int) max((arr_16 [i_5] [i_5]), (arr_16 [i_5] [i_5]))))));
        var_17 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_14 [i_5] [i_5])) ? (813672767) : (arr_13 [i_5]))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [(unsigned short)6]))) != (((((/* implicit */_Bool) (unsigned short)3317)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13396421787040462489ULL))))))));
        var_18 = ((/* implicit */long long int) ((_Bool) ((signed char) ((long long int) (short)22385))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [13LL] [i_7 + 1])) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) (_Bool)1))));
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) var_11))))))));
        }
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_18 [i_6 + 2])))))));
        var_22 ^= ((/* implicit */unsigned int) ((short) var_6));
        var_23 &= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6 - 1])))));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 22; i_8 += 1) 
    {
        arr_26 [i_8] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)14)) != (((/* implicit */int) (signed char)59))));
        var_24 = ((/* implicit */short) (+(var_6)));
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 18; i_9 += 4) 
    {
        for (unsigned int i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            for (int i_11 = 0; i_11 < 18; i_11 += 3) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) ((int) var_10));
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) min((min((((/* implicit */long long int) 1944801120)), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((signed char) (signed char)-71))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned char) 8355840))), (((((/* implicit */_Bool) var_11)) ? (max((var_9), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
}
