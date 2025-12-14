/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85331
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max((arr_2 [i_0]), (((/* implicit */int) var_9))))) + (((((/* implicit */_Bool) (unsigned char)0)) ? (var_13) : (4294967295U)))))) <= (((unsigned long long int) (!(((/* implicit */_Bool) var_2)))))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))) ? (arr_2 [i_0]) : ((+(((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0]) : (arr_0 [i_0]))) : (((int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_1 [14] [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            {
                arr_11 [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((arr_7 [i_3]), (((/* implicit */unsigned long long int) arr_8 [i_3] [i_3] [i_3]))))) && (((/* implicit */_Bool) arr_10 [i_2] [i_3])))) && ((!(((/* implicit */_Bool) arr_10 [i_2] [i_3]))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((max((arr_9 [i_3] [i_5 + 1]), (arr_13 [(unsigned char)14] [i_3] [i_4]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [i_2] [i_2])) <= (arr_12 [i_5] [i_4] [i_3])))))))) ? (((((/* implicit */_Bool) arr_9 [i_5 - 1] [i_3])) ? (arr_7 [i_5 - 1]) : (arr_7 [i_5 - 1]))) : (((/* implicit */unsigned long long int) var_13))));
                            var_16 = ((((/* implicit */_Bool) ((short) arr_5 [i_2] [i_2]))) ? (min((var_5), (((/* implicit */unsigned long long int) arr_13 [i_3] [i_3] [i_5 + 2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2] [i_3])) << (((arr_13 [i_3] [i_3] [i_4]) - (4099279339U)))))));
                        }
                    } 
                } 
                var_17 = arr_14 [(unsigned char)2] [i_3];
                var_18 = ((/* implicit */int) min((max((((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (arr_12 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) arr_14 [i_2] [i_3])))), (((/* implicit */unsigned long long int) ((int) arr_13 [i_3] [i_2] [i_3])))));
                arr_18 [i_2] [i_3] = ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) arr_14 [i_2] [i_3])) ? (arr_14 [14] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_3]))))))) << (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_6 [i_2] [(_Bool)1])) - (((/* implicit */int) arr_17 [i_2] [i_3] [i_3] [i_3]))))))));
            }
        } 
    } 
}
