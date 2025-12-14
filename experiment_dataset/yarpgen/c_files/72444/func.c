/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72444
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
    var_18 = var_4;
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) != (((/* implicit */int) (short)-11704))))), (var_15))))))));
    var_20 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] |= ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned short)15691)) + (((/* implicit */int) (_Bool)1))))));
                var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 2])) < (-824354349))))));
                arr_6 [i_0] [i_1] = (!((_Bool)1));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */short) min((max((((/* implicit */int) ((signed char) arr_0 [i_2]))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0])))))), (min((((/* implicit */int) ((((/* implicit */int) (unsigned short)30844)) <= (((/* implicit */int) var_11))))), ((((_Bool)1) ? (((/* implicit */int) arr_9 [6] [(unsigned char)6] [i_2])) : (((/* implicit */int) arr_8 [i_3] [i_2 + 1] [i_1] [i_0]))))))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [(_Bool)1] [(_Bool)1])), ((unsigned short)32205))))) >= (((var_5) + (291361091U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-1)))))))) : (((/* implicit */int) arr_4 [i_3 + 1] [i_1 + 4])))))));
                            arr_12 [i_0] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) max((arr_4 [i_0] [i_0]), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_8 [(short)3] [(short)3] [i_2] [i_3])))));
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 2; i_4 < 14; i_4 += 2) 
                            {
                                var_24 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) ((608610148) >= (((/* implicit */int) arr_10 [i_2] [i_3]))))) != (((/* implicit */int) ((((/* implicit */int) (unsigned short)3036)) > (((/* implicit */int) arr_0 [i_0]))))))))));
                                var_25 ^= (-(((/* implicit */int) (unsigned short)65532)));
                            }
                        }
                    } 
                } 
                arr_16 [i_1] = (((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_4)))))) / (((/* implicit */int) var_17)));
            }
        } 
    } 
}
