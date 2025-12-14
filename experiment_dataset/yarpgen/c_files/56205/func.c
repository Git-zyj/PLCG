/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56205
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
    var_18 += ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((int) arr_0 [i_0] [i_0]));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_8);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-(min((arr_2 [i_3] [i_1 - 1]), (((/* implicit */unsigned long long int) (~(var_3)))))))))));
                                arr_11 [i_4] [i_0] [i_2] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned char)33), (((/* implicit */unsigned char) arr_4 [i_4 + 3] [i_0] [i_0] [i_0]))))) - (((/* implicit */int) max(((unsigned char)33), ((unsigned char)136))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_16))) >= (((/* implicit */int) arr_5 [i_0] [i_1 - 1]))));
                        arr_16 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0] [i_2] [i_5])) % ((+(((/* implicit */int) (unsigned char)127))))));
                        arr_17 [i_0] [i_1] [i_2] [i_0] = ((((/* implicit */int) arr_5 [i_0] [i_1 - 1])) == ((-(((/* implicit */int) var_10)))));
                        arr_18 [i_0] [i_0] [i_1] [i_2] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_17)) : (var_15)));
                    }
                }
            }
        } 
    } 
    var_22 += ((unsigned short) (+(((((/* implicit */int) var_5)) / (((/* implicit */int) var_13))))));
    var_23 = min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_17) : (var_17)))), (min((var_9), (((/* implicit */unsigned long long int) var_7)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) < (((/* implicit */unsigned long long int) var_7)))))) : (((((/* implicit */_Bool) var_17)) ? (var_3) : (((/* implicit */unsigned int) var_16))))))));
}
