/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59044
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
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37854)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_16))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 7; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? ((-(((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 3]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(3348073663U)))) ? (((/* implicit */int) min(((unsigned short)37854), ((unsigned short)23116)))) : (((/* implicit */int) arr_1 [i_1 + 3] [0]))))) : (min((((/* implicit */unsigned int) (unsigned short)27681)), (1483927938U))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_12))));
                            var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_4 [i_1 + 2] [i_1] [i_1 - 1]), (arr_4 [i_1 - 1] [i_1] [i_1 + 1]))))));
                            var_23 = ((/* implicit */unsigned int) ((_Bool) (~(16876436544437184731ULL))));
                            var_24 = ((/* implicit */signed char) -2072864121);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 3; i_4 < 7; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) 2072864116)) ? (5788205037777717065LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2292))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((3977898702U), (((/* implicit */unsigned int) arr_7 [i_0] [(_Bool)1])))))))))))));
                            var_26 = (unsigned short)2283;
                        }
                    } 
                } 
                var_27 += ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1])) ? (max((((/* implicit */long long int) ((unsigned char) 16876436544437184731ULL))), (min((((/* implicit */long long int) (unsigned short)35548)), (4239312542400862539LL))))) : (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_1])));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_6 = 4; i_6 < 20; i_6 += 2) 
    {
        var_28 += ((/* implicit */unsigned long long int) var_12);
        arr_19 [(unsigned short)9] = ((/* implicit */unsigned int) (unsigned short)37838);
    }
}
