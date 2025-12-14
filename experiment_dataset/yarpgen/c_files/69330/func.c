/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69330
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
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-16384))))))))))));
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (short)16393))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_12)))))) ? (max((((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [6ULL]))) : (36028797018832896ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) == (((/* implicit */int) arr_1 [i_1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)-16380))))))))))));
                arr_5 [i_1] [i_1] [i_0] = min((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-16403))) & (4294967280U))))), (146561738U));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) (short)16403)) : (((/* implicit */int) (unsigned char)250)))))))))))));
                                var_21 = ((/* implicit */unsigned char) ((unsigned int) (short)19279));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 4) 
                    {
                        {
                            var_22 -= ((/* implicit */_Bool) var_9);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                            {
                                arr_19 [i_0] [i_0] [i_5] [i_1] [i_5] [i_7] [i_7] = ((/* implicit */long long int) arr_0 [9U]);
                                var_23 |= ((/* implicit */_Bool) ((arr_14 [i_0] [(_Bool)1] [i_7] [i_6 + 3]) / (arr_14 [i_0] [i_1] [i_6] [i_6])));
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((arr_18 [i_6 + 2]) || (((/* implicit */_Bool) arr_4 [i_7])))))));
                            }
                            var_25 = ((/* implicit */unsigned long long int) arr_14 [(signed char)11] [i_1] [i_1] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
