/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64890
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
    var_17 = ((/* implicit */unsigned short) ((int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_11)) : (var_14))), (((/* implicit */unsigned long long int) ((int) var_3))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [(_Bool)0] [i_1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_3] [i_4]))))) : (((/* implicit */int) var_6))))) % (min((((/* implicit */long long int) -1)), (min((((/* implicit */long long int) (_Bool)1)), (var_3)))))));
                                var_19 = arr_2 [i_4];
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((unsigned long long int) var_10)) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_0] [i_0] [1LL] [i_0] [i_0] [i_0] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (var_1) : (((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_0] [(unsigned short)0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))) : ((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_9 [i_1] [i_0] [i_1] [(signed char)17] [i_0])))))));
                var_21 = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_15))))))) + (2147483647))) << (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (arr_11 [i_0] [i_1])))));
                var_22 = ((/* implicit */int) var_16);
                var_23 = ((/* implicit */short) max((((long long int) ((((/* implicit */int) var_13)) | (((/* implicit */int) var_2))))), (var_15)));
            }
        } 
    } 
    var_24 += ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_8)) : (var_14)));
}
