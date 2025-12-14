/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71868
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) arr_2 [i_0]);
                var_15 += ((/* implicit */short) max((((2915707464478879371ULL) % (var_9))), (((((/* implicit */unsigned long long int) (-(arr_2 [i_0])))) + (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212))) : (4754936722758811234ULL)))))));
            }
        } 
    } 
    var_16 -= ((unsigned short) (unsigned char)214);
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 14; i_2 += 4) 
    {
        for (signed char i_3 = 2; i_3 < 14; i_3 += 1) 
        {
            {
                arr_11 [i_3 - 2] [i_3] [i_2 - 1] = ((((/* implicit */_Bool) (-((+(-1LL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 2150649886U)) % (-5162693767162641456LL)))) ? (((/* implicit */int) ((unsigned short) 3LL))) : (((/* implicit */int) (short)-32048))))) : (min((arr_9 [i_2 + 1] [i_3 + 1] [i_3]), (var_5))));
                arr_12 [i_3] = ((/* implicit */short) (unsigned char)42);
                arr_13 [i_2] [i_3] = ((/* implicit */unsigned short) var_11);
            }
        } 
    } 
}
