/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98398
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : ((+(var_6)))))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_4)), (arr_2 [i_0])))) : (min((var_0), (((/* implicit */long long int) (-2147483647 - 1)))))))))))));
                    arr_9 [6U] [i_0] [i_0] = ((/* implicit */long long int) arr_7 [i_2] [i_2] [i_2] [i_2]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 21; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (arr_2 [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_4] [i_3] [i_3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_3 - 2] [i_3 - 2])))))))) : (((/* implicit */int) var_2))));
                arr_14 [i_3] [i_4] [i_3] = ((/* implicit */int) arr_7 [i_3] [i_3] [i_3 - 1] [i_4]);
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_2 [(short)13]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) ? (min((var_6), (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) var_8))));
}
