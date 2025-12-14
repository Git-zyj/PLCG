/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60384
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
    var_16 ^= ((/* implicit */short) (~((+(8U)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (long long int i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [(signed char)5] [i_1] = ((/* implicit */long long int) var_1);
                            var_17 &= ((/* implicit */unsigned short) min((1950242130U), (((/* implicit */unsigned int) (unsigned short)18021))));
                            var_18 = ((unsigned short) ((short) arr_0 [i_0] [i_0 + 1]));
                            var_19 = ((/* implicit */signed char) max((var_19), (((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) (unsigned char)23)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 4; i_4 < 8; i_4 += 4) 
                {
                    for (unsigned short i_5 = 2; i_5 < 9; i_5 += 4) 
                    {
                        {
                            arr_17 [i_1] = ((/* implicit */_Bool) ((short) (unsigned char)233));
                            arr_18 [i_1] [i_1] [i_4] [i_5 + 1] = max((((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_0] [i_4 + 2] [i_5 + 1] [i_1] [i_4])) - (((/* implicit */int) arr_10 [i_0 + 1]))))), (((((/* implicit */_Bool) ((short) var_11))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47514))) : (1882578123U))));
                            var_20 = ((/* implicit */unsigned char) (~(1882578122U)));
                        }
                    } 
                } 
                var_21 &= ((/* implicit */short) max((((/* implicit */int) (unsigned short)47515)), ((~(((/* implicit */int) (unsigned short)61653))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_2))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_8 = 1; i_8 < 11; i_8 += 2) 
                {
                    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        {
                            arr_32 [i_6] [i_7] [i_6] [i_6] &= ((/* implicit */unsigned char) ((unsigned short) (unsigned short)3893));
                            arr_33 [i_6] [i_6] [i_8] [i_9] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_20 [i_6] [i_7]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) * (((/* implicit */int) arr_31 [i_6] [i_8 + 2]))))) : (4313669094252109070ULL)));
                        }
                    } 
                } 
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((unsigned char) ((unsigned char) var_14))))));
                /* LoopNest 3 */
                for (unsigned short i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_42 [i_11] [i_7] [i_10] [i_11] [i_11] [i_6] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_5)), ((unsigned char)0)))) : (((((/* implicit */_Bool) (unsigned short)16669)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_40 [11] [i_6] [i_11] [i_10] [i_11] [i_11]))))))));
                                arr_43 [i_6] [i_7] [i_11] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((unsigned char) -2147483635));
                                var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((max((var_10), (var_13))), (((/* implicit */unsigned short) ((short) arr_40 [i_6] [i_6] [i_11] [(short)10] [i_6] [i_12]))))))) - ((-(max((1882578113U), (((/* implicit */unsigned int) (_Bool)1))))))));
                            }
                        } 
                    } 
                } 
                arr_44 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_30 [i_6] [i_6] [i_6] [i_7] [i_7]))))) ? (((long long int) (unsigned short)3893)) : (((/* implicit */long long int) (~(((/* implicit */int) arr_30 [i_6] [i_6] [i_6] [i_6] [(unsigned char)8])))))));
            }
        } 
    } 
}
