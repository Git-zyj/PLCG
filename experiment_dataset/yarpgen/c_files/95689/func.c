/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95689
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
    var_15 = ((/* implicit */unsigned int) var_1);
    var_16 = ((/* implicit */_Bool) (((!(var_12))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((7135471898277903556ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
    var_17 = ((/* implicit */int) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 + 1])) | (var_3)));
        var_18 |= ((/* implicit */_Bool) (unsigned short)29676);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_19 = ((/* implicit */signed char) var_11);
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        {
                            var_20 &= ((/* implicit */short) ((var_11) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7135471898277903560ULL)) ? (var_3) : (((/* implicit */int) (_Bool)1)))))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (~(arr_3 [2] [i_2] [i_2]))))));
                        }
                    } 
                } 
            } 
            var_22 -= ((/* implicit */signed char) ((_Bool) arr_6 [i_0 + 2]));
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~(((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) (unsigned char)89)))))))));
            arr_11 [i_0 + 1] [i_1] [i_0 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) ((arr_10 [i_0 + 2] [i_0] [i_0]) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) arr_6 [(_Bool)1])))))));
        }
        var_24 = ((/* implicit */int) arr_0 [i_0]);
    }
}
