/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75972
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
    var_11 = ((/* implicit */int) max((((unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (2603640599U) : (((/* implicit */unsigned int) 2147483647))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_1 [i_0]))))))), (((long long int) var_7))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (unsigned short i_3 = 2; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((long long int) -4951033317461843081LL))) ? (((((/* implicit */_Bool) 491781225934033053ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3745551954U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_6)))))))));
                        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((long long int) ((short) -6161801337972894643LL))))));
                    }
                } 
            } 
        } 
    }
    for (int i_4 = 3; i_4 < 20; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            /* LoopSeq 4 */
            for (int i_6 = 3; i_6 < 20; i_6 += 4) /* same iter space */
            {
                var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
                var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_4)))))), (max((((/* implicit */unsigned long long int) arr_0 [i_4 + 1] [i_6 - 2])), (min((var_0), (((/* implicit */unsigned long long int) arr_12 [i_4]))))))));
                arr_20 [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((long long int) arr_15 [(short)16] [(short)16]));
            }
            for (int i_7 = 3; i_7 < 20; i_7 += 4) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min((((/* implicit */long long int) var_8)), (((((arr_1 [i_4 - 3]) + (9223372036854775807LL))) << (((((-6161801337972894643LL) + (6161801337972894658LL))) - (15LL))))))))));
                var_18 = ((/* implicit */long long int) arr_3 [i_4] [18LL]);
                var_19 = min((((((((/* implicit */long long int) ((/* implicit */int) var_7))) != (arr_1 [i_5]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_7 - 3]))) : (var_0))), ((-(min((1824395213682911958ULL), (((/* implicit */unsigned long long int) var_4)))))));
            }
            for (int i_8 = 2; i_8 < 18; i_8 += 4) 
            {
                arr_26 [i_5] [i_8] [i_4] [i_5] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_17 [i_8 + 3] [i_5] [i_5] [i_4 - 1])) ? (arr_17 [i_8 - 1] [i_5] [i_5] [i_4]) : (arr_17 [i_8 - 2] [i_5] [i_5] [i_4 - 2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [i_8] [i_5] [i_8 - 2] [i_8] [i_8])) : (((/* implicit */int) var_10)))))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_4] [i_4 - 2] [i_4 - 2] [i_5])) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) var_8))))) ? (((((arr_5 [i_4] [i_4] [17LL]) <= (((/* implicit */unsigned long long int) var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_24 [i_4] [i_4] [i_5] [i_8]), ((short)16914))))) : (((unsigned long long int) 2147483647)))) : (((/* implicit */unsigned long long int) arr_1 [i_5]))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) ((unsigned long long int) ((var_0) * (arr_27 [i_4 + 1] [i_4 + 1] [i_8] [i_8]))));
                            var_22 ^= ((/* implicit */long long int) (((((-(var_9))) - (((/* implicit */long long int) min((arr_8 [i_10] [i_9] [i_8]), (((/* implicit */unsigned int) var_2))))))) == (((/* implicit */long long int) min(((+(((/* implicit */int) arr_30 [i_4] [14ULL] [i_4 + 1] [i_4] [i_4])))), ((+(((/* implicit */int) var_10)))))))));
                        }
                    } 
                } 
                arr_32 [18ULL] [i_5] [18ULL] [18ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_23 [i_4] [i_5] [i_8 - 1] [(unsigned short)4]))) < (((((/* implicit */_Bool) 11033696778863630968ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_23 [i_4 - 3] [i_4 - 3] [i_8 - 1] [i_4]))))));
                var_23 = (i_5 % 2 == zero) ? (((/* implicit */short) ((((unsigned long long int) arr_21 [20ULL])) << ((((+(((((/* implicit */int) (_Bool)1)) - (arr_28 [i_5] [i_8]))))) - (897569637)))))) : (((/* implicit */short) ((((unsigned long long int) arr_21 [20ULL])) << ((((((+(((((/* implicit */int) (_Bool)1)) - (arr_28 [i_5] [i_8]))))) - (897569637))) - (136670893))))));
            }
            for (int i_11 = 4; i_11 < 19; i_11 += 1) 
            {
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_10)))))));
                arr_37 [i_5] [i_5] [i_5] = ((/* implicit */short) max((((/* implicit */long long int) ((signed char) max((arr_6 [i_4]), (((/* implicit */long long int) (unsigned short)65535)))))), (((((/* implicit */_Bool) arr_11 [i_4] [16LL] [(_Bool)1] [i_11] [i_11])) ? (min((-6161801337972894643LL), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [(signed char)11] [i_4] [(signed char)11]))))))))));
            }
            var_25 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((arr_6 [i_4 + 1]) < (arr_6 [i_4 + 1])))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_6 [i_4 - 3])) : (var_0)))));
        }
        arr_38 [1ULL] = ((/* implicit */short) (~(var_1)));
        var_26 |= var_6;
    }
    var_27 = max((((/* implicit */unsigned long long int) var_8)), (var_0));
}
