/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92012
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) var_8))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
                            {
                                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_3 [i_1] [i_1] [i_1]))) >> (((7927270305152523876ULL) - (7927270305152523862ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (min((min((6001498349729304908LL), (8028490277735659530LL))), (var_6)))));
                                var_14 ^= ((/* implicit */unsigned char) ((-8028490277735659536LL) / (((/* implicit */long long int) ((/* implicit */int) (short)6725)))));
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (~((((!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [(signed char)6])))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_8 [i_0] [i_1] [i_1] [i_3])), (arr_2 [i_1] [(signed char)10]))))) : (max((6987699978800618739LL), (var_6))))))))));
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) arr_2 [(unsigned short)5] [i_4]))));
                                arr_13 [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) var_3)), (((min((((/* implicit */int) var_4)), (965602140))) * ((+(((/* implicit */int) var_4))))))));
                            }
                            for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
                            {
                                var_17 = ((/* implicit */long long int) max((var_17), (var_6)));
                                arr_16 [(signed char)13] [i_3] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned short) 2523584859U))), (var_1)));
                            }
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_6 = 1; i_6 < 11; i_6 += 4) 
                            {
                                arr_20 [i_6] [i_0] [i_3] [i_1] [i_3] [3LL] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_19 [i_3] [i_3] [(unsigned char)2] [i_3]) ? (6001498349729304908LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                                var_18 = ((/* implicit */unsigned long long int) ((int) ((unsigned short) var_3)));
                            }
                        }
                    } 
                } 
                arr_21 [i_1] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) 1548416067))));
                var_19 ^= ((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_20 &= ((/* implicit */short) (!(((/* implicit */_Bool) (~(var_10))))));
}
