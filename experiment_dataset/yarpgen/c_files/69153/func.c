/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69153
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
    var_10 = ((/* implicit */unsigned char) max((var_0), (((/* implicit */unsigned int) (~(var_9))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)118))));
                                var_11 = ((/* implicit */int) max((var_11), ((~(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)146))))) ? (((/* implicit */int) (_Bool)1)) : (1504296503)))))));
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((unsigned char) -1504296503))), (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (22)))) ? (max((((/* implicit */unsigned int) var_9)), (var_2))) : (max((((/* implicit */unsigned int) var_1)), (arr_0 [i_0] [i_0])))))));
                var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((var_4), (((/* implicit */signed char) arr_9 [i_0]))))), (((2214716215U) << (((/* implicit */int) (_Bool)1))))))) ? (((var_7) & (((/* implicit */unsigned int) (~(30)))))) : (((/* implicit */unsigned int) (((-(((/* implicit */int) var_5)))) * (max((((/* implicit */int) (_Bool)1)), (var_9))))))));
            }
        } 
    } 
    var_14 -= ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (2080251080U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? ((+(var_0))) : (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17316)))))))));
}
