/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88411
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
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [i_0 - 3] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) -166511988)) && (arr_4 [i_0 - 2])))), (((((/* implicit */int) arr_4 [i_0 - 3])) - (((/* implicit */int) arr_4 [i_0 - 3]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) arr_12 [i_0] [i_1 + 1] [i_2 - 1] [i_3]);
                                var_16 = ((/* implicit */short) (~(3184566859U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
    {
        var_17 = 3184566859U;
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) -7633522662174053668LL)) ? (((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) (signed char)127))))), (((((/* implicit */_Bool) 3184566854U)) ? (arr_3 [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)12)))))));
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (4294967295U))) * (((/* implicit */unsigned int) (~(((/* implicit */int) (short)6137)))))))) ? (var_13) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5]))) ^ (3184566854U))))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) (-(arr_3 [i_6] [i_6])));
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((4294967295U) % (((/* implicit */unsigned int) 287877353)))))));
        var_21 = ((((/* implicit */long long int) 1048576)) / (var_12));
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 3) 
            {
                {
                    arr_30 [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_7] [i_8] [i_9]))) <= (arr_13 [i_9 + 1])));
                    var_22 = ((/* implicit */unsigned int) arr_27 [i_7] [i_8] [i_9 + 1]);
                    arr_31 [i_9] = ((/* implicit */signed char) arr_25 [i_8]);
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 1110400442U)) ? (1432580782U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))));
                }
            } 
        } 
        var_24 = ((/* implicit */_Bool) (short)-6138);
    }
}
