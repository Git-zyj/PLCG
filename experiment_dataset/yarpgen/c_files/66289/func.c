/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66289
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
    var_13 = (((~(((/* implicit */int) (unsigned short)65535)))) % (var_4));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) -3535704753257120888LL)) ? (((/* implicit */int) ((unsigned short) (unsigned char)73))) : (((((/* implicit */int) ((-5944839369639466852LL) >= (((/* implicit */long long int) 4243474386U))))) * ((-(((/* implicit */int) (short)8190))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) (unsigned short)20681);
                                arr_16 [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 692008109U)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))) : (arr_3 [i_0])))));
                                var_16 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_11) : (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_7 [i_0] [i_1 - 1] [i_2] [i_2])))) || (((/* implicit */_Bool) var_0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 448317743)))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))) ? (var_4) : (((/* implicit */int) ((unsigned short) (+(var_12))))));
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_0))));
}
