/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67811
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
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) (((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))) - (((((/* implicit */int) var_8)) + (var_0)))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_10 |= ((/* implicit */unsigned short) ((unsigned int) 547237900U));
                                arr_13 [i_3] &= ((unsigned long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 1023ULL)))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (max((var_2), (((/* implicit */unsigned long long int) var_5))))))));
                arr_15 [i_0] [18ULL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_6)))), (((/* implicit */int) var_8))))) ? ((+(max((var_2), (((/* implicit */unsigned long long int) var_9)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >> (((min((((/* implicit */long long int) (signed char)-127)), (4933481925945117242LL))) + (140LL))))))));
                /* LoopNest 3 */
                for (unsigned int i_5 = 2; i_5 < 23; i_5 += 4) 
                {
                    for (unsigned char i_6 = 1; i_6 < 21; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) var_4))));
                                var_12 = ((/* implicit */unsigned short) var_4);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) (+((-(var_4)))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (var_6)))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (547237900U))) - (365057021U))))))))));
    var_14 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            {
                arr_28 [i_9] = ((/* implicit */unsigned short) (+(var_2)));
                arr_29 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 4226725514294563185ULL)) ? (var_0) : (((/* implicit */int) var_5)))) != (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_7)))))))) : (max(((+(547237900U))), (((/* implicit */unsigned int) (unsigned char)38))))));
            }
        } 
    } 
}
