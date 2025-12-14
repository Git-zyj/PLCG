/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73407
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2265555142643611812ULL)))))))) != (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-1)) / (var_2)))), (((unsigned long long int) var_6))))));
    var_13 = ((/* implicit */int) max(((-(min((((/* implicit */unsigned int) var_2)), (1208744653U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) >> (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) (unsigned short)8436)) : (((/* implicit */int) (signed char)-10)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_14 ^= ((/* implicit */long long int) (_Bool)1);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_15 &= ((/* implicit */short) max(((~(arr_9 [i_0] [i_3] [i_3]))), (((/* implicit */long long int) arr_7 [i_3] [i_3] [i_3]))));
                            var_16 = max((((/* implicit */long long int) min((max((((/* implicit */int) (_Bool)1)), (1568942210))), (1568942210)))), ((~(max((arr_6 [i_3] [i_3]), (((/* implicit */long long int) var_0)))))));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) ((signed char) 1568942210))))))) <= ((-(1073741823U)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_4 = 4; i_4 < 16; i_4 += 4) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_13 [i_4 - 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)65535)), (764533553)))))))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 86124289U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64466))) : (((1698174308U) >> (((((/* implicit */int) (unsigned short)64226)) - (64196)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) > (arr_13 [i_4 - 2])))) : (max((((/* implicit */int) ((signed char) 1568942210))), ((+(((/* implicit */int) (signed char)-65))))))));
    }
    var_20 = ((/* implicit */unsigned short) (_Bool)0);
}
