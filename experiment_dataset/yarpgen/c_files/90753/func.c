/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90753
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((short) (~(arr_1 [i_0])));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) -4539275197087256401LL))) ? (-5736480542526767303LL) : (((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)50))) : (4539275197087256401LL)))))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (short)-29683)) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) var_12)) < (((/* implicit */int) (short)29685))))), (((unsigned short) arr_4 [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */short) (+(838413148)));
                            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
                        }
                    } 
                } 
                arr_12 [i_0] = (-(((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_7 [i_0])))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)85)) : (arr_1 [i_0]))) : (arr_1 [i_1])));
            }
        } 
    } 
    var_23 = ((((((/* implicit */_Bool) (short)-29693)) && (((/* implicit */_Bool) var_17)))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (min((var_10), (((/* implicit */long long int) var_8)))));
}
