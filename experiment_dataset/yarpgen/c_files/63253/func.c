/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63253
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] = ((unsigned long long int) (-(((/* implicit */int) ((signed char) var_6)))));
                var_17 = ((/* implicit */unsigned int) ((arr_2 [i_1] [i_0]) >= (((/* implicit */int) ((signed char) arr_2 [i_0] [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 2; i_2 < 18; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 2; i_4 < 20; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        {
                            arr_19 [i_5] [i_2] [(_Bool)1] [i_5] = ((/* implicit */short) ((int) (~(((/* implicit */int) arr_7 [i_5])))));
                            arr_20 [i_5] [i_5] [i_2] [i_5] = ((/* implicit */signed char) var_8);
                            arr_21 [i_3] [i_2] [i_3] = ((/* implicit */short) arr_10 [i_2 + 3] [i_3] [i_3]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3]))) >= (var_14))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)38))))) : (arr_10 [i_2] [i_3] [i_6])));
                            var_19 = ((/* implicit */signed char) var_13);
                            var_20 = ((/* implicit */_Bool) var_6);
                        }
                    } 
                } 
            }
        } 
    } 
}
