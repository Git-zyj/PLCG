/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58502
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 5)) == (127LL))))) * (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4080))) + ((-(150LL)))))));
                                var_17 = ((/* implicit */unsigned short) (~((((~(-137LL))) | ((~(-123LL)))))));
                                var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) 169LL)) ? (((/* implicit */int) (_Bool)1)) : (461422392)));
                            }
                        } 
                    } 
                    var_19 += ((/* implicit */short) ((((/* implicit */_Bool) 144LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) (unsigned short)65535)))))));
                    var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -461422392)) | (4089079649U)))) ? (((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */long long int) ((/* implicit */int) (short)127))) : (-150LL))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)32768)) - (32765))))))));
                    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) -461422392)) & (150LL))) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min((var_22), ((unsigned short)0)));
}
