/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85110
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_10 [i_3] [i_3] [i_2] [i_1] [(unsigned char)10] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)111))));
                            var_10 &= ((signed char) (!(arr_0 [i_0 - 2])));
                            var_11 = ((/* implicit */unsigned char) ((unsigned int) (+(((/* implicit */int) var_0)))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_3 [i_0] [i_0])))))))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) ((unsigned int) (-(arr_1 [i_4]))));
                            var_14 ^= ((/* implicit */unsigned short) (-((((!(var_5))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((_Bool) var_6)))))));
                            arr_15 [i_1] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) ((unsigned long long int) var_4));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 += ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (var_1)));
    var_16 = ((/* implicit */_Bool) ((((var_9) >= (((/* implicit */int) ((var_9) != (var_8)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)99)) : (var_9)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) ? ((-(((/* implicit */int) var_0)))) : ((+(((/* implicit */int) (unsigned char)148))))))));
    var_17 ^= ((/* implicit */unsigned short) ((max((((/* implicit */long long int) min((var_3), (var_3)))), ((~(-4581437785519757641LL))))) ^ (((/* implicit */long long int) ((var_8) + (((/* implicit */int) max((var_3), (((/* implicit */short) (unsigned char)143))))))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (var_9) : (((/* implicit */int) (unsigned char)146))));
}
