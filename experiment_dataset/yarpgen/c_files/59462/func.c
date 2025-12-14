/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59462
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 1316189784519574617ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)173))) : (var_0)))) ? (((/* implicit */unsigned long long int) var_9)) : (var_0)));
    var_16 = ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) arr_2 [(unsigned char)14]);
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 19; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_17 = var_14;
                            var_18 = ((/* implicit */long long int) (-(var_1)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 2; i_5 < 17; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                arr_17 [i_6] [i_6] [i_0] [i_4] [(unsigned short)15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_4] [i_6])) ? ((-(((/* implicit */int) arr_6 [16LL] [i_4] [i_5] [i_6])))) : (var_7)));
                                arr_18 [i_4] [2] = ((/* implicit */unsigned int) arr_11 [i_4] [i_5 - 2] [i_4]);
                                var_19 = ((/* implicit */_Bool) var_1);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
