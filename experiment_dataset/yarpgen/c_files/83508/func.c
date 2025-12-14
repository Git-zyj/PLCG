/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83508
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
    var_10 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_8))))))) : (((/* implicit */int) ((unsigned short) (signed char)7)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */signed char) max(((unsigned char)248), (((/* implicit */unsigned char) (signed char)-72))));
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) -2LL)) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) (signed char)-9)))) != (((/* implicit */int) ((signed char) var_1))))) ? (min((-1425021424889566099LL), (arr_1 [i_2 - 1] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-3LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))))));
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_3 [i_0]);
                    arr_10 [(signed char)8] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_1 [i_1 - 2] [i_1 - 1]))) ? (((long long int) ((signed char) var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [(unsigned char)10] [i_2 - 1])) ? (((/* implicit */int) arr_7 [i_2 - 1] [(_Bool)1] [i_2 - 1])) : (((/* implicit */int) var_5)))))));
                }
            } 
        } 
    } 
}
