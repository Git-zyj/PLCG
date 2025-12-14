/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85781
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
    var_17 = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) min((var_15), (((/* implicit */int) var_16))))))), (var_3)));
    var_18 = ((/* implicit */unsigned int) var_12);
    var_19 = (+((~(((/* implicit */int) var_16)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_9 [i_2] [i_1] [(unsigned char)18] [i_3] = ((/* implicit */signed char) (+(1048575U)));
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((short) (-((~(16777215)))))))));
                    }
                    var_21 = min(((~(((/* implicit */int) (unsigned char)104)))), (((/* implicit */int) max(((unsigned char)79), (var_5)))));
                }
            } 
        } 
        var_22 = ((/* implicit */long long int) min(((-(-408051042))), (((/* implicit */int) ((_Bool) -1809849771)))));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) min((((/* implicit */unsigned long long int) (~(-1)))), (max((2616274946818530564ULL), (((/* implicit */unsigned long long int) (unsigned char)210)))))))));
    }
    for (int i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (-(((((((/* implicit */int) (short)-24185)) + (2147483647))) << (((((-408051042) + (408051057))) - (15))))))))));
        arr_12 [i_4] = ((/* implicit */unsigned short) (unsigned char)104);
        var_25 = ((/* implicit */int) min((((/* implicit */unsigned int) var_16)), (23U)));
    }
}
