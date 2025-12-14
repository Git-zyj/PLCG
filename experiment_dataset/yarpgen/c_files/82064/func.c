/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82064
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
    var_18 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) (!(((/* implicit */_Bool) (unsigned char)157))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                            {
                                var_19 -= ((/* implicit */long long int) var_6);
                                var_20 -= ((/* implicit */unsigned short) var_9);
                            }
                            /* vectorizable */
                            for (short i_5 = 1; i_5 < 15; i_5 += 2) 
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 - 1]);
                                var_21 = ((/* implicit */short) 497751981U);
                                var_22 = ((/* implicit */unsigned int) (unsigned char)99);
                                var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)5633)) >> (((497751981U) - (497751971U)))))) ? (((((/* implicit */int) (unsigned char)229)) + (((/* implicit */int) var_14)))) : (((/* implicit */int) (unsigned char)129))));
                            }
                            /* LoopSeq 1 */
                            for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                            {
                                var_24 = max((((/* implicit */unsigned int) var_0)), (max((497752003U), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_11 [(unsigned char)14] [(unsigned char)13])), ((unsigned char)121)))))));
                                arr_20 [i_0] [i_6] = ((/* implicit */signed char) arr_3 [(_Bool)1] [i_1] [i_0]);
                            }
                            arr_21 [i_3] [i_0] = ((/* implicit */long long int) var_17);
                            var_25 = ((/* implicit */unsigned long long int) var_2);
                            var_26 = ((/* implicit */unsigned char) 134216704);
                        }
                    } 
                } 
                var_27 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_17))) | (((((/* implicit */long long int) ((/* implicit */int) var_12))) / (max((((/* implicit */long long int) (unsigned char)98)), (7333429050814254590LL)))))));
                var_28 -= ((/* implicit */unsigned short) var_6);
            }
        } 
    } 
}
