/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64109
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) + ((-(var_11)))));
    var_16 = (~(((long long int) var_8)));
    var_17 = ((/* implicit */signed char) (unsigned char)233);
    var_18 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((short) max((((long long int) (signed char)-76)), (((/* implicit */long long int) ((short) var_1))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-62)), (arr_13 [i_0] [i_3 + 1] [i_2] [i_3] [i_1])))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)91))));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) 2250955681495847756ULL)))))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 18; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            arr_21 [i_0] = ((/* implicit */unsigned long long int) ((long long int) arr_4 [i_5] [i_5] [i_5]));
                            var_21 = ((/* implicit */unsigned long long int) var_5);
                            var_22 = ((((/* implicit */_Bool) 2032LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)67))) : (17605688169094535452ULL));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3307158991865838158LL)) ? (16195788392213703859ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20576)))));
            }
        } 
    } 
}
