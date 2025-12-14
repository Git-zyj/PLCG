/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57606
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
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) -4569954140256340654LL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65529))))), ((-(arr_1 [i_0]))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) var_11);
                            var_14 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) <= (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])));
                        }
                    } 
                } 
                arr_9 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)25601))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (((/* implicit */int) arr_10 [i_4] [i_4])) : (((/* implicit */int) (unsigned char)30))))), (min((((/* implicit */long long int) var_3)), (((long long int) 17185160960412976384ULL))))));
                var_16 -= ((/* implicit */unsigned short) (-((((-(((/* implicit */int) arr_10 [i_4] [i_5])))) / (((/* implicit */int) var_0))))));
            }
        } 
    } 
}
