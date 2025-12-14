/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70935
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) var_5);
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (+(arr_3 [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [18LL] [i_0] [i_1 - 1])) > ((~(((/* implicit */int) var_1))))))) : (((/* implicit */int) (short)0)))))));
                arr_4 [i_0] = ((/* implicit */short) ((arr_1 [i_0]) > (max((var_17), (((/* implicit */int) arr_2 [i_0] [i_1 + 1] [i_1 - 1]))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned int) (+(((/* implicit */int) ((min((((/* implicit */unsigned long long int) (short)3)), (var_2))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))))))));
                                var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((17163091968ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))))))), ((~(8034152276219109637ULL)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) arr_2 [i_0] [i_0] [i_2]);
                    var_23 -= ((/* implicit */int) max((((/* implicit */short) arr_8 [i_0] [i_0] [(_Bool)1])), (((short) ((((/* implicit */int) var_14)) > (var_17))))));
                    var_24 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) var_0)) : (1005572797174568792ULL)))) ? (10412591797490441976ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [2] [2] [i_2 - 2])) ? (((/* implicit */int) (short)26811)) : (((/* implicit */int) arr_12 [17] [i_0] [i_1] [i_2] [i_2 + 1] [i_2]))))))));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)15316))) > ((+(max((((/* implicit */unsigned long long int) var_4)), (10412591797490441979ULL))))))))));
}
