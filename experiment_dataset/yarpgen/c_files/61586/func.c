/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61586
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
    var_16 -= ((/* implicit */short) -161467635);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = (short)10756;
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)10770)) ? (((((/* implicit */int) (short)19720)) ^ (((/* implicit */int) (short)-10756)))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            arr_14 [3] [i_4] [i_1] [i_2] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_3] [i_4])) ? (arr_8 [i_0] [i_1] [i_4] [i_3]) : (arr_8 [i_1] [i_1 + 1] [i_2] [i_1]));
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-16559)) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1]))) / (119791094U))))));
                        }
                        var_19 += var_5;
                    }
                    var_20 = ((/* implicit */long long int) arr_8 [i_1] [i_1] [i_2] [i_1]);
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (-(var_1))))));
                }
            }
        } 
    } 
    var_22 -= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (var_8)))) ? (min((var_1), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) var_12))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_5 = 3; i_5 < 12; i_5 += 2) 
    {
        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_3 [i_5] [(_Bool)1]))))) << (((((/* implicit */int) var_5)) + (111)))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (arr_8 [i_5 + 1] [i_5 + 3] [i_5] [i_5 - 1])));
        var_25 ^= ((/* implicit */unsigned int) arr_18 [i_5]);
    }
    var_26 &= ((/* implicit */_Bool) (unsigned short)61203);
}
