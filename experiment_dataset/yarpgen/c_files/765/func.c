/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/765
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
    var_10 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((17444732616515400560ULL) == (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 - 2] [i_0 - 2])) ? (((((/* implicit */unsigned long long int) -579416995)) - (18446744073709551614ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                var_12 = ((/* implicit */short) (unsigned char)255);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_13 = ((((((((/* implicit */_Bool) min((4260107093U), (((/* implicit */unsigned int) (short)-7257))))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) + (2147483647))) >> ((((~((+(((/* implicit */int) (short)-7237)))))) - (7226))));
                            arr_11 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 2])) ? (max((((/* implicit */unsigned int) var_7)), (972678658U))) : (((arr_9 [i_0 - 1] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 8241147447216690432LL)) || (((/* implicit */_Bool) (~(((/* implicit */int) (short)7272)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((unsigned char) ((16899813216894916547ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
}
