/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8341
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_3 [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) var_1);
        arr_4 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_1 [i_0]))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_3] [i_3] [18ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_0 [i_0]) : (var_11)))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (arr_8 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_12 [i_0] [i_2] [i_1] [i_1] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) == (arr_0 [i_0])))))));
                        arr_14 [i_3] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) & (6060310532724180558ULL)));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            {
                var_17 = ((((/* implicit */_Bool) 12386433540985371057ULL)) && (arr_16 [(short)9] [i_5]));
                arr_21 [i_4] = ((/* implicit */_Bool) arr_15 [i_4] [i_4]);
                var_18 = ((/* implicit */signed char) min((((arr_16 [i_4] [i_4 + 1]) ? (var_11) : (6060310532724180558ULL))), (((/* implicit */unsigned long long int) ((arr_16 [i_4 + 1] [i_4 - 1]) ? (((/* implicit */int) arr_16 [i_4] [i_4 - 1])) : (((/* implicit */int) var_7)))))));
                arr_22 [i_5] [i_4] = ((/* implicit */_Bool) ((short) var_11));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned int i_8 = 1; i_8 < 16; i_8 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (var_14) : (((((/* implicit */_Bool) var_2)) ? (arr_8 [i_6] [i_6]) : (6060310532724180559ULL)))));
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) (~(var_4)));
                                arr_38 [i_6] [i_10] = ((/* implicit */short) ((signed char) 6060310532724180554ULL));
                                var_21 = ((/* implicit */long long int) var_11);
                                var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_6] [i_8 + 2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_39 [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) var_15))));
        arr_40 [i_6] = ((/* implicit */signed char) ((_Bool) 12386433540985371057ULL));
    }
    var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((short) var_14))))) ? (((/* implicit */unsigned long long int) var_2)) : (min((((/* implicit */unsigned long long int) ((-453850766701983532LL) + (((/* implicit */long long int) var_15))))), (max((((/* implicit */unsigned long long int) var_15)), (12386433540985371057ULL)))))));
}
