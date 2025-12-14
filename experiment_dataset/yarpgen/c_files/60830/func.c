/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60830
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_13 = (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)98))) : (arr_1 [i_0]))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_2 - 1])))))));
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_1 [i_1])) ? (max((arr_3 [i_2 - 1]), (((/* implicit */unsigned long long int) (short)-13363)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)34498))))))))))));
                }
                for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    arr_10 [i_3] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) (unsigned short)31024)))), (((/* implicit */int) var_7))));
                    arr_11 [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) 11840980083985352623ULL);
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) max((((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)244)), ((unsigned short)31011)))), (min((2147483647LL), (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_3])))))))));
                }
                arr_12 [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)31024)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))) : (33554431ULL))) - (((/* implicit */unsigned long long int) 6926203212706217985LL))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) max(((unsigned char)178), ((unsigned char)171))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((long long int) (unsigned char)197)))))));
    var_17 = ((/* implicit */short) (unsigned char)98);
}
