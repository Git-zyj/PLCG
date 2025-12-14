/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64177
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1 - 1]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((long long int) 769216233));
                            var_15 = ((/* implicit */signed char) (~(((((((/* implicit */int) arr_7 [i_1] [i_2])) + (2147483647))) << ((((((~(((/* implicit */int) (short)23660)))) + (23684))) - (23)))))));
                            var_16 = ((/* implicit */short) ((((/* implicit */unsigned int) var_0)) <= (((unsigned int) arr_1 [i_3] [i_1 - 1]))));
                            var_17 = ((/* implicit */unsigned long long int) max(((((~(arr_5 [i_0] [i_1]))) ^ (((/* implicit */int) (signed char)-127)))), (((((/* implicit */int) max(((signed char)-16), (var_6)))) * (((((/* implicit */_Bool) 133955584)) ? (((/* implicit */int) arr_2 [(unsigned short)7])) : (((/* implicit */int) arr_2 [i_3]))))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((max((((/* implicit */int) (signed char)-1)), (-1774396945))) / (((/* implicit */int) max(((signed char)-2), (var_1))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_9))) + (var_0)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_4))))))) : (((((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23173))))) - (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)24068)))))))));
}
