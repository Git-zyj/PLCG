/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71196
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) var_11);
                    var_16 |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_4)) / (((/* implicit */int) var_14))))))) / (var_8)));
                    var_17 = ((/* implicit */_Bool) (((+(17399926069941030236ULL))) % (((/* implicit */unsigned long long int) ((((_Bool) var_12)) ? (((/* implicit */int) max(((_Bool)0), ((_Bool)1)))) : (((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_2 - 1])))))));
                    var_18 ^= ((/* implicit */_Bool) 11631569343972751002ULL);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_19 = ((_Bool) ((((/* implicit */_Bool) min((255ULL), (((/* implicit */unsigned long long int) arr_14 [i_3] [i_3]))))) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) var_1))));
                    var_20 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), ((+(var_8)))))) ? (17399926069941030222ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (((unsigned long long int) var_14)))));
                    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((var_5) ^ (1046818003768521391ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4 - 1] [i_4 - 1]))))))));
                }
            } 
        } 
    } 
    var_22 = ((_Bool) (_Bool)1);
    /* LoopSeq 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_23 = ((_Bool) var_1);
        arr_22 [i_6] = ((/* implicit */unsigned long long int) arr_10 [i_6] [i_6]);
    }
    for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_29 [i_9] [i_8] [i_9] = ((unsigned long long int) ((((/* implicit */_Bool) 13378176913848029797ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551611ULL)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                        var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_10] [i_9]))))) ? (arr_32 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7]) : (((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2)))));
                        arr_33 [i_7 + 2] [i_8 + 2] [i_9] [i_9] [i_9] = ((((/* implicit */_Bool) arr_5 [i_9] [i_9] [i_9])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) * (4486007441326080ULL))) : (((((/* implicit */_Bool) arr_30 [i_7 + 2] [i_8 - 1] [i_9])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
                        arr_34 [i_9] [i_7] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_23 [i_8 + 3]))));
                    }
                    var_26 = ((/* implicit */_Bool) min(((-(arr_0 [i_8]))), (var_2)));
                }
            } 
        } 
        var_27 = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) > (((max((0ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) >> (((var_11) - (10332015456790689280ULL))))));
    }
}
