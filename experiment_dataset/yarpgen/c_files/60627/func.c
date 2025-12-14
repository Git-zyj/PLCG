/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60627
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) var_12);
                var_20 |= ((/* implicit */signed char) (-(var_3)));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_12))));
            }
        } 
    } 
    var_22 |= ((/* implicit */signed char) 2381406094544289171LL);
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            {
                var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2]))))) << (min((((/* implicit */unsigned long long int) 2381406094544289171LL)), (15ULL)))))) : (((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_0 [i_2]) : (arr_0 [i_3])))));
                arr_10 [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (max((arr_8 [i_3] [i_2]), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_3]))) > (var_10))))))));
                var_24 = ((/* implicit */unsigned int) arr_2 [i_3]);
                arr_11 [i_2] = ((/* implicit */unsigned short) ((signed char) arr_1 [(unsigned char)9] [i_2]));
            }
        } 
    } 
}
