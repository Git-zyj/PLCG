/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80527
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
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */_Bool) (+(1073741823U)));
                var_19 |= ((/* implicit */signed char) var_13);
                arr_6 [i_0] [13U] = ((/* implicit */short) var_12);
                var_20 ^= ((/* implicit */short) (+(((arr_5 [i_0 - 3] [i_1 + 1]) - (((((/* implicit */_Bool) arr_2 [i_1])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((3221225461U) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))))) && (((/* implicit */_Bool) (+(1720828659648931446ULL))))));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (unsigned char i_3 = 3; i_3 < 16; i_3 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned char) arr_7 [i_2] [i_2]);
                arr_12 [i_3] [i_3] = ((/* implicit */signed char) 1073741830U);
            }
        } 
    } 
}
