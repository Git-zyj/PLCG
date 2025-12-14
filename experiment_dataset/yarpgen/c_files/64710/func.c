/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64710
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_9 [i_3] [i_3] |= ((/* implicit */short) (unsigned short)0);
                            var_19 *= ((/* implicit */unsigned char) min((((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) * (var_9)))), (((/* implicit */unsigned long long int) 4294967285U))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((max((((var_10) ? (345953852U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0U))))))), (((/* implicit */unsigned int) (unsigned short)54866))));
                        }
                    } 
                } 
                arr_11 [i_0] = arr_7 [i_0];
                /* LoopSeq 2 */
                for (short i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
                {
                    var_20 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)8348))));
                    arr_14 [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
                    arr_15 [i_4] [i_0] = ((/* implicit */short) var_4);
                }
                for (short i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
                {
                    arr_20 [i_0] = arr_5 [i_5] [i_5] [i_5] [i_0];
                    arr_21 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_3 [i_0] [i_5])) % (((((/* implicit */_Bool) -673113647998379512LL)) ? (((/* implicit */int) (unsigned short)34368)) : (((/* implicit */int) (unsigned char)55))))))));
                    arr_22 [i_0] [i_0] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_8 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5] [i_0]))) : (arr_13 [i_0] [i_0]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_8 [i_5] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_3 [i_5] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_18 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_5]))))))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-724))) ^ (var_4))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_4))))) ? (((((/* implicit */_Bool) (~(-1)))) ? (max((((/* implicit */unsigned long long int) var_5)), (1165374093887114896ULL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_12)) + (2147483647))) << (((((/* implicit */int) var_14)) - (81)))))))) : (((/* implicit */unsigned long long int) var_4))));
}
