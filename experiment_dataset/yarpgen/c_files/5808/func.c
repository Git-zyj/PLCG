/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5808
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
    var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)0))));
    var_20 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_12))) == (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [6LL])) | (((/* implicit */int) (unsigned char)240))))))) ? ((+(((/* implicit */int) ((((/* implicit */int) (unsigned char)236)) == (((/* implicit */int) var_8))))))) : (min((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)6572)) : (((/* implicit */int) (unsigned char)252)))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned char)130))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((long long int) var_2)) : (((/* implicit */long long int) ((unsigned int) (unsigned char)229))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min((var_22), (((unsigned short) ((((/* implicit */_Bool) min((12325739622568569646ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_9))))) : (var_1))))));
}
