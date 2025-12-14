/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84942
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
    var_10 = ((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) min((var_4), ((signed char)77))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31090)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (var_2) : ((-(((/* implicit */int) (unsigned char)74))))))));
    var_11 = ((/* implicit */short) var_3);
    var_12 = ((/* implicit */unsigned short) 2794760638021271084ULL);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) 8574315911687930554ULL);
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) min(((-(((((/* implicit */_Bool) var_7)) ? (6546236123796544412ULL) : (((/* implicit */unsigned long long int) arr_4 [8U])))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_6)), (min(((unsigned char)255), ((unsigned char)3))))))));
            }
        } 
    } 
    var_14 = ((((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)46867))))) ^ (((var_3) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)220))))))) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34937))));
}
