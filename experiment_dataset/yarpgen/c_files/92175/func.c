/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92175
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
    var_10 = ((/* implicit */short) ((((((var_7) <= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114))) : (((((/* implicit */long long int) ((/* implicit */int) var_9))) & (5956443899036465580LL))))) / (((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((((/* implicit */int) var_2)) + (24287)))))) ? (((-2040300226891160957LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)111))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */short) ((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) min(((short)-4679), ((short)-13685)))) : (((/* implicit */int) ((arr_2 [10ULL]) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)2))))))))) % (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [(signed char)4]))))) ? (min((((/* implicit */unsigned int) -1998820749)), (arr_2 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)19), ((signed char)-24)))))))));
                var_12 *= ((((/* implicit */_Bool) -1281359097)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [5]))))) : (((/* implicit */int) ((((/* implicit */int) (short)5260)) <= (1281359097)))));
            }
        } 
    } 
}
