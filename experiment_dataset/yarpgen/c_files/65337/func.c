/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65337
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
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 3] [i_0 + 1] [i_0 - 2])) ? ((+(((/* implicit */int) (short)-32759)))) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103))) : (1353594877U));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [(short)6] [(short)6] [i_3] [i_0] &= ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65534)) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12419))) : (2941372433U))) : (((/* implicit */unsigned int) -1846513128)))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1353594892U)) ? (((/* implicit */int) var_10)) : (((int) arr_3 [i_0] [i_2 - 1])))))));
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] = arr_4 [i_3] [i_2];
                            var_15 -= arr_7 [i_0 - 3] [i_1] [i_1] [i_0 - 3];
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_8);
    var_17 |= ((/* implicit */signed char) (+(max((min((var_9), (((/* implicit */unsigned int) var_13)))), (((((/* implicit */_Bool) 1353594883U)) ? (((/* implicit */unsigned int) var_12)) : (var_9)))))));
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        for (short i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            for (int i_6 = 3; i_6 < 13; i_6 += 4) 
            {
                {
                    var_18 *= ((/* implicit */short) (~((+(((/* implicit */int) (unsigned short)12))))));
                    arr_19 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) arr_14 [i_4]);
                    var_19 = ((/* implicit */short) max((max((var_9), (((/* implicit */unsigned int) var_13)))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)6349)))))));
                    arr_20 [i_6] [i_6] = ((/* implicit */unsigned char) var_10);
                }
            } 
        } 
    } 
}
