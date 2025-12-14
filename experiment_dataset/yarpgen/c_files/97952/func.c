/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97952
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */int) max((arr_0 [i_0] [i_0]), ((_Bool)1)))), (((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_3 [4ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 568519561U))))) + (((/* implicit */int) max(((unsigned char)51), (((/* implicit */unsigned char) arr_1 [(signed char)12] [(signed char)12])))))))) ? (min((((((/* implicit */int) arr_1 [(short)10] [i_0])) - (((/* implicit */int) (unsigned char)56)))), (((/* implicit */int) min(((unsigned char)176), (((/* implicit */unsigned char) arr_1 [i_0] [i_0]))))))) : (((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))));
        var_15 = ((_Bool) (unsigned char)72);
        var_16 = ((/* implicit */int) max((var_16), (min((((/* implicit */int) arr_0 [i_0] [6])), ((+(((/* implicit */int) min((arr_0 [i_0] [(unsigned short)8]), ((_Bool)1))))))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 4; i_1 < 22; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)175)) ? (arr_5 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1])))))) ? (((/* implicit */int) max(((unsigned char)183), ((unsigned char)72)))) : ((~(((/* implicit */int) arr_7 [(unsigned short)17]))))))) ? (((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_6 [i_1] [20ULL])), (arr_4 [i_1 - 1]))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) arr_6 [(signed char)17] [(signed char)17])))))))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_7 [i_1 + 2]))))));
                var_18 -= ((/* implicit */_Bool) (signed char)-84);
            }
        } 
    } 
}
