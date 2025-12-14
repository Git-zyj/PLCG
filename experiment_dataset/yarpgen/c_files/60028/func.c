/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60028
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((var_12), (var_7)))) ? (((/* implicit */int) var_10)) : ((+(var_3)))))));
                var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_6)) / (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_1 + 1]))) : (((/* implicit */unsigned int) min((var_3), (((/* implicit */int) arr_0 [i_1]))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_7 [i_2 + 2])), (min((4122070758U), (((/* implicit */unsigned int) (signed char)-67)))))))));
                arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_1 [i_2 + 2])), (((min((-9223372036854775803LL), (-9223372036854775803LL))) + (((/* implicit */long long int) ((/* implicit */int) min((var_12), (arr_0 [i_2])))))))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned int i_5 = 3; i_5 < 8; i_5 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)127)))) | (arr_1 [i_4]))))));
                            arr_16 [i_2] [i_4] [i_5] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_2] [i_2] [i_5]))))), (min((((/* implicit */unsigned int) ((((((/* implicit */int) arr_8 [i_3] [i_4] [i_5])) + (2147483647))) >> (((-15) + (30)))))), (var_1)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_2);
    var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) > (var_4)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))))) << (((((long long int) min((var_0), (((/* implicit */long long int) var_2))))) + (23227LL)))));
}
