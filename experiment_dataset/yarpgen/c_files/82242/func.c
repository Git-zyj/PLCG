/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82242
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
        for (unsigned int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        var_12 |= ((/* implicit */unsigned int) ((short) (+(((/* implicit */int) var_0)))));
                        var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)43135))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_10))))))))));
                        var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))) > (arr_0 [i_0] [i_0]))))) | (arr_0 [i_1 - 4] [i_2 - 2])));
                    }
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2639898290195437729ULL)) ? (734701996U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62845))))))));
                }
                arr_13 [i_0] = ((/* implicit */long long int) max((((11274092804160572274ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_1 + 1])) / (((/* implicit */int) arr_10 [i_1 - 1])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        arr_16 [(short)12] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_9)), (arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) ? (((((/* implicit */_Bool) arr_2 [(unsigned short)11] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) 3261825349U)) : (7172651269548979340ULL))) : (((/* implicit */unsigned long long int) ((arr_11 [i_5] [(short)14] [(short)14] [(short)6]) ? (((/* implicit */int) arr_8 [i_5] [(unsigned short)7] [i_5] [14] [i_5] [i_5])) : (((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))))))) ? (((/* implicit */unsigned long long int) min((((var_5) ? (((/* implicit */int) arr_2 [i_5] [i_5] [i_5])) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_7)))))))) : (max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (8771279433699937182ULL))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_9 [16LL]) / (((/* implicit */unsigned int) arr_5 [i_5] [i_5] [(_Bool)1])))))))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_7 [(unsigned short)0] [(unsigned short)0] [i_5] [i_5] [i_5])) <= (((var_1) >> (((((/* implicit */int) var_7)) - (61)))))))))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_18 = ((/* implicit */_Bool) max((((((/* implicit */int) arr_18 [i_6])) >> (((((/* implicit */int) var_11)) + (18714))))), (((/* implicit */int) min((arr_18 [i_6]), (((/* implicit */unsigned short) var_5)))))));
        var_19 &= max((((/* implicit */unsigned short) max((var_10), (arr_17 [i_6] [i_6])))), (var_8));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) var_9)), (arr_17 [i_6] [i_6])))) ^ (((/* implicit */int) arr_18 [i_6]))));
        arr_20 [i_6] = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_18 [i_6])) / (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_6])) || (((/* implicit */_Bool) var_1))))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6]))) != (var_1))))));
    }
    var_21 = ((/* implicit */unsigned short) min((((((/* implicit */int) var_10)) >= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)-32759)))))), ((((!(((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) var_9))))));
    var_22 = ((/* implicit */int) var_11);
}
