/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93117
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
    var_15 = var_13;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : ((-(311326505U)))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((arr_3 [i_2]), (var_9)));
                            arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) var_8);
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)87)) >= (((/* implicit */int) var_12)))))) | (var_1)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_1]))));
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7918784225209781048LL)) ? (7918784225209781057LL) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (-7918784225209781048LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned short)1)) >> (((((/* implicit */int) (signed char)-88)) + (103))))), (((/* implicit */int) (signed char)87))))) : (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (var_14))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((((var_3) & (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)24963))))))), (((/* implicit */long long int) (unsigned char)109))));
    /* LoopNest 3 */
    for (unsigned int i_4 = 3; i_4 < 20; i_4 += 2) 
    {
        for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                {
                    arr_25 [i_4 + 1] [i_4 + 1] [i_4 - 2] = min((arr_15 [i_4 - 2]), ((signed char)86));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned char)152))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)107)))) & (((/* implicit */int) arr_17 [i_4] [i_4 + 2]))))) : (min((((((/* implicit */_Bool) arr_24 [i_4] [i_5] [i_6])) ? (arr_18 [i_6] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_6]))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))))));
                    arr_26 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */int) arr_16 [i_5])) != (((/* implicit */int) (unsigned char)99))))))) : (((/* implicit */int) arr_17 [i_4] [i_5]))));
                }
            } 
        } 
    } 
}
