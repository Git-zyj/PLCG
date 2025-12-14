/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73909
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_7 [18LL] [i_1] &= ((/* implicit */unsigned long long int) min((3970730497433936261LL), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_0 [i_0]))))))));
                    arr_8 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))) : (max((var_13), (((/* implicit */long long int) arr_6 [i_2] [i_1])))))), (((/* implicit */long long int) arr_0 [i_2]))));
                    arr_9 [i_0] [(unsigned short)16] [i_2] = max((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_2])))) + (min((var_13), (((/* implicit */long long int) arr_5 [i_2] [i_1])))))), (((/* implicit */long long int) var_12)));
                    arr_10 [16LL] [i_1] [i_1] = ((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) arr_3 [10LL] [i_1] [i_2])), (arr_1 [i_0] [i_1])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) -3970730497433936262LL);
}
