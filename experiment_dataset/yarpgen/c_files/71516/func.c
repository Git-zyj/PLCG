/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71516
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) min((arr_3 [1] [i_0] [i_1]), (arr_3 [i_0] [i_1] [(signed char)10])));
                var_17 += ((/* implicit */signed char) ((((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) * (23ULL)))) >> (((/* implicit */int) (!((_Bool)1))))));
                arr_5 [i_1] = ((/* implicit */signed char) ((short) ((short) (signed char)(-127 - 1))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_14);
    /* LoopNest 2 */
    for (short i_2 = 4; i_2 < 10; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            {
                var_19 = ((((/* implicit */int) var_0)) == (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) == (18446744073709551592ULL))))));
                var_20 = ((/* implicit */signed char) min((var_20), (((signed char) ((short) (~(arr_8 [(signed char)2])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) 5756386549233204919LL);
    var_22 = ((/* implicit */signed char) var_14);
}
