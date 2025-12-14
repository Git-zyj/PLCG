/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67187
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0 - 1] [i_1] = ((/* implicit */short) ((((min((((/* implicit */long long int) var_17)), (-7193849801544087538LL))) <= (min((((/* implicit */long long int) var_7)), (7193849801544087568LL))))) ? (((arr_3 [i_1]) ? (2279912685210738143LL) : (var_12))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 7193849801544087561LL)) ? (4294967273U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
                arr_7 [i_1] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) -7193849801544087540LL)) ? (((/* implicit */int) min((((/* implicit */short) var_3)), ((short)32704)))) : ((-(((/* implicit */int) var_8)))))));
                var_18 = ((/* implicit */unsigned int) (unsigned char)108);
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) ((((((/* implicit */int) var_17)) + (2147483647))) >> (((var_14) - (549605914))))))) * (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_11 [(signed char)7] [i_2])), ((-(max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_15))))))));
                var_21 = arr_8 [i_2] [(short)18];
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) (-(((/* implicit */int) min(((unsigned short)65528), (((/* implicit */unsigned short) max(((unsigned char)155), (var_16)))))))));
}
