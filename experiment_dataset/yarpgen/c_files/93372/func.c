/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93372
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
    var_19 = var_16;
    var_20 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) 1586603606)) : (2400320870U))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [1ULL] [i_2] [i_0])) ? ((+(((/* implicit */int) arr_6 [2ULL] [i_1] [i_2])))) : (var_14)))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3] [9])) ? (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_0] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83)))));
                            var_22 = ((/* implicit */unsigned long long int) var_1);
                            /* LoopSeq 3 */
                            for (signed char i_4 = 3; i_4 < 16; i_4 += 3) 
                            {
                                arr_12 [i_4] [i_2] [i_4] = ((/* implicit */_Bool) var_5);
                                var_23 = ((/* implicit */unsigned long long int) var_7);
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)173))));
                                arr_15 [i_5] [i_5] [i_2] [i_5] [i_5] [(short)2] [i_3] = ((/* implicit */long long int) var_12);
                                var_25 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)82))))) ? (((/* implicit */int) ((_Bool) var_18))) : ((~(((/* implicit */int) var_3))))))));
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                            {
                                var_26 = ((/* implicit */unsigned char) (~(((var_18) ^ (2147483647)))));
                                var_27 = ((/* implicit */short) (unsigned char)173);
                                var_28 = ((/* implicit */short) var_5);
                                arr_19 [i_0] [(unsigned char)16] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_6] [i_3] [i_2] [i_1] [4LL] [i_0])) ^ (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                                arr_20 [i_3] [8] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)-28798)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                            }
                        }
                    } 
                } 
                var_29 = ((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_1] [i_0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
    {
        for (long long int i_8 = 1; i_8 < 8; i_8 += 4) 
        {
            {
                var_30 = ((/* implicit */unsigned short) arr_22 [(_Bool)1]);
                var_31 = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
                /* LoopSeq 1 */
                for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    var_32 = var_1;
                    arr_30 [i_9] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17))));
                    arr_31 [9] [i_8 + 1] [i_8 + 1] [9] = ((/* implicit */unsigned long long int) max(((~(((long long int) var_14)))), (((/* implicit */long long int) ((unsigned short) 0ULL)))));
                }
            }
        } 
    } 
}
