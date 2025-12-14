/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5888
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) ((unsigned long long int) min((((/* implicit */long long int) ((unsigned int) var_16))), (max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) arr_3 [i_0])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_0] = ((/* implicit */signed char) min(((-(-3995360412696053720LL))), (((/* implicit */long long int) ((arr_11 [i_0] [i_3 - 2] [i_3] [1ULL]) ? (((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_13 [(unsigned short)2]) : (((/* implicit */int) var_18)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
                            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((max(((+(-3995360412696053720LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)72)) <= (((/* implicit */int) (unsigned char)72))))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)183)))))));
                            var_20 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (-5208456982207773560LL)))) ? (min((((/* implicit */long long int) arr_3 [i_0])), (var_15))) : (((/* implicit */long long int) 3206342036U)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 2; i_4 < 19; i_4 += 1) 
    {
        for (unsigned char i_5 = 3; i_5 < 17; i_5 += 2) 
        {
            {
                var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) arr_16 [i_5])))));
                var_22 = ((/* implicit */unsigned long long int) arr_16 [i_4]);
            }
        } 
    } 
}
