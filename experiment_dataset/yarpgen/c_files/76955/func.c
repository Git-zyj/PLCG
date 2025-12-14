/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76955
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_6 [0U] [i_1] [i_2]), (arr_6 [(short)10] [i_2] [i_2])))))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_7);
                    arr_10 [i_0] [i_1] [(unsigned char)6] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) (short)127)) / (((/* implicit */int) arr_0 [i_1] [i_1])))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_7 [i_0] [i_1])), ((unsigned char)79))))))), (max((((/* implicit */unsigned long long int) arr_7 [i_2] [i_0])), (((var_8) / (((/* implicit */unsigned long long int) 1013477448))))))));
                    var_12 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-88), (((/* implicit */signed char) var_0)))))) ^ (((((/* implicit */unsigned int) var_9)) * (arr_4 [i_0] [i_1] [i_2])))));
                    arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((_Bool) ((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) (~(((/* implicit */int) (short)-32741))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((((unsigned long long int) var_2)) >= (((/* implicit */unsigned long long int) max((var_3), (-483247370))))))) >= (((/* implicit */int) (_Bool)1))));
    var_15 = ((/* implicit */_Bool) (~((-(min((((/* implicit */unsigned long long int) var_5)), (13ULL)))))));
}
