/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62866
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((12430932948103015831ULL), (min((12430932948103015854ULL), (((/* implicit */unsigned long long int) 2081605035U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (15137882221130410058ULL) : (6015811125606535785ULL)))))))) : (((unsigned long long int) var_11))));
    var_19 = ((/* implicit */unsigned short) var_5);
    var_20 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = var_3;
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */long long int) arr_2 [i_2] [(_Bool)1]);
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_13 [i_3] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))));
                        var_21 = ((/* implicit */unsigned int) max((var_21), ((+(arr_4 [i_0] [i_1])))));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)203)) * (((/* implicit */int) arr_1 [i_0])))))));
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_5))));
                        arr_14 [i_0] |= ((/* implicit */short) ((long long int) (+(((/* implicit */int) var_9)))));
                    }
                    for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        arr_17 [i_4] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((arr_6 [i_1] [i_4]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 129262258799702237ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_9 [i_4] [(unsigned char)5] [i_1])))))));
                    }
                }
            } 
        } 
    }
}
