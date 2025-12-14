/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6562
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
    var_18 = ((/* implicit */unsigned short) max((2147483647), (((((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) var_0))))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_6))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_19 &= ((/* implicit */unsigned char) var_12);
                    arr_6 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))) <= (((long long int) (unsigned char)28))))), (max((arr_3 [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((-9223372036854775807LL - 1LL)) : (var_14))))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (9223372036854775807LL))))))) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_0] [i_0]) >= (arr_4 [i_0] [i_1])))))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_10))));
                    var_22 = ((/* implicit */unsigned long long int) ((((((((/* implicit */unsigned long long int) 9223372036854775807LL)) * (arr_3 [i_0]))) > (((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_0])))))) : ((+(((((/* implicit */_Bool) 429655769U)) ? (((/* implicit */long long int) 2147483637)) : (-4457504636030344077LL)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            for (unsigned char i_5 = 2; i_5 < 10; i_5 += 1) 
            {
                {
                    var_23 = ((/* implicit */short) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_4] [i_5 + 1]))))))), (((((/* implicit */int) (unsigned short)6)) % ((+(((/* implicit */int) (short)8316))))))));
                    var_24 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(-8711910394078481912LL)))), (((arr_5 [i_5 - 1] [i_5 + 2] [i_5 + 3] [i_5 + 3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5] [i_5 - 1] [i_5])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            {
                                var_25 &= ((/* implicit */_Bool) (signed char)-78);
                                var_26 = ((/* implicit */signed char) arr_17 [i_3] [i_3] [i_3] [i_6] [i_7]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
