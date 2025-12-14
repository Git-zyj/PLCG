/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58874
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (var_1)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [(_Bool)1] [i_1] = 18446744073709551615ULL;
                var_20 = (!(((_Bool) arr_2 [i_1] [(_Bool)1] [i_1 - 2])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            {
                var_21 *= ((/* implicit */unsigned char) var_0);
                var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1821546823716505441ULL) >> (((/* implicit */int) (_Bool)0))))) ? ((+(((/* implicit */int) arr_10 [i_3])))) : (((/* implicit */int) ((_Bool) arr_8 [i_3])))));
                arr_12 [i_2] [i_3] = ((/* implicit */int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (arr_8 [3LL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_5)))))) : (((0ULL) >> (((((/* implicit */int) (unsigned short)14746)) - (14688)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) var_14);
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) min((((/* implicit */short) var_9)), (max((((/* implicit */short) var_0)), (var_17))))))));
}
