/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97848
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((-6066956436776060348LL) > (9223372036854775790LL))))) ? (((/* implicit */unsigned long long int) -6066956436776060360LL)) : (min((((/* implicit */unsigned long long int) (signed char)-51)), (min((((/* implicit */unsigned long long int) -6066956436776060370LL)), (var_14)))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) var_15);
                        arr_9 [i_3] [9LL] = ((((/* implicit */_Bool) ((arr_8 [i_0] [i_1] [i_1 - 1] [(_Bool)1]) ? (((/* implicit */int) arr_8 [i_0] [i_3] [i_1 - 1] [i_3])) : (((/* implicit */int) arr_8 [i_3] [i_2] [i_1 - 1] [i_3]))))) ? (((((/* implicit */_Bool) ((arr_4 [(_Bool)1]) ? (-1600837558) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 1]))) : ((((_Bool)0) ? (651793735794840847ULL) : (651793735794840853ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
                    }
                    for (int i_4 = 2; i_4 < 16; i_4 += 1) 
                    {
                        var_21 += ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)144))));
                        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_0 [i_1 - 1]), (arr_0 [i_1 - 2]))))));
                        arr_13 [i_0] [i_0] [i_2] [i_4 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_12 [i_2] [i_0])) == (((/* implicit */int) arr_12 [i_4 + 1] [i_0]))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_4 [i_1]) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4])))))))))));
                    }
                    var_23 = ((/* implicit */short) min((((arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 2]))) : (6066956436776060345LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_17)))))));
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */short) var_12);
                }
            } 
        } 
    } 
    var_24 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) var_3))))) && (((/* implicit */_Bool) 8678249104148494330ULL))))) | (((/* implicit */int) var_0))));
}
