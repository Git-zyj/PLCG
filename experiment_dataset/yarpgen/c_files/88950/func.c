/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88950
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
    var_13 = 1073741823ULL;
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) 14862752681446498666ULL))));
    var_15 &= ((/* implicit */unsigned int) ((var_7) >> (((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_7)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-8889))) - (0U))));
                    var_17 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (short)-18094)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8889))) : (((((/* implicit */_Bool) (short)-16584)) ? (3583991392263052963ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6)))))))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_1]) + (-1940969154)))) ? (((unsigned long long int) 0U)) : (((/* implicit */unsigned long long int) min((arr_2 [i_2] [i_0]), (((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 1; i_3 < 8; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3887796121625195925ULL)) ? (-1629048174) : (var_3)))) ? ((+(arr_9 [(signed char)6] [(signed char)6]))) : (((/* implicit */unsigned int) (-(-613908827)))))), ((~(32767U))))))));
                arr_12 [i_3] [8] = ((/* implicit */unsigned char) 633999544);
                var_20 += ((/* implicit */unsigned long long int) min((3490520429723196110LL), (((((/* implicit */long long int) (~(((/* implicit */int) (signed char)83))))) ^ (-1LL)))));
                var_21 = (+((+(((/* implicit */int) (signed char)15)))));
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */int) (short)20411)) + (((/* implicit */int) (short)-8889)))))));
                    var_23 = ((/* implicit */long long int) ((int) var_10));
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)38122)) ? (arr_2 [i_4] [i_4]) : (((/* implicit */int) var_4))))) % (((((/* implicit */_Bool) var_10)) ? (3887796121625195925ULL) : (((/* implicit */unsigned long long int) 1629048157))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) -1858271966)) : (var_0))) == (((/* implicit */unsigned int) -1360107896)))))) : (((8259271693111238682LL) >> (((5158576268131921933LL) - (5158576268131921931LL))))))))));
                }
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    arr_17 [i_3] [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (0)))) ? (arr_2 [i_3 + 1] [i_3 - 1]) : (((arr_1 [0LL]) % (((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) arr_10 [i_6] [i_4] [i_3 + 2])) : (min((arr_14 [i_3] [i_6] [i_6]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)685)))))))));
                    arr_18 [i_3] [i_6] [4] [i_3] = (signed char)-62;
                }
            }
        } 
    } 
}
