/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79809
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
    var_11 ^= ((/* implicit */unsigned int) 1005557099);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */long long int) -1524952445);
            var_13 = ((/* implicit */int) min((((unsigned char) var_1)), (((/* implicit */unsigned char) ((1169750147) != (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_7))))))))));
        }
        var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)0)), (var_4)));
    }
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_5 [i_2] [i_2]), (((/* implicit */long long int) 2147483647)))))));
        var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_0 [i_2] [i_2])))) ? (((var_3) & (((/* implicit */unsigned long long int) arr_0 [i_2] [i_2])))) : (((/* implicit */unsigned long long int) (-(769722302U))))));
        var_17 = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_7 [i_2] [i_2]))))));
        /* LoopSeq 3 */
        for (unsigned char i_3 = 3; i_3 < 16; i_3 += 2) 
        {
            var_18 = ((((/* implicit */_Bool) arr_3 [i_3 + 4] [i_3 - 2] [i_3 - 1])) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (signed char)-77)));
            var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) arr_5 [i_3 - 1] [i_3 - 1])))));
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            var_20 *= (signed char)(-127 - 1);
            var_21 -= ((/* implicit */signed char) 1169750147);
        }
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) ((int) ((((((/* implicit */long long int) arr_6 [(unsigned char)13])) & (arr_16 [i_2] [i_2] [12]))) * (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)0), ((_Bool)0))))))));
            arr_18 [(_Bool)1] = ((/* implicit */unsigned int) arr_5 [i_2] [i_2]);
            arr_19 [i_2] [17LL] = ((/* implicit */int) min((arr_4 [(_Bool)1] [(_Bool)1]), (((/* implicit */unsigned char) (!(((var_3) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(short)3] [(short)3] [(short)3]))))))))));
        }
    }
    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))));
    var_24 = (+(((/* implicit */int) ((short) var_9))));
}
