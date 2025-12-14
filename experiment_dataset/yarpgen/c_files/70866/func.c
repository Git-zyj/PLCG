/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70866
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_11 = (~((+(473655892))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        {
                            var_12 ^= ((unsigned long long int) 899076587U);
                            var_13 &= ((/* implicit */int) (~(max((var_7), ((~(var_0)))))));
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (arr_8 [i_4] [i_1] [i_2] [11] [3ULL] [i_3]) : (arr_4 [17] [17]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 473655896)) ? (473655913) : (-473655865))))))) ? ((-((-(0ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4] [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2 - 1]))))))));
                            var_15 = ((int) 1595966961512296034ULL);
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_4 [8] [8]), (arr_8 [2ULL] [i_1] [i_1] [i_0] [i_0] [2ULL])))) ? (arr_10 [i_0] [i_0] [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1955119067)) ? (arr_6 [i_0] [3] [i_1] [i_1]) : (1955119062)))))))));
            var_17 = ((((/* implicit */_Bool) ((1367782951692453511ULL) >> (((-1955119086) + (1955119143)))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) 1955119085)) / (1U)))))) : (max((((unsigned long long int) arr_2 [i_0])), (arr_10 [i_0] [13U] [i_0] [i_1] [i_1]))));
            var_18 = ((/* implicit */unsigned int) arr_2 [i_0]);
        }
        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            var_19 = ((/* implicit */int) max(((-(min((var_7), (var_0))))), (((/* implicit */unsigned long long int) (-((+(arr_13 [i_0] [i_0]))))))));
            arr_15 [i_5] = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_8 [12U] [i_0] [i_0] [i_5] [i_5] [i_5])))))));
            var_20 = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1955119087)) ? (2077450632U) : (27U))))))));
            var_21 = ((/* implicit */unsigned int) ((unsigned long long int) (+((-(var_10))))));
        }
        for (unsigned int i_6 = 2; i_6 < 14; i_6 += 1) 
        {
            arr_18 [i_6] [i_6 - 1] = ((/* implicit */unsigned int) max((((unsigned long long int) (-2147483647 - 1))), ((~(((((/* implicit */unsigned long long int) arr_1 [i_0])) & (var_7)))))));
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 1463334516U)) & (128849018880ULL))))));
        }
    }
    for (int i_7 = 0; i_7 < 18; i_7 += 1) /* same iter space */
    {
        var_23 -= min((arr_3 [i_7] [i_7] [i_7]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8146634876730728295ULL)) ? (((/* implicit */unsigned int) -1331765224)) : (1526741489U)))) ? (var_0) : (max((arr_14 [17]), (arr_10 [14ULL] [12ULL] [i_7] [i_7] [10ULL]))))));
        var_24 = ((((/* implicit */_Bool) arr_9 [i_7] [i_7] [10] [i_7] [i_7] [10U] [14U])) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [13] [i_7] [i_7] [i_7] [i_7])) ? (arr_16 [12] [i_7]) : (arr_1 [i_7])))) * ((-(496532153787111025ULL))))) : (((/* implicit */unsigned long long int) min((arr_7 [i_7] [i_7] [i_7]), (((/* implicit */unsigned int) (+(arr_20 [4U]))))))));
    }
    var_25 &= (-(min((((/* implicit */unsigned long long int) var_8)), (var_5))));
    var_26 -= ((/* implicit */unsigned int) var_4);
}
