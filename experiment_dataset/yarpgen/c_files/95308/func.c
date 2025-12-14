/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95308
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_19 += ((/* implicit */unsigned long long int) ((int) (unsigned char)255));
                var_20 -= ((/* implicit */short) min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)7)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(unsigned char)21])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_21 ^= ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248))) : (-3874419509404070661LL))), (((((/* implicit */long long int) arr_1 [i_0])) ^ (-3874419509404070643LL)))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)562), ((unsigned short)32232))))) / (max((3707750298U), (((/* implicit */unsigned int) (short)63))))));
                            var_23 = ((/* implicit */unsigned short) -721000682);
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) var_0);
}
