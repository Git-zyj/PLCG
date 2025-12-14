/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66030
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
    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)16073))));
    var_18 |= ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (-(var_9))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (var_4)))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)41)), ((short)(-32767 - 1))))) : (((((/* implicit */int) var_1)) << (((((/* implicit */int) var_3)) - (12)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) (!((!(((/* implicit */_Bool) 3642550887U)))))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */int) ((unsigned int) ((unsigned int) var_12)));
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((((/* implicit */short) (unsigned char)95)), ((short)-14441))))));
                    }
                } 
            } 
        }
        var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) & (min((((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) (_Bool)1))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1)))))));
        arr_16 [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
    }
    var_23 ^= ((/* implicit */unsigned short) var_9);
}
