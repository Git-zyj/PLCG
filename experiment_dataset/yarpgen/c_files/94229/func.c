/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94229
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
    var_20 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned short)11561)))), (((/* implicit */int) var_5)))) == (((/* implicit */int) var_16))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_2] [i_1] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1]))))) ? (9187343239835811840LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))));
                    arr_8 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (-(max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (unsigned char)150))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 430735480832909862LL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        for (unsigned char i_4 = 4; i_4 < 12; i_4 += 4) 
        {
            {
                var_22 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)32768))));
                var_23 = ((/* implicit */signed char) arr_10 [i_3] [i_4]);
            }
        } 
    } 
}
