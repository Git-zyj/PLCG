/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56269
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
    var_10 += ((/* implicit */unsigned long long int) var_9);
    var_11 = ((/* implicit */short) var_1);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)234)) & (((/* implicit */int) (unsigned char)5))))))) ? (var_5) : (((/* implicit */unsigned long long int) (~(var_9))))));
            var_13 = arr_3 [i_0] [i_0] [i_1];
        }
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((-4860062152116648369LL), (((/* implicit */long long int) arr_0 [i_0]))))) | ((~(min((arr_4 [(_Bool)1] [(_Bool)1]), (var_5)))))));
        var_14 = ((/* implicit */long long int) max((((/* implicit */short) var_1)), (max((((/* implicit */short) var_0)), (arr_2 [i_0] [i_0 - 1])))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) & (3688450026U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
        var_16 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) < (max((arr_4 [(short)6] [(short)6]), (((/* implicit */unsigned long long int) (unsigned char)234)))))), (((min((((/* implicit */long long int) var_9)), (8455004814983716607LL))) != (-8455004814983716609LL)))));
    }
    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        var_17 = (i_3 % 2 == 0) ? (((/* implicit */unsigned long long int) (+(min((-4860062152116648342LL), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)18)) << (((arr_8 [i_3]) - (681340139U))))))))))) : (((/* implicit */unsigned long long int) (+(min((-4860062152116648342LL), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)18)) << (((((arr_8 [i_3]) - (681340139U))) - (4172115703U)))))))))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            {
                                var_18 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_4] [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(unsigned short)1] [i_5 + 2] [i_7]))) : (var_4)))) ? (((/* implicit */unsigned long long int) (~(((4200302687570587065LL) | (((/* implicit */long long int) ((/* implicit */int) (short)3054)))))))) : (max((((var_1) ? (var_6) : (((/* implicit */unsigned long long int) arr_14 [i_5] [i_5] [i_4] [i_5])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) ^ (arr_10 [i_5])))))));
                                var_19 = ((/* implicit */short) arr_10 [i_5 - 1]);
                                var_20 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (short)20634)) ? (1003785162U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21))))));
                                arr_24 [i_3] [i_3] = ((/* implicit */unsigned int) (~((~(var_4)))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) (((~(arr_22 [i_5 + 3] [i_5] [i_5] [i_5] [i_5 + 2] [i_5 - 2]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_22 [i_5 - 2] [i_5] [i_5 - 2] [i_5] [i_5 - 2] [i_4]))))));
                }
            } 
        } 
    }
}
