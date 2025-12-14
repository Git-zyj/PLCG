/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75215
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (6318442751998952776LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)39384)) % (((/* implicit */int) var_8)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [(unsigned short)8] [i_3] [i_0] = var_11;
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_0] [i_3] [i_2] = ((/* implicit */unsigned int) arr_9 [i_0] [i_1] [7U] [i_1] [i_4 - 2]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (int i_6 = 1; i_6 < 12; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 12; i_7 += 2) 
                        {
                            {
                                var_18 = (-(((((/* implicit */int) max(((unsigned char)215), (((/* implicit */unsigned char) (signed char)-77))))) * (((/* implicit */int) var_1)))));
                                var_19 = ((/* implicit */signed char) ((arr_3 [i_1] [i_6] [i_1]) ^ (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_6)) : (4))) + (((/* implicit */int) arr_4 [(short)6] [(short)6])))))));
                                arr_23 [i_5] [i_5] |= ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)106))))) ? (((/* implicit */int) arr_7 [i_6 - 1] [i_7 + 1])) : ((+(((/* implicit */int) arr_19 [9U])))))) >= (((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                } 
                var_20 ^= ((unsigned char) var_3);
            }
        } 
    } 
}
