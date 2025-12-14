/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69698
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
    var_20 |= (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_15) : (((/* implicit */int) var_12))))) ? ((~(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) -1597080793)) ? (var_1) : (((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */int) var_6)))) : (((((/* implicit */int) var_17)) & (((/* implicit */int) var_12)))))));
                arr_7 [i_0 + 1] [i_1] [i_1] = (-(((/* implicit */int) max((var_6), (((/* implicit */unsigned char) var_17))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_13 [i_2] [i_1] [i_2 - 1] [i_2 + 1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_11) << (((((((/* implicit */int) ((signed char) var_13))) + (112))) - (26)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))))));
                            var_22 = ((/* implicit */unsigned char) (~(min((var_14), (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_17) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_19)))))))) ? (((/* implicit */int) ((short) var_5))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_0)) : (var_15)))))));
}
