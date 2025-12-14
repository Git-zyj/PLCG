/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92112
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
    var_10 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned char)1))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)15))))) : (var_1))) : (((/* implicit */unsigned long long int) var_2))));
    var_11 = (unsigned char)18;
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_0))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [(signed char)3] [i_0] [i_0] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_8 [i_0] [i_0 + 1] [i_0] [i_1])), (2217951503U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : ((-(7ULL)))));
                    var_13 = ((/* implicit */_Bool) var_4);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 - 3] [4U] [i_0]))));
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)39)) ? (-1363867860) : (((/* implicit */int) arr_12 [i_0] [(_Bool)1] [i_0 - 1] [6ULL]))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned char) (~(6U)));
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) arr_8 [i_0 - 3] [(unsigned char)8] [(unsigned char)8] [i_0 - 3]))));
                        arr_17 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [(unsigned char)9] = ((/* implicit */int) arr_8 [(unsigned char)19] [16U] [i_0] [i_2]);
                    }
                    arr_18 [i_0] = ((/* implicit */unsigned char) var_6);
                }
            } 
        } 
    } 
}
