/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88708
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */int) (unsigned char)8)))) == (((/* implicit */int) (short)2047))))) >> (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (!(((/* implicit */_Bool) 3492684051662740654LL))))))))))));
    var_16 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [9LL] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (max((3664709514439001595ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)60))))) ? (1732608367) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(unsigned short)3]))))))))));
                arr_7 [i_1] [i_0] = ((/* implicit */short) (!(var_4)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            {
                var_17 += (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)195))))))));
                arr_14 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (signed char)-20)))), (((/* implicit */int) arr_11 [i_2] [i_2] [i_2]))))) ? (((/* implicit */int) arr_13 [i_2] [i_2] [14U])) : (((/* implicit */int) (short)-20312))));
                var_18 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(arr_11 [i_3] [i_2] [i_3]))))) == (((unsigned int) (unsigned char)60)));
                var_19 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 6ULL)) ? (12101975790829771119ULL) : (((/* implicit */unsigned long long int) 4800581239147199036LL))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) (short)-8478)) ? (((/* implicit */int) (short)-10102)) : (var_9))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (var_1)))) ? (((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((14446603482625582591ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))))))))));
}
