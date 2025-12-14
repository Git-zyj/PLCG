/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99483
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) var_6));
        var_20 = (-((-(1694976702U))));
        var_21 = ((unsigned long long int) ((var_10) / (8154794095747140578ULL)));
    }
    for (long long int i_1 = 3; i_1 < 15; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) var_19);
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (-(((11977220354810577535ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [i_1 + 2]))))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_13))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) -1)) * (70368743915520LL))))));
            var_26 = ((/* implicit */_Bool) ((unsigned long long int) arr_15 [i_1 - 1] [i_6]));
        }
    }
    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (max((((((/* implicit */_Bool) (short)8191)) ? (var_9) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_5 [i_7] [i_7])))) ? (arr_11 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))))))));
        arr_21 [i_7] [i_7] = ((/* implicit */_Bool) max((1694976698U), (((/* implicit */unsigned int) (unsigned char)203))));
    }
    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_3))))))) ? (((/* implicit */int) ((((((/* implicit */unsigned long long int) -4901483019928792335LL)) | (var_10))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((10820398357359203466ULL), (((/* implicit */unsigned long long int) var_15))))) || (((/* implicit */_Bool) ((((-4901483019928792335LL) + (9223372036854775807LL))) >> (((var_16) - (2451265586U))))))))))))));
}
