/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82859
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_1) ^ (((/* implicit */long long int) ((((/* implicit */int) var_10)) % (var_8))))))) ? (((((var_9) || (((/* implicit */_Bool) (unsigned char)196)))) ? (((/* implicit */int) (unsigned char)55)) : ((-(((/* implicit */int) (unsigned char)59)))))) : (((/* implicit */int) var_0))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_2 [i_0 - 1])))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_16 = ((unsigned char) max((arr_2 [i_1]), (((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_4 + 1] [i_0]))));
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) 18446744073709551615ULL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_2])) ^ (((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 2] [i_2]))));
                                var_19 = ((/* implicit */_Bool) ((unsigned char) 4095ULL));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_20 *= ((/* implicit */unsigned int) ((unsigned char) ((unsigned short) arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 2] [i_1 - 1] [i_2] [i_0 - 1])));
                        var_21 = ((/* implicit */unsigned short) (unsigned char)123);
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 2; i_8 < 17; i_8 += 1) 
                        {
                            arr_21 [i_0] = ((/* implicit */signed char) arr_9 [i_8] [i_1 - 1] [i_0]);
                            var_22 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_8 - 1] [i_8] [i_8]), (arr_4 [i_8 + 1] [(_Bool)1] [i_8]))))) ^ (0ULL)));
                        }
                        for (int i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) (unsigned char)196)))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (var_9)));
                            var_25 = ((/* implicit */unsigned short) arr_19 [i_1]);
                        }
                        var_26 = ((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) (short)-4913)) : (((/* implicit */int) (unsigned char)123)));
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */int) var_7);
                        var_28 = ((/* implicit */_Bool) var_10);
                        var_29 += ((/* implicit */unsigned short) (-((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
    {
        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
        {
            {
                var_30 = ((/* implicit */int) arr_5 [i_11] [i_11]);
                var_31 = ((/* implicit */unsigned short) ((int) arr_31 [i_12] [i_12] [i_11]));
            }
        } 
    } 
}
