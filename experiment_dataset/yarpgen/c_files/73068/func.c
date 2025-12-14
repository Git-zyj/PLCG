/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73068
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
    var_11 = var_2;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 4; i_2 < 18; i_2 += 2) 
                {
                    var_12 += ((/* implicit */short) ((((/* implicit */_Bool) ((((_Bool) var_7)) ? (max((var_10), (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_2])))) : (var_10)))) ? ((-(((long long int) var_1)))) : (((/* implicit */long long int) (-((~(((/* implicit */int) (_Bool)1)))))))));
                    var_13 = ((/* implicit */signed char) min((min((arr_1 [i_2 - 1]), (((/* implicit */int) arr_0 [14] [i_0])))), (((/* implicit */int) ((_Bool) var_10)))));
                    var_14 &= (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))) ^ (((int) arr_6 [i_0]))))));
                }
                for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (~(max((2071627029), ((~(((/* implicit */int) var_5)))))))))));
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((min((((/* implicit */long long int) ((var_7) == (((/* implicit */long long int) ((/* implicit */int) var_0)))))), (((long long int) var_3)))) <= (var_10))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 19; i_5 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) ((int) min((((/* implicit */unsigned short) (_Bool)1)), (var_1))))), (min((max((var_10), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) var_3))))));
                                arr_17 [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)48), (((/* implicit */unsigned char) arr_11 [(unsigned short)16] [(unsigned short)16] [(unsigned short)19] [i_4] [i_5] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)99)) == (((/* implicit */int) (signed char)35))))) : (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */signed char) var_3)), (arr_15 [i_0] [i_1] [i_3] [i_4] [i_5])))) != (((/* implicit */int) var_9)))))));
                                arr_18 [i_0] [i_0] [i_3] [i_3] [i_4] [i_5] = ((/* implicit */signed char) ((long long int) var_2));
                            }
                        } 
                    } 
                    var_17 ^= min((((/* implicit */long long int) (((~(((/* implicit */int) var_5)))) <= (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) (unsigned char)228))))) ? (min((((/* implicit */long long int) var_1)), (var_10))) : (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))));
                    var_18 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) (~(var_7))))))), (((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) arr_8 [i_0] [i_3]))))));
                }
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) -1587342679426821875LL))));
                var_20 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [6LL] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [8] [i_1]))))) ? (((/* implicit */int) var_2)) : ((((_Bool)1) ? (((/* implicit */int) arr_8 [(unsigned short)14] [i_1])) : ((-(1648549479))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_3);
}
