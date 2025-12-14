/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97846
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
    var_16 = ((/* implicit */_Bool) (unsigned char)193);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) <= (arr_5 [i_0] [i_0]))))) <= (min((arr_5 [i_0] [i_0]), (((/* implicit */long long int) (unsigned short)4032))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) <= (var_15)))))));
                var_19 = ((/* implicit */_Bool) ((unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_13))) != (var_5))) ? (((/* implicit */int) ((unsigned short) (short)30651))) : ((+(((/* implicit */int) (signed char)117)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) (unsigned short)2)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (unsigned short)61505)))))))) % (var_15)));
}
