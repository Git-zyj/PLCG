/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8135
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
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_13 += ((/* implicit */unsigned char) (-(((arr_1 [i_2]) | (arr_1 [i_2])))));
                            arr_13 [i_0] [(signed char)6] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned long long int) var_0));
                            var_14 = (+(((/* implicit */int) ((short) arr_7 [i_0]))));
                            var_15 = ((/* implicit */int) ((unsigned char) ((unsigned char) ((unsigned char) var_3))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) max((arr_6 [i_0] [i_1]), (((/* implicit */unsigned int) (unsigned short)11393))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)11393)) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) (unsigned char)97))))) : (min((-3475850077122779457LL), (((/* implicit */long long int) arr_3 [i_0 - 2] [i_1])))))) & ((+(((long long int) (unsigned short)255))))));
                var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned short)54142)), (6077033273632278250ULL)));
            }
        } 
    } 
    var_17 = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((-10LL) ^ (((/* implicit */long long int) 0)))))))));
    var_18 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) -1729224092)) * (0ULL))), (((((((/* implicit */_Bool) var_7)) ? (15370548348745582952ULL) : (((/* implicit */unsigned long long int) 1415996546698145714LL)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
    var_19 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((long long int) (unsigned char)31))))) ? ((~(((((/* implicit */long long int) ((/* implicit */int) var_10))) & (var_2))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
}
