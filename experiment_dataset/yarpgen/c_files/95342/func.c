/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95342
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
    var_20 &= ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 2; i_2 < 8; i_2 += 4) 
                {
                    var_21 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)57)) : (((/* implicit */int) (signed char)57))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)57)) ? (2096640) : (((/* implicit */int) (unsigned char)90))))) ? (((/* implicit */int) (short)-20345)) : (((/* implicit */int) (_Bool)1))));
                }
                for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)66)) / (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned char)190))))));
                    arr_14 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)23566))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)190))) : (18446744073709551615ULL)));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) (short)7404)) : (((/* implicit */int) (unsigned char)79))))) ? (((/* implicit */int) (short)(-32767 - 1))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) (short)-1))))));
                    var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)87))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) (unsigned short)65535)))))) : (1006632960U));
                }
                for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    arr_19 [i_0] [i_1] [i_1] = ((/* implicit */short) (_Bool)1);
                    arr_20 [i_0] [i_1] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-58)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65516)) ? (((/* implicit */int) (short)27)) : ((-2147483647 - 1)))))));
                    var_26 ^= (unsigned short)1;
                }
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)15872)) ? (((-83084940) + (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (unsigned short)65001)) * (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_28 ^= ((/* implicit */unsigned short) var_1);
}
