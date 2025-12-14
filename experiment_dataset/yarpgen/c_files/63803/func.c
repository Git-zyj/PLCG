/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63803
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
    var_19 = min(((unsigned short)8087), (((/* implicit */unsigned short) (unsigned char)63)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17534)) ? (((/* implicit */int) arr_2 [i_1 + 2] [i_1 - 2])) : (((/* implicit */int) arr_2 [i_1 - 1] [i_1]))))) ? (((/* implicit */int) arr_5 [i_1 - 1] [11LL] [i_1 - 2])) : ((+(((/* implicit */int) arr_2 [i_1 - 1] [i_1]))))));
                arr_8 [i_0] [i_0] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (unsigned char)53)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 20; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (+((+(((long long int) 3331654339U))))));
                var_21 = ((/* implicit */signed char) ((unsigned char) ((unsigned short) (~(arr_1 [(unsigned char)6])))));
            }
        } 
    } 
}
