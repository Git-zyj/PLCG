/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55858
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
    var_18 = ((/* implicit */short) (~(((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_15 [i_1] [i_3] [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] [i_1] |= ((/* implicit */int) (_Bool)0);
                                var_19 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_1] [i_2 - 2])) && (((/* implicit */_Bool) max((3U), (min((((/* implicit */unsigned int) (signed char)3)), (4294967272U))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) ((long long int) min((((/* implicit */long long int) 50U)), (-6225736992929369274LL))));
                }
            } 
        } 
    } 
}
