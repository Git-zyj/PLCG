/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86851
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
    var_18 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) var_12);
                var_20 = ((/* implicit */int) ((((arr_3 [i_1] [i_0] [i_0]) > (arr_3 [i_0] [i_0] [i_1]))) ? (max((((/* implicit */long long int) arr_0 [i_0] [i_1])), (arr_3 [i_0] [i_0] [i_1]))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0])))))));
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
                {
                    var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_2] [i_1]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)21278))))) : ((~(var_17)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0] [i_2]))) : (7852874151207367181ULL)));
                    arr_7 [i_1] [(short)0] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 5502667969768625559LL)))) ? ((~(((/* implicit */int) ((((/* implicit */long long int) 435579747)) < (var_14)))))) : ((-(((/* implicit */int) arr_0 [i_0] [i_0]))))));
                }
                for (int i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0]))) * (((((/* implicit */_Bool) 0ULL)) ? (4341857670501674841ULL) : (16915126467932712661ULL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_3])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_1])))))));
                    var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) arr_10 [i_0] [i_1])) ? (((int) ((arr_5 [i_0] [i_1] [i_3] [i_0]) - (arr_8 [i_3] [i_3])))) : (((/* implicit */int) var_12))))));
                }
                for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    var_24 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_14)) > (var_4)));
                    arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((4341857670501674841ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26)))))) - (((((/* implicit */_Bool) var_17)) ? (var_0) : (((/* implicit */int) arr_9 [i_4] [i_0] [i_4] [i_4]))))));
                    var_25 = ((/* implicit */int) max((arr_5 [i_0] [i_1] [i_4] [i_4]), (((arr_3 [i_4] [i_4] [(signed char)8]) - (arr_3 [(short)4] [i_4] [i_4])))));
                }
                for (int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    var_26 = ((/* implicit */unsigned char) ((max((var_16), (max((((/* implicit */int) arr_10 [i_0] [i_0])), (arr_16 [i_5] [i_1] [i_1] [i_0]))))) <= (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_5])) < (((/* implicit */int) arr_0 [i_0] [i_0])))))));
                    var_27 = (-(((26ULL) + (11ULL))));
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)97)) || (((/* implicit */_Bool) -2513006916758514706LL))))))) : ((+(((/* implicit */int) arr_10 [i_5] [i_1]))))));
                }
            }
        } 
    } 
}
