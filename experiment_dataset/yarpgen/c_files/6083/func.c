/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6083
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */long long int) ((signed char) ((signed char) (-(-4962849387087204905LL)))));
                        var_16 = ((/* implicit */unsigned int) arr_0 [i_3] [i_1]);
                        var_17 *= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0] [i_2]))))) * (min((((/* implicit */unsigned long long int) 1855951022509975211LL)), (6272743791980974159ULL))))) < (((/* implicit */unsigned long long int) ((arr_8 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 2] [i_1]))) : ((+(var_2))))))));
                        var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) min((arr_9 [i_1]), (((/* implicit */unsigned long long int) arr_0 [(unsigned char)14] [i_1]))))) ? (min((8641588637003768765LL), (((/* implicit */long long int) 3670016U)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 0)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1415937968U)))))));
                    }
                    var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(1415937968U)))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_1 - 1])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_14);
    var_21 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) / (((/* implicit */int) (short)28081))));
}
