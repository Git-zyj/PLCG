/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90975
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)4662);
                    var_15 = ((/* implicit */int) ((unsigned short) (+(((((/* implicit */_Bool) (unsigned short)4644)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (var_8))))));
                    arr_11 [i_2 + 2] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_12), (min((var_12), (((/* implicit */int) var_3))))))) ? ((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_4 [i_0])))) : (((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (unsigned short)14))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned short)11)))) >= (((/* implicit */int) (unsigned short)11))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        var_17 += ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3])))))) + (((((/* implicit */_Bool) 3975986484U)) ? (254751175U) : (var_2)))));
        arr_14 [20U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (var_8)))));
        var_18 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 5266343095864244078ULL))));
    }
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)65535)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) % (13444162180626460594ULL))))))));
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) min(((-(4398046511103LL))), (((/* implicit */long long int) (((~(3630819695U))) | (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65525)))))))))))));
    var_21 -= ((/* implicit */long long int) var_11);
    /* LoopNest 3 */
    for (int i_4 = 4; i_4 < 18; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (long long int i_6 = 2; i_6 < 15; i_6 += 2) 
            {
                {
                    var_22 = ((((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_4]))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_4]))) / (-4548652561144817140LL))) == (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_11))))))))));
                    var_23 = ((/* implicit */long long int) arr_17 [i_4 - 2]);
                }
            } 
        } 
    } 
}
