/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62728
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (~((((-(var_1))) | (((/* implicit */long long int) max((0U), (((/* implicit */unsigned int) arr_2 [i_0])))))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_1])) <= (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)57586))))));
                var_20 = ((/* implicit */long long int) (~(137438953471ULL)));
                var_21 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) (unsigned char)44)) > (((/* implicit */int) (signed char)(-127 - 1))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_16);
    /* LoopSeq 4 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] |= (!(((/* implicit */_Bool) var_15)));
        arr_10 [i_2] = ((/* implicit */signed char) var_2);
    }
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        var_23 = arr_12 [i_3];
        var_24 = ((/* implicit */short) (-(((((((/* implicit */int) ((short) var_7))) + (2147483647))) << (((((/* implicit */int) arr_4 [i_3])) - (122)))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            for (signed char i_6 = 2; i_6 < 23; i_6 += 4) 
            {
                {
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (~(((/* implicit */int) var_13)))))));
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((arr_13 [i_6 + 1]) < (arr_13 [i_6 - 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446743936270598146ULL))))))))));
                    arr_20 [i_4] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_16 [i_6 - 2] [i_6 - 2] [i_6 + 1]))) ? (min((2733030886U), (min((((/* implicit */unsigned int) (_Bool)1)), (var_11))))) : (((/* implicit */unsigned int) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_6] [i_4] [i_4] [i_4]))))))))));
                }
            } 
        } 
        arr_21 [(short)24] &= ((/* implicit */unsigned short) arr_15 [i_4]);
    }
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (unsigned char)61))));
        arr_26 [i_7] [i_7] = ((/* implicit */unsigned short) var_4);
        var_28 = ((/* implicit */unsigned long long int) (short)32767);
    }
    /* LoopNest 2 */
    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 1) 
    {
        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_29 = ((((/* implicit */_Bool) ((signed char) min((arr_16 [i_8] [i_9] [i_8]), (((/* implicit */unsigned char) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1023LL)) ? (((/* implicit */int) ((signed char) arr_33 [i_10]))) : (((((/* implicit */int) (unsigned char)56)) + (((/* implicit */int) arr_5 [(short)18] [i_9] [18LL]))))))) : (arr_13 [i_8]));
                                var_30 = ((/* implicit */_Bool) min((arr_35 [(signed char)9] [(signed char)9] [(unsigned char)5] [i_12]), (((/* implicit */unsigned long long int) arr_14 [i_8] [i_8]))));
                                var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) min((((unsigned long long int) arr_22 [i_8])), (((/* implicit */unsigned long long int) var_5)))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) (((~(10709871027047785489ULL))) < (((/* implicit */unsigned long long int) 2019580964586750393LL)))))));
                }
                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775800LL)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) (unsigned char)0))));
            }
        } 
    } 
    var_34 = ((/* implicit */_Bool) var_5);
}
