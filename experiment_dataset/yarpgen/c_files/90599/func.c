/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90599
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
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((int) arr_0 [i_0] [(short)10]));
                var_14 = ((/* implicit */unsigned char) ((18238756053330905315ULL) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-44)), (1658673518U)))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1] [10ULL])) ? (1819044520U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))))) : ((+(2475922771U))))))));
                var_15 |= ((var_7) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (short)28691)), (var_4)))) ? (((/* implicit */long long int) 0U)) : (min((-7084848614842639372LL), (((/* implicit */long long int) arr_0 [i_0] [i_0]))))))));
            }
        } 
    } 
    var_16 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (min((min((1089683022218643181ULL), (((/* implicit */unsigned long long int) (short)3514)))), (((/* implicit */unsigned long long int) var_2)))));
    var_17 = ((/* implicit */unsigned long long int) ((max((((7084848614842639372LL) == (((/* implicit */long long int) var_5)))), (((_Bool) var_3)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((short) ((int) var_5))))));
    var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) -7084848614842639388LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18446744073709551615ULL)));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 2; i_3 < 17; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 2; i_4 < 18; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        {
                            var_19 = max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-39))) != ((+(70368710623232ULL)))))), (var_12));
                            arr_15 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 1310662778U)) ? (9683265249559846769ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_20 = (+(min((var_5), ((-(-1103713281))))));
                            arr_16 [i_2] [i_2] [i_2] [i_4] [i_5] = ((/* implicit */unsigned int) (~((+(12607606416499987724ULL)))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) 4100162545491217044ULL);
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((unsigned int) ((((6867846160527452649ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(signed char)12] [(signed char)12] [(signed char)12] [i_2]))))) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-6)))))))))));
            }
        } 
    } 
}
