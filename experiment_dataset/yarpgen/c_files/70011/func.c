/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70011
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
    var_12 = (-(var_10));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (8386560) : (((/* implicit */int) (_Bool)0))))) ? (arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23791))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_6)))))))) : (((((((/* implicit */_Bool) (short)27511)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))) >> (((((((/* implicit */_Bool) 447898686)) ? (var_10) : (var_10))) + (224465854)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_14 ^= var_5;
                                var_15 &= ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_13 [(unsigned short)9] [i_4 - 2] [i_4 - 1] [i_4] [i_4 - 2])))) >= ((+(((/* implicit */int) (unsigned char)212))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */unsigned long long int) var_2)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) -645972103670274165LL))))));
                    arr_15 [i_2 - 1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) -1);
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) -2095629209)) ? (((int) ((((/* implicit */_Bool) -2337560265378318192LL)) ? (((/* implicit */unsigned long long int) 134217664)) : (16709089113356674850ULL)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)51)) < (((/* implicit */int) arr_13 [i_0] [(_Bool)1] [i_0] [i_0] [i_0])))))));
                }
            } 
        } 
    } 
    var_18 |= ((_Bool) (!(var_5)));
}
