/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76666
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
    var_12 = ((/* implicit */short) ((signed char) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (-977882298))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_0 [i_2 + 1])))) ? (min((arr_0 [i_2 + 1]), (arr_0 [i_2 + 1]))) : (((((/* implicit */_Bool) arr_0 [i_2 + 2])) ? (arr_0 [i_2 + 3]) : (arr_0 [i_2 + 2])))));
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (min((2147483648U), (((/* implicit */unsigned int) 977882298))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 3) 
    {
        for (unsigned int i_4 = 2; i_4 < 21; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 3; i_5 < 24; i_5 += 1) 
                {
                    for (unsigned short i_6 = 3; i_6 < 22; i_6 += 1) 
                    {
                        {
                            var_15 = (i_6 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((((~(arr_20 [i_6]))) + (2147483647))) >> ((((+(131230653317790863LL))) - (131230653317790844LL)))))) ? (arr_12 [i_3]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -677235333)) ? (8638845568476569290LL) : (((/* implicit */long long int) 677235333))))) ? (((/* implicit */unsigned long long int) (+(601200988078137862LL)))) : (((((/* implicit */_Bool) (signed char)89)) ? (var_3) : (((/* implicit */unsigned long long int) arr_9 [(unsigned short)7] [(unsigned short)7]))))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((((((~(arr_20 [i_6]))) - (2147483647))) + (2147483647))) >> ((((+(131230653317790863LL))) - (131230653317790844LL)))))) ? (arr_12 [i_3]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -677235333)) ? (8638845568476569290LL) : (((/* implicit */long long int) 677235333))))) ? (((/* implicit */unsigned long long int) (+(601200988078137862LL)))) : (((((/* implicit */_Bool) (signed char)89)) ? (var_3) : (((/* implicit */unsigned long long int) arr_9 [(unsigned short)7] [(unsigned short)7])))))))));
                            arr_22 [i_6] [i_4] [i_4 - 2] [i_4 + 4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned char)254))))))) == (var_10)));
                            var_16 = ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((677235332), (-677235319)))) ? (((/* implicit */int) (!(((_Bool) var_5))))) : (((/* implicit */int) (!(arr_11 [i_4 + 3]))))));
                            var_18 = min((((((/* implicit */int) (short)0)) << (((((arr_18 [i_6 - 3] [i_4 - 1] [i_3]) ? (677235328) : (((/* implicit */int) (_Bool)1)))) - (677235326))))), (((/* implicit */int) (unsigned short)7692)));
                        }
                    } 
                } 
                var_19 = (((!(((/* implicit */_Bool) arr_9 [i_4 - 2] [i_3 - 1])))) ? (((/* implicit */long long int) arr_20 [i_4])) : (((arr_9 [i_3 - 1] [i_4 + 1]) / (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))));
                var_20 = ((/* implicit */short) min((var_20), (((short) min((((/* implicit */long long int) ((arr_20 [i_4]) >> (0LL)))), (arr_19 [i_3 + 1] [i_4] [i_3 + 4] [i_3]))))));
                arr_23 [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 4952068506109535593LL)) ? (0LL) : (((/* implicit */long long int) 1365907651)))) == (((/* implicit */long long int) var_5)))))) == (var_5)));
                arr_24 [i_3] [i_3] [i_4 + 2] = ((/* implicit */unsigned short) max((((long long int) ((unsigned int) arr_10 [i_3]))), (((/* implicit */long long int) -677235326))));
            }
        } 
    } 
}
