/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87008
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (-((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_0]))))) : (min((arr_0 [i_0]), (var_13)))));
        /* LoopSeq 1 */
        for (long long int i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned char) min((min(((-(((/* implicit */int) var_12)))), (((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_10)))))))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_13);
        }
        var_16 = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) arr_0 [i_0])), ((+(var_3)))))));
        var_17 = ((/* implicit */signed char) arr_5 [i_0] [i_0]);
    }
    /* LoopNest 3 */
    for (unsigned int i_2 = 3; i_2 < 9; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_18 = (!(((/* implicit */_Bool) (unsigned char)255)));
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_3] [i_4]))))) ? (((/* implicit */long long int) (-(2136131888U)))) : (arr_11 [i_3] [i_2])))) ? (max((((long long int) (_Bool)1)), (((/* implicit */long long int) ((unsigned char) var_4))))) : (max((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3] [i_3]))) : (arr_13 [i_2] [i_3] [i_4] [i_3]))))));
                }
            } 
        } 
    } 
}
