/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6797
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
    var_14 = ((/* implicit */short) 5641132994166996735LL);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) -1176861516);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_0]))));
                                arr_14 [i_0] [i_1] [i_3] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (-1176861517) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [i_0] = min(((+(((/* implicit */int) ((5641132994166996735LL) > (((/* implicit */long long int) ((/* implicit */int) (short)32701)))))))), ((~(((/* implicit */int) (unsigned short)65534)))));
            }
        } 
    } 
}
