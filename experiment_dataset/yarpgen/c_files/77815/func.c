/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77815
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_0] [i_0])))))))) ? (((/* implicit */int) arr_2 [i_1] [i_0] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) -55679034)))))));
                    arr_8 [i_2] [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((signed char) min((((((/* implicit */_Bool) -1331919902)) ? (((/* implicit */long long int) 622797585U)) : (-1307228296162671668LL))), ((~(var_13))))));
                    var_15 = ((/* implicit */short) (~(max((((/* implicit */long long int) (signed char)-110)), (((long long int) 1295265227U))))));
                    var_16 = ((/* implicit */int) var_9);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : ((-2147483647 - 1))))) - (1295265227U)))) ? (((/* implicit */int) ((unsigned short) var_12))) : (((/* implicit */int) ((unsigned short) var_9)))));
}
