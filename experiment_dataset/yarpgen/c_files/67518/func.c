/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67518
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_1)))))) ? (((((/* implicit */_Bool) ((var_1) ^ (((/* implicit */unsigned long long int) var_0))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) / (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))))) : (var_4)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [(short)10] = ((/* implicit */_Bool) var_12);
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 193154855004632447LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)0))));
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_0);
                    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? ((-(var_1))) : (((/* implicit */unsigned long long int) (-(var_4)))))) != (((((/* implicit */_Bool) 2619294437U)) ? (1907701242890977047ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 2) 
    {
        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned char) ((int) var_5));
                            arr_20 [(_Bool)1] = ((/* implicit */unsigned char) (+((~(((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */long long int) var_0))))))));
                            arr_21 [10LL] &= ((/* implicit */_Bool) ((long long int) (unsigned char)255));
                            arr_22 [i_3] [i_4] [i_6] = ((/* implicit */int) var_12);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    arr_25 [i_3] [(short)14] [i_7] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)66))) >= (162844383104870769LL)));
                    var_18 *= ((/* implicit */unsigned int) var_6);
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((1675672859U) + (((/* implicit */unsigned int) 1356843391))))) ? (((((/* implicit */_Bool) (signed char)-6)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)190))))) : (((long long int) (_Bool)0)))) != (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-8748)) ? (((((/* implicit */_Bool) 2619294461U)) ? (1675672834U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? (1223127707) : (-1141789104)))))))));
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                {
                    arr_35 [i_8] [i_9] [i_10] = ((/* implicit */_Bool) (((~(var_3))) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13))))));
                    var_20 = ((/* implicit */unsigned char) var_4);
                    var_21 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_6)))) ? (((int) var_11)) : (((((/* implicit */int) (signed char)-6)) + (((/* implicit */int) (unsigned char)141)))))))));
                    var_22 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_1)) ? (var_9) : (((long long int) var_12))))));
                }
            } 
        } 
        var_23 -= ((/* implicit */unsigned char) var_3);
    }
    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((var_4) + (var_11)))) : (((((/* implicit */_Bool) var_0)) ? (var_9) : (var_9))))))));
}
