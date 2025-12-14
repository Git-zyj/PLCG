/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97267
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
    var_14 &= ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [(unsigned char)6] [i_1] &= ((/* implicit */unsigned int) max((((14060923375177918551ULL) / (((/* implicit */unsigned long long int) -6808762806271326649LL)))), (((/* implicit */unsigned long long int) (-(var_12))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 2; i_2 < 14; i_2 += 4) /* same iter space */
                {
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) max((6808762806271326665LL), (144115188075855871LL))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [14LL]))))), (((((/* implicit */_Bool) -1106547315404022022LL)) ? (((/* implicit */unsigned long long int) var_6)) : (var_4)))))));
                }
                for (unsigned char i_3 = 2; i_3 < 14; i_3 += 4) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (-(6808762806271326649LL)))) ? (13276168324728327615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6)))))));
                    var_17 = ((/* implicit */unsigned int) var_7);
                    arr_13 [i_0] [(unsigned char)11] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) 15322252327755554539ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)61))) : (max((((/* implicit */unsigned long long int) arr_11 [i_3 - 2] [10LL] [i_0 - 2])), (var_2)))));
                }
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    arr_18 [(unsigned char)7] [i_1] [i_1] [12LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)255)), (4194303LL)))), (((((/* implicit */_Bool) (unsigned char)56)) ? (15322252327755554539ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [10LL]))) : (((((/* implicit */_Bool) min(((unsigned char)6), ((unsigned char)242)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (5438920607579123079ULL)))));
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (+(var_2))))));
                }
            }
        } 
    } 
}
