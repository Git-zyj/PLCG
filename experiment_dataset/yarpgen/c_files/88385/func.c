/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88385
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_3] [i_0] = ((_Bool) ((_Bool) min((var_4), (var_9))));
                                arr_14 [(_Bool)1] [i_0] [(unsigned char)6] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_8) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) ? (((unsigned long long int) var_0)) : (var_4)))) ? (((((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_3))))) * ((-(((/* implicit */int) var_6)))))) : ((-(((/* implicit */int) ((_Bool) (unsigned char)228)))))));
                                var_10 ^= ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (18446744073709551606ULL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 9; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)1))))));
                                arr_21 [i_0] [10ULL] [i_2] [i_6] &= ((/* implicit */unsigned char) ((((((((/* implicit */int) var_6)) * (((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */int) var_5)) & (((/* implicit */int) (_Bool)1)))))) * (((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) min((var_3), (var_7)))))) : (((((/* implicit */int) min(((unsigned char)5), (var_6)))) ^ (((/* implicit */int) var_1))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))))), (((((((/* implicit */_Bool) (unsigned char)111)) || ((_Bool)1))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))));
}
