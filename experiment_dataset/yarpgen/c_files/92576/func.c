/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92576
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] = (~(((/* implicit */int) ((arr_3 [i_3] [i_1] [i_2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)31514))) == (var_0)))))))));
                            var_20 = var_13;
                            var_21 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_3] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54869))) : (((var_13) ^ (((/* implicit */unsigned long long int) 1026665240U)))))) | (((((/* implicit */_Bool) var_19)) ? (min((var_13), (((/* implicit */unsigned long long int) (signed char)116)))) : (((/* implicit */unsigned long long int) (~(var_1))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 20; i_4 += 3) 
                {
                    for (unsigned char i_5 = 3; i_5 < 19; i_5 += 1) 
                    {
                        {
                            arr_19 [i_5] [i_1] [i_1] [i_1] [i_0] |= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_11 [i_1 + 3] [i_1 + 3] [i_1] [i_1 - 1])) || (((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 + 3] [i_1 + 3] [i_1 + 1])))));
                            var_22 = ((/* implicit */unsigned int) (((~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_4] [i_4])) == (var_4)))))) <= (((/* implicit */int) ((arr_5 [i_4 + 1] [i_4] [i_0]) > (arr_3 [i_5] [i_4 - 1] [i_1]))))));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_4 [i_0]))));
                        }
                    } 
                } 
                var_24 &= ((/* implicit */signed char) ((((/* implicit */int) (!(arr_10 [i_0] [i_1 - 2] [i_1] [i_1])))) * (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-117))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_0 [i_0])))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) (((((+(((/* implicit */int) var_17)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_8)))))));
    var_26 = ((signed char) var_3);
}
