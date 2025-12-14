/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64127
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
    var_10 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0]))) : (((unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((long long int) -2791180749629275536LL)))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            arr_12 [i_1] [i_2] [18ULL] [i_1] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) arr_6 [i_0 + 1])), (2791180749629275535LL))), (((((/* implicit */_Bool) min((var_8), (((/* implicit */short) (unsigned char)255))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)126)))) : (max((((/* implicit */long long int) (signed char)124)), (-2791180749629275536LL)))))));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((short) min((((/* implicit */long long int) (_Bool)1)), (-8405563297395141799LL)))))));
                                arr_16 [i_4] [i_4] [i_1] [i_1] [i_1] [(signed char)8] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [10ULL] [16LL] [i_1] [16LL])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)96))))))))));
                                arr_17 [(signed char)20] [i_2] [(signed char)13] [i_1] [i_2] = (signed char)-110;
                                var_12 = ((/* implicit */long long int) max((var_12), (max((((/* implicit */long long int) (_Bool)1)), (min((((/* implicit */long long int) (_Bool)1)), (min((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0 + 1] [(signed char)6] [i_0] [i_0 + 1])), (-6149092913119249015LL)))))))));
                            }
                            arr_18 [i_0 + 1] [i_1] [i_1] [i_3] = min((((/* implicit */long long int) arr_3 [i_0 + 1] [i_1] [i_2])), (-2791180749629275513LL));
                            var_13 = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_1)))));
                            var_14 -= ((/* implicit */short) ((unsigned char) (+(max((-2791180749629275517LL), (((/* implicit */long long int) (_Bool)1)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 *= ((/* implicit */unsigned char) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        arr_23 [i_5] = ((((/* implicit */_Bool) 2791180749629275517LL)) ? (9223372036854775800LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))));
        var_16 = ((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) (short)24993)))));
        arr_24 [(unsigned char)23] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_5])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_19 [i_5]))));
    }
}
