/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67262
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
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_10 += ((/* implicit */short) min((((var_3) - (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) (-(var_7))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_4 = 2; i_4 < 13; i_4 += 4) 
                            {
                                var_11 |= (!(((/* implicit */_Bool) ((641063579) | (-641063599)))));
                                var_12 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */int) var_8))))) ? (((int) var_5)) : (((/* implicit */int) min((var_8), (((/* implicit */unsigned char) var_4)))))));
                                var_13 = ((/* implicit */_Bool) ((min(((!(((/* implicit */_Bool) var_3)))), (((((/* implicit */int) var_2)) <= (641063579))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) var_0))), (min((var_0), (((/* implicit */int) (unsigned short)14789))))))) : (((((/* implicit */_Bool) (-(var_7)))) ? (((((/* implicit */_Bool) var_8)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */int) (_Bool)1)))))))));
                            }
                            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (min((((/* implicit */unsigned long long int) var_1)), (var_5)))))) ? (var_6) : (((/* implicit */int) ((_Bool) var_0))))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((var_9) ? (((/* implicit */int) var_4)) : (2040203415))), (641063568)))), (var_5)));
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 14; i_5 += 2) 
                {
                    for (int i_6 = 1; i_6 < 12; i_6 += 4) 
                    {
                        for (int i_7 = 2; i_7 < 13; i_7 += 1) 
                        {
                            {
                                var_16 += ((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_8)))))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (var_5))), (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */int) (_Bool)1))))))));
                                var_17 = ((/* implicit */unsigned short) (~(((var_9) ? (var_1) : (var_7)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 |= ((/* implicit */_Bool) ((((max((((/* implicit */unsigned long long int) var_6)), (var_5))) | (((/* implicit */unsigned long long int) var_0)))) >> ((((-(937817276))) + (937817339)))));
    var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) min((min((var_5), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) var_4))))) ? (min((((((/* implicit */_Bool) var_8)) ? (0ULL) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) var_7))));
}
