/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76100
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_0)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))))) ? (((((/* implicit */_Bool) 2776157314U)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) var_15))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (+(((/* implicit */int) (unsigned char)19)))))) ? ((-(((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) ((_Bool) arr_10 [i_3] [i_3] [i_4 - 1] [i_3] [i_4] [i_3])))));
                                arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) min((-2045041521), (((/* implicit */int) arr_12 [(short)1] [i_3] [i_2] [(short)6] [i_0])))))))), ((-(arr_5 [i_4] [i_3] [i_0])))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-118))) : (arr_10 [i_0] [i_1] [14LL] [14LL] [i_2] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-54), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-33)) > (((/* implicit */int) (signed char)108))))))))))))));
                }
            } 
        } 
    } 
}
