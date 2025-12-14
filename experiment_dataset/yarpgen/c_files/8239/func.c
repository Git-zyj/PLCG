/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8239
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_11 ^= ((/* implicit */unsigned char) arr_4 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) arr_0 [i_0] [i_2])))));
                                var_12 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 9006099743113216LL)) ? (((/* implicit */int) arr_11 [i_0] [10ULL] [10ULL] [i_1] [i_2] [i_3] [i_4])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                                var_13 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_2] [i_3] [i_4]);
                                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((var_0) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [i_1] [i_2] [i_4])) < (((/* implicit */int) var_0))))) : ((~(((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4])))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((var_15), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6728965859483087520LL)) ? (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_6))))) : (((1073725440) - (((/* implicit */int) var_6)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)62))) == (9223372036854775807LL)))) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) > (-6728965859483087520LL))))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)4))))) : (((/* implicit */int) (_Bool)1)))))));
        var_18 = ((/* implicit */unsigned char) ((-9006099743113216LL) - (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    }
}
