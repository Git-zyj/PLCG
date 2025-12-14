/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7867
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_4 [i_1] [i_0] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_12 [i_2] [i_1] [i_0] [i_3 + 2] [i_0 - 1])) : (((/* implicit */int) var_12))))))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_10 [i_0] [i_0] [i_2] [i_1] [21] [i_2] [i_0 - 1])))))));
                                var_14 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((/* implicit */int) (_Bool)0))));
                                var_15 ^= ((/* implicit */unsigned char) min((((unsigned int) (~(arr_1 [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((unsigned short) arr_0 [i_0] [(unsigned short)18]))))))));
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((long long int) var_0)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_1] [i_0] [i_5] [i_1])) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_5]))) <= (var_4))))))) - ((-(var_4)))))));
                                var_19 = ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)13)), (((arr_15 [i_0 - 1] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-115)))))));
                                var_20 -= ((/* implicit */signed char) max((((long long int) ((short) arr_16 [12LL] [i_1]))), (((((/* implicit */_Bool) (-(var_4)))) ? (arr_10 [i_6] [i_5] [i_5] [i_2] [i_5] [i_5] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 529959440)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) arr_0 [20LL] [i_5])))))))));
                                arr_18 [i_0] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) arr_6 [i_5] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (!(arr_3 [i_0] [i_0] [(_Bool)0]))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_8);
}
