/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6482
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
    var_17 = ((/* implicit */long long int) 812432185U);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_1]) : (arr_2 [i_1]))) == (max((arr_2 [i_1]), (((/* implicit */int) (signed char)-88))))));
                var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_1 [i_0] [i_0])))) & ((~(((/* implicit */int) var_6))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 17; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_21 [i_2] [i_3] [i_4] [i_2] [2ULL] = ((/* implicit */signed char) (-(((/* implicit */int) ((((arr_11 [i_2] [i_4] [i_2] [6U]) >> (((((/* implicit */int) (unsigned short)51828)) - (51800))))) <= (((/* implicit */long long int) arr_2 [i_3])))))));
                                arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((5750581855907731397ULL) + (((/* implicit */unsigned long long int) -443786486))));
                                arr_23 [i_2 + 3] [(_Bool)1] [i_2] [i_5] [i_6 - 1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_6 - 1] [(signed char)0]))))), (((((/* implicit */_Bool) arr_10 [i_2 - 2])) ? (arr_10 [i_2 - 1]) : (5750581855907731388ULL)))));
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((12696162217801820221ULL) * (((/* implicit */unsigned long long int) 0)))) % (((((/* implicit */_Bool) 5750581855907731397ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27962))) : (14ULL))))))));
                                arr_24 [i_2] [i_3] [14ULL] [i_2] [19ULL] [i_5] [i_6] = ((/* implicit */_Bool) (((+(((/* implicit */int) var_12)))) / (((/* implicit */int) var_12))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_7 = 3; i_7 < 17; i_7 += 1) 
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((12LL), (((/* implicit */long long int) arr_15 [i_2]))))) && (((/* implicit */_Bool) ((5750581855907731397ULL) & (18446744073709551606ULL))))));
                    arr_28 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1])) + (((/* implicit */int) arr_27 [i_7 - 3] [i_7 + 2] [i_7] [i_7]))))) ? (((((/* implicit */unsigned long long int) 544131427)) & (5750581855907731397ULL))) : (((18006201340164564546ULL) << (((arr_26 [i_2]) - (63462827)))))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((arr_2 [i_2 - 2]) != (((/* implicit */int) (_Bool)0)))))));
                    var_23 -= ((/* implicit */_Bool) (((_Bool)1) ? (-443786458) : (-1790446725)));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_3))));
}
