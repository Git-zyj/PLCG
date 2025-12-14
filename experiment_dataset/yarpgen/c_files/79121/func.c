/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79121
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
    var_14 *= ((/* implicit */unsigned int) ((-2064771227970596646LL) - (max((((/* implicit */long long int) ((((/* implicit */_Bool) 2064771227970596645LL)) ? (((/* implicit */int) (unsigned short)48807)) : (((/* implicit */int) (unsigned char)58))))), (3706226452155397552LL)))));
    var_15 = ((/* implicit */unsigned short) (+(var_3)));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+(2064771227970596645LL)))) ? (((/* implicit */long long int) var_7)) : (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_6)) : (-4733948036165014843LL))) << (((((/* implicit */int) ((short) (unsigned char)50))) - (30)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_0] = (-(((((/* implicit */_Bool) ((short) 6142066713255372763LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (3706226452155397553LL))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)40260))) / (arr_15 [i_1 + 3] [i_1] [i_1] [i_1 - 1] [i_1]))))));
                            arr_17 [i_0] = ((/* implicit */unsigned short) ((min((min((((/* implicit */long long int) -1949237585)), (3706226452155397578LL))), (((/* implicit */long long int) (unsigned char)48)))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (+(((int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)7680))))))))));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)24843)) & (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) min((((_Bool) 3832526011754301090LL)), (((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_16 [i_0] [i_1] [0U]))))))))))));
                            arr_18 [i_0] [i_0] [(signed char)8] [(signed char)8] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> (((3311402844186687908LL) - (3311402844186687877LL)))));
                        }
                    } 
                } 
                arr_19 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) var_1);
            }
        } 
    } 
}
