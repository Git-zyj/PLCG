/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81415
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */signed char) ((unsigned long long int) var_2));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) -2559678092839139034LL)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (min((((/* implicit */unsigned long long int) var_19)), (var_12))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 1]))))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_22 *= ((/* implicit */short) ((((((((((((/* implicit */_Bool) (short)(-32767 - 1))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)81))))) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_1)) - (40))))) << (((/* implicit */int) (((-(((/* implicit */int) var_19)))) == ((-(((/* implicit */int) (unsigned char)90)))))))));
                            arr_10 [18LL] [i_0] [i_1 + 3] [i_2] [(unsigned char)3] = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (arr_6 [i_0] [i_2] [(unsigned char)19] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_0)))) == (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (5LL)))));
                            var_24 = ((/* implicit */long long int) arr_2 [i_0]);
                            arr_11 [i_0] [i_0] [i_0] [i_3 - 2] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_0] [i_2] [i_1 + 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_13)) ? (8663913399637634143LL) : (((/* implicit */long long int) ((/* implicit */int) (short)30897)))))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) min((((((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) + (((/* implicit */int) arr_9 [i_1] [i_1] [(unsigned char)12])))), ((-(((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_1])))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) var_15);
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)65510)) / (((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0)))) ? (((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_14)))))) : (((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 16776704)))) ? (((/* implicit */unsigned long long int) (~(var_13)))) : (var_2)))));
    var_28 -= ((/* implicit */unsigned short) var_2);
}
