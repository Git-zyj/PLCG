/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64115
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((((/* implicit */short) (signed char)75)), ((short)-7423)));
                arr_4 [i_1] = ((/* implicit */_Bool) ((long long int) 18092203666738370618ULL));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (long long int i_3 = 4; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_17 ^= ((/* implicit */int) var_4);
                                var_18 = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */int) (unsigned char)88)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) (unsigned char)171)))))));
                            }
                        } 
                    } 
                } 
                var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)147), (((/* implicit */unsigned char) (signed char)-87)))))) : (((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])) ^ (8646911284551352320ULL)))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)106)))) : (((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)241))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65531), (((/* implicit */unsigned short) var_13)))))) ^ (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_2)));
}
