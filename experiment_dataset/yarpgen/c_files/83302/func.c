/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83302
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
    for (long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_14 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) -5364800283646989862LL)))) != (((((arr_1 [(unsigned char)9] [i_0]) << (((arr_0 [0]) - (573917131430430587LL))))) - (arr_1 [i_0] [i_0])))));
        var_15 |= ((/* implicit */int) -9022571259509253465LL);
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 3; i_1 < 8; i_1 += 3) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_16 = min((((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1]))) : (-3384226016512334471LL))), (((/* implicit */long long int) ((_Bool) arr_0 [10]))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (unsigned short)65526);
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_3]))) : (arr_1 [(signed char)9] [(signed char)9]))))) >= (max((((/* implicit */int) (signed char)32)), (918633470))))))));
                            var_18 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_12 [10U] [(unsigned short)10] [10U] [(signed char)6] [i_3] [i_3]))))), (((((/* implicit */_Bool) 2229758409791294980LL)) ? (var_12) : (((/* implicit */int) arr_5 [(unsigned short)2]))))))) : (((unsigned int) min((arr_0 [i_3]), (((/* implicit */long long int) (_Bool)1)))))));
                            var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_3]) - (arr_0 [i_3])))) ? (((/* implicit */int) max((arr_12 [i_1] [i_1] [i_1 - 3] [i_1 + 2] [(signed char)3] [i_1]), (arr_12 [i_1] [i_1] [i_1 - 2] [i_1 + 4] [i_1] [1LL])))) : (((((/* implicit */int) arr_12 [i_1] [i_1] [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 3])) << (((/* implicit */int) arr_12 [i_1] [i_1 + 2] [i_1 + 2] [i_1 + 4] [i_1 + 3] [(_Bool)1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
