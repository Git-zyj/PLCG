/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90809
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
    var_17 = ((/* implicit */signed char) ((min(((-(((/* implicit */int) var_7)))), (((/* implicit */int) var_4)))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-12914)) : (((/* implicit */int) var_16))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_1] [(signed char)2]))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_19 *= ((/* implicit */unsigned char) arr_9 [i_0 + 1] [i_1] [i_2] [i_3]);
                            arr_12 [i_0 - 1] [i_1] [i_0 - 1] [i_2] [i_2] [i_3] = ((/* implicit */signed char) ((unsigned short) (unsigned short)54613));
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_8))))), (((unsigned long long int) (-(((/* implicit */int) var_1)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                            {
                                var_20 = ((/* implicit */unsigned char) ((_Bool) arr_1 [i_0 + 2]));
                                var_21 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0 + 3] [i_4])) ? (3283742035U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54620)))));
                                var_22 = ((/* implicit */_Bool) max((var_22), (((((/* implicit */int) arr_9 [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2])) <= ((~(((/* implicit */int) var_13))))))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((/* implicit */int) arr_4 [i_0 - 2] [i_4] [i_5])))))));
                            }
                            var_24 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_14 [i_0 - 2] [(_Bool)1] [i_0] [i_0])) ? (((/* implicit */int) arr_16 [i_5] [i_1] [i_1] [i_1] [i_0])) : (((/* implicit */int) var_0)))), (var_15)))) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) arr_19 [i_0 - 1] [i_0 - 1] [i_4] [i_5]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */int) ((unsigned char) ((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) * (((/* implicit */int) var_4))))));
}
