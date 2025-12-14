/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60889
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [13ULL] [13ULL] = ((/* implicit */unsigned char) min((((/* implicit */int) var_16)), ((+(((/* implicit */int) arr_1 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1])) || (((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_3])))))));
                            var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_15) ? (arr_7 [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_2] [i_3])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) 5957167356692354954ULL)))))) : ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185))) : (3109239996U)))));
                        }
                    } 
                } 
                arr_10 [i_1] [i_0] = ((/* implicit */int) (-(((unsigned long long int) (~(2908810675U))))));
                var_19 = ((/* implicit */unsigned char) var_0);
            }
        } 
    } 
    var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((_Bool) 1115462421)))) ? (((/* implicit */int) (short)15710)) : (((/* implicit */int) (_Bool)1))));
}
