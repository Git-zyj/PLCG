/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63571
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_4 [6] = ((/* implicit */short) (((~(max((-5818567550545360875LL), (((/* implicit */long long int) 2147483647)))))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0)))))))))));
        arr_5 [i_0] = ((/* implicit */long long int) (~((+((~(2147483647)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            arr_18 [i_1] [i_3] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))));
                            var_17 = ((/* implicit */long long int) (~(max((((/* implicit */int) (signed char)-70)), (2147483647)))));
                        }
                        for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            var_18 ^= max((((((-1LL) ^ (((/* implicit */long long int) (-2147483647 - 1))))) << ((((((~(2147483636))) - (-2147483596))) + (51))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) -2147483647))))));
                            arr_22 [i_0] [i_0] [(signed char)19] [i_1] [i_5] = max((((/* implicit */long long int) (~(((/* implicit */int) (short)0))))), (min(((~(7174585000061025916LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)0))))))));
                        }
                        var_19 = ((/* implicit */int) max((var_19), ((-((~(((/* implicit */int) min(((short)0), ((short)0))))))))));
                    }
                } 
            } 
        } 
        var_20 = (~(((/* implicit */int) max(((signed char)1), (((/* implicit */signed char) ((((/* implicit */int) (short)17410)) >= (-2147483647))))))));
    }
    var_21 += ((/* implicit */unsigned char) (~((-((-(65024)))))));
    var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (short)0))))))), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)126))))), ((~(7922062924162606649ULL)))))));
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (~((-((-(((/* implicit */int) (signed char)-119)))))))))));
}
