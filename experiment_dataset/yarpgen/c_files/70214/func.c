/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70214
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
    var_18 &= ((/* implicit */short) ((unsigned char) var_0));
    var_19 = ((/* implicit */short) var_2);
    var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((5619468235517570044LL), (((/* implicit */long long int) (short)-1))))) ? (var_1) : (((/* implicit */int) var_12))))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) max((-404912158827902411LL), (((/* implicit */long long int) (unsigned short)13687)))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */int) var_5)) << (((2027810269) - (2027810269))))) : ((~(((/* implicit */int) var_13))))))) : (max((((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) var_9))))), (max((((/* implicit */unsigned long long int) (short)-1)), (10508747478346020924ULL)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((unsigned long long int) 18014398509481983LL);
                    arr_7 [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (1273365545U)));
                    var_22 ^= ((/* implicit */short) (_Bool)1);
                    arr_8 [i_0] [14] [14U] [8ULL] = (unsigned char)44;
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)80))))) ? (((long long int) var_13)) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)9512)))))));
                }
            } 
        } 
    } 
}
