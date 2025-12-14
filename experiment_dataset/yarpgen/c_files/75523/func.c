/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75523
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
    for (long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((((((-1LL) + (9223372036854775807LL))) >> (((((arr_0 [(_Bool)1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48432))))) - (43306ULL))))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */short) arr_7 [i_3] [(_Bool)1] [i_2] [i_3]);
                                var_15 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_2] [i_3 - 1] [i_0 - 1]))));
                                var_16 = ((/* implicit */long long int) ((arr_0 [i_1]) == (((/* implicit */unsigned long long int) arr_3 [i_0]))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_9)))) ? ((-(((/* implicit */int) arr_8 [i_2] [i_1] [i_2])))) : (((/* implicit */int) var_3))));
                    var_18 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) << (((((long long int) arr_2 [i_0] [i_2])) - (8574LL)))));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((arr_3 [i_0 - 1]) == (((((/* implicit */_Bool) var_2)) ? (arr_3 [5ULL]) : (266957918U))))))));
                }
                for (unsigned short i_5 = 2; i_5 < 15; i_5 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_5 - 1])) || (((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_5] [10LL]))) : (5161383678646670238ULL)));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) var_1);
                                var_22 &= ((/* implicit */unsigned short) (+((~(var_11)))));
                                var_23 = ((/* implicit */long long int) ((((((/* implicit */int) arr_6 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) - ((+(((/* implicit */int) arr_7 [i_0 - 1] [i_1] [(short)11] [i_6])))))) + (((/* implicit */int) arr_6 [i_6] [i_1] [i_5 - 1] [14LL] [i_7] [0LL]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) var_7);
                                var_25 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_13 [i_5] [i_1] [i_5 - 1] [i_8])), (4028009378U)))) / (((long long int) arr_7 [0U] [i_8] [0U] [i_8])))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_0)))) ^ (((/* implicit */int) ((unsigned short) max((576460752303292416LL), (((/* implicit */long long int) (signed char)-126))))))));
                    var_27 = ((/* implicit */long long int) arr_21 [i_5 - 2] [i_5 + 1] [(unsigned short)10] [i_5] [(unsigned short)10] [i_0] [i_0 - 1]);
                }
                for (unsigned short i_10 = 2; i_10 < 15; i_10 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_1] [i_10 - 2]))));
                    var_29 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((arr_17 [(unsigned short)13] [i_10] [11LL] [i_10 - 2] [i_10 - 2]), (var_9)))), (min((arr_0 [i_0 - 1]), (((/* implicit */unsigned long long int) arr_10 [i_0 + 1] [i_1] [i_10 - 1]))))));
                }
            }
        } 
    } 
    var_30 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) (_Bool)1))))))));
    var_31 = ((/* implicit */long long int) 16508339621624287872ULL);
}
