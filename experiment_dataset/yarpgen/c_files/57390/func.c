/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57390
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
    var_16 = (((((!(((/* implicit */_Bool) 11129279682392029LL)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (7849373639930734990LL)))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) var_11)), ((unsigned short)40298)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((15870804U) >> (((11129279682392029LL) - (11129279682392005LL)))))) ? (((/* implicit */int) arr_4 [i_1] [i_0] [i_0])) : (((((/* implicit */_Bool) -11129279682392030LL)) ? (((/* implicit */int) arr_4 [7ULL] [7ULL] [i_1])) : (((/* implicit */int) (unsigned short)43629)))))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */short) ((unsigned char) -186983906))), (((short) 11129279682392029LL)))));
                var_18 ^= ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) -11129279682392027LL))))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((((((/* implicit */_Bool) (signed char)32)) ? ((~(((/* implicit */int) (signed char)-33)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)30806)) <= (((/* implicit */int) (signed char)53))))))), (((/* implicit */int) (signed char)6)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)26))))) * (((((/* implicit */unsigned long long int) var_0)) * (8860305847511704942ULL)))))));
    var_21 = ((/* implicit */unsigned int) (+(8860305847511704952ULL)));
}
