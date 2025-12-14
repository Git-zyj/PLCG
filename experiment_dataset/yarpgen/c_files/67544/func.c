/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67544
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
    var_11 = ((max((((/* implicit */int) ((short) var_5))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))) * (((/* implicit */int) ((unsigned short) 2305840810190438400LL))));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)31590))))))) | (((/* implicit */int) ((signed char) var_9)))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((arr_8 [i_0] [i_1]) / (arr_8 [i_0] [i_1]))) : (((/* implicit */long long int) (~((+(((/* implicit */int) (_Bool)1)))))))));
                            var_14 = max(((!(((/* implicit */_Bool) arr_8 [i_0] [i_0 - 2])))), (((_Bool) arr_2 [i_0] [i_0] [i_3])));
                            var_15 = arr_9 [i_2];
                            arr_12 [(_Bool)1] [i_0] = ((unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (var_10)))) ? (max((var_7), (((/* implicit */unsigned int) (short)9372)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-18)))))));
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) 2305840810190438400LL))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_4 [i_0])))))) ? (((unsigned long long int) (unsigned short)11)) : (((/* implicit */unsigned long long int) ((long long int) (~(4132951857U)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((unsigned char) var_3));
    var_19 *= (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3))))));
}
