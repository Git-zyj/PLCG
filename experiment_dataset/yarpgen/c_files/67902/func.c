/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67902
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_11 -= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((267911168U) * (4027056114U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_1) : (var_1))))))) * (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) == (var_6)))) / (((((/* implicit */int) var_2)) * (((/* implicit */int) var_5))))))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3920414656225284782ULL)) ? (4027056126U) : (4027056114U)))) ? (((((var_4) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_6)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_3))))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) var_7);
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 19; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            {
                arr_11 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_10)))) || (((/* implicit */_Bool) ((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))) & (((((/* implicit */int) var_9)) << (((((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) - (3853470168U)))))));
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_5)))) ^ (((/* implicit */int) var_3))))) : (var_1)));
                var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) * (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_10)))))) ? (((((((/* implicit */int) var_2)) * (((/* implicit */int) var_9)))) << (((((((((/* implicit */int) var_3)) + (2147483647))) << (((var_10) - (5005455434662349133LL))))) - (2147470831))))) : (((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))) + (2147483647))) << (((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))) - (2)))))));
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) (short)21657)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-9684)) || (((/* implicit */_Bool) (unsigned short)0)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) 267911169U)) / (var_10)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_5))))) : (((((/* implicit */long long int) ((/* implicit */int) var_2))) | (var_6))))) : (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_6))) * (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_1)) : (var_6))))))))));
            }
        } 
    } 
    var_16 = ((((var_4) >> (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))) + (12859))))) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (unsigned short)11))))) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_1)) : (var_10)))))));
    var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_1)) : (var_6)))) ? (((var_4) / (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((var_4) - (17606427953292375045ULL)))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_1))))))))));
}
