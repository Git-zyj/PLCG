/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69121
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */signed char) (-((+(min((arr_1 [3ULL]), (((/* implicit */unsigned long long int) (unsigned short)57536))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) var_4))));
                            arr_10 [i_0] [i_2] [i_3] [(unsigned short)5] [(short)3] = ((unsigned long long int) ((unsigned int) var_5));
                            var_12 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)57540))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) max(((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) var_4))));
    var_14 = ((/* implicit */long long int) var_6);
}
