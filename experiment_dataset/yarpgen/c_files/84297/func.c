/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84297
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
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_6)), (min((((/* implicit */long long int) 2700560649U)), (var_8)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) var_6))))))));
                            var_15 = ((/* implicit */int) (-(((((/* implicit */_Bool) -6247703965256250324LL)) ? (1594406646U) : (1594406646U)))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 2700560645U)) ? (((((1594406643U) % (1594406623U))) << (((-271189179096646108LL) + (271189179096646131LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) min((var_0), (var_0)))) <= (min((2700560641U), (1594406646U)))))))));
                arr_14 [i_0] [i_0 + 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_7 [i_0 - 3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (min((min((2700560646U), (1594406633U))), (((/* implicit */unsigned int) var_3))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 1; i_4 < 16; i_4 += 2) 
    {
        for (unsigned int i_5 = 2; i_5 < 16; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 1) 
                        {
                            {
                                var_17 = (((!(((/* implicit */_Bool) 2700560643U)))) && (((/* implicit */_Bool) var_11)));
                                arr_28 [i_5] [i_5 + 2] [i_6] [i_7] [i_8 + 3] = ((/* implicit */unsigned char) ((((var_10) >> (((((/* implicit */int) var_1)) - (151))))) << (((((((/* implicit */int) var_1)) % (33554431))) - (159)))));
                            }
                        } 
                    } 
                    arr_29 [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                    var_18 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) -271189179096646111LL)) ? (1594406646U) : (1U)))) + (((((-271189179096646111LL) + (9223372036854775807LL))) << (((1594406654U) - (1594406654U)))))));
                }
            } 
        } 
    } 
}
