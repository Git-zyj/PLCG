/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90847
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
    for (int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (unsigned short)21228))));
                var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned char) (_Bool)1))))) ? (min((((/* implicit */long long int) (signed char)2)), (arr_2 [i_0] [i_1] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -8351605667453893938LL))))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1148417904979476480LL))))) : (((/* implicit */int) (_Bool)0))))) : ((+(((((/* implicit */_Bool) var_6)) ? (var_9) : (var_1)))))));
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) & (arr_0 [14])))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7941786293839191599LL)))))) || (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8)))) >= (max((((/* implicit */long long int) var_15)), (var_0))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            {
                var_19 ^= ((/* implicit */long long int) ((unsigned long long int) (((_Bool)1) ? ((+(var_9))) : ((-(var_6))))));
                arr_11 [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) min(((-((((_Bool)1) ? (7941786293839191606LL) : (-332196870442621530LL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [6LL] [i_3])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) var_14)) ? (6LL) : (((/* implicit */long long int) 4024151971U)))) : (((/* implicit */long long int) ((/* implicit */int) min((var_13), ((signed char)82)))))))));
                var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
            }
        } 
    } 
}
