/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57284
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
    var_18 &= ((/* implicit */unsigned int) var_4);
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? ((+(((((/* implicit */_Bool) 4294967263U)) ? (-6002434695756533577LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-34))))))) : (((/* implicit */long long int) var_5))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_15)) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11276)))))) ? (((/* implicit */unsigned long long int) var_13)) : (((((/* implicit */_Bool) (unsigned short)13)) ? (((/* implicit */unsigned long long int) -957355353)) : (6ULL)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_6 [i_0] [22ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10115))) : (1456447239263823699LL))), (((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), (arr_1 [i_0]))))))) : (((unsigned long long int) (short)-12823))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    arr_9 [12U] [i_2] [i_2] = ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) -7558289296816689257LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))) : (var_4))))) ? (((((/* implicit */_Bool) (+(-2081505804)))) ? ((+(2254155224339652673ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [11ULL] [3U] [i_1] [7ULL]))) : (3411121551U)))))) : (min((17246941824304586030ULL), (11774635232630988881ULL))));
                    arr_10 [i_2] [i_1] [i_0] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))));
                }
                for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 19; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 1) 
                        {
                            {
                                arr_18 [16LL] [i_5] [i_3] [0ULL] = ((/* implicit */int) arr_1 [i_3]);
                                arr_19 [i_5] [i_5] [i_0] [i_0] [(unsigned char)10] [i_0] &= ((/* implicit */int) ((unsigned long long int) (unsigned short)19584));
                            }
                        } 
                    } 
                    arr_20 [i_3] [9ULL] = ((/* implicit */unsigned short) arr_16 [i_3] [8LL] [i_1] [i_0] [7ULL]);
                    var_21 |= ((/* implicit */unsigned int) min((((((3248213214218504204ULL) != (8892566399990257846ULL))) ? (((/* implicit */unsigned long long int) max((4294967290U), (1U)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 1233323307U)) : (1453487398767349903ULL))))), (((/* implicit */unsigned long long int) arr_12 [i_0]))));
                }
            }
        } 
    } 
}
