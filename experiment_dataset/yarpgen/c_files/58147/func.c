/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58147
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
    var_10 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) -792422965))))))) : (((/* implicit */int) (_Bool)1))));
        arr_2 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) 11950947076370859247ULL)))))), (arr_1 [i_0] [13ULL])));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((((/* implicit */_Bool) (+(var_4)))) ? (arr_1 [i_3] [i_1]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))))) <= (((((/* implicit */_Bool) arr_0 [i_3 - 1] [i_3 - 2])) ? (12813451891902422436ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_3 + 2]))))))))));
                        var_13 *= ((/* implicit */_Bool) (-(((17822111153692136442ULL) ^ (((/* implicit */unsigned long long int) 727323224))))));
                        var_14 = ((/* implicit */int) max(((+(624632920017415173ULL))), (min((((/* implicit */unsigned long long int) var_8)), (arr_11 [i_3 - 1] [i_3 + 2] [i_3 + 1] [i_1])))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        var_15 -= ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 2094443695)) : (arr_0 [i_0] [i_0]));
                        var_16 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9635412372454345678ULL)) ? (((/* implicit */int) var_6)) : (arr_10 [i_2] [i_0])))) & (((arr_11 [i_0] [(_Bool)1] [i_2] [i_4]) | (arr_4 [i_0] [i_0]))));
                        var_17 -= ((((/* implicit */_Bool) var_6)) ? (arr_3 [i_1] [(_Bool)0]) : (arr_3 [i_2] [i_4]));
                        var_18 *= ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_2]))) : (6794918615594947836ULL)));
                    }
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) ? (arr_5 [i_2] [i_1] [i_0]) : (var_4)))) ? ((-(((/* implicit */int) ((arr_5 [(_Bool)1] [(_Bool)1] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) var_7))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -1805639542)) ? (arr_8 [i_0] [14ULL] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))))) ^ (((unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0]))))) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))))))));
    }
}
