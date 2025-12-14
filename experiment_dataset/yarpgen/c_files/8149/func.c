/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8149
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_14 -= ((/* implicit */unsigned int) (signed char)0);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_15 -= ((/* implicit */long long int) arr_2 [i_1 + 1]);
                            var_16 = ((/* implicit */unsigned char) (((((+(((/* implicit */int) arr_8 [i_1] [i_1] [i_1])))) >> (((((/* implicit */int) arr_5 [i_3] [i_2] [i_2])) - (55))))) >> (((((/* implicit */int) max(((short)-1), (((/* implicit */short) (unsigned char)99))))) - (76)))));
                            var_17 = ((/* implicit */signed char) arr_1 [i_3]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    for (signed char i_5 = 3; i_5 < 12; i_5 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) arr_12 [i_1] [14U] [i_5]);
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)99)) != (((/* implicit */int) (unsigned char)46))))) < ((+(((/* implicit */int) (unsigned char)156))))))) / (((/* implicit */int) arr_4 [i_0])))))));
                        }
                    } 
                } 
                var_20 -= ((/* implicit */_Bool) ((long long int) ((int) arr_16 [i_1] [i_0] [i_0] [i_1 + 1] [i_1] [(unsigned short)10])));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max((((/* implicit */unsigned short) var_8)), (max((var_13), (((/* implicit */unsigned short) ((unsigned char) (unsigned char)105))))))))));
    var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) || ((!(((/* implicit */_Bool) (unsigned char)85))))));
}
