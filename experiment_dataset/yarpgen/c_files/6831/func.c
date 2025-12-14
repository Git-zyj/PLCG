/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6831
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
    for (long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((12) <= (((/* implicit */int) (_Bool)1)))))) > ((+(arr_1 [i_0] [i_0 - 1])))));
        var_13 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) ((short) (signed char)0))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) max((arr_3 [i_0 - 1]), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)50473)) : (((/* implicit */int) var_5))))))));
        var_14 = min((min((((/* implicit */unsigned int) var_9)), ((+(var_3))))), (((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1]))) : (var_3))));
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        for (long long int i_2 = 2; i_2 < 21; i_2 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((long long int) ((long long int) 7857218526729203145ULL)));
                var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) min((((/* implicit */unsigned int) var_0)), (min((((/* implicit */unsigned int) arr_9 [i_2] [i_2])), (arr_1 [i_1] [i_1])))))) * (max((((/* implicit */long long int) arr_0 [i_2 - 2] [i_2 + 1])), (max((arr_8 [i_2]), (arr_8 [i_2])))))));
                var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_2 [i_2 - 2] [i_2 - 1]))))) ? (((long long int) var_5)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) (+(var_3)))) : (min((((/* implicit */unsigned long long int) var_11)), (10589525546980348470ULL)))))) ? (((unsigned long long int) var_10)) : (10589525546980348453ULL)));
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        for (short i_4 = 2; i_4 < 24; i_4 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (var_10)));
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            {
                                arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] = ((unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3] [i_4 + 1] [i_4 - 2])) ? (((((/* implicit */_Bool) (unsigned short)58951)) ? (7857218526729203145ULL) : (3173264266881470914ULL))) : (0ULL)));
                                arr_21 [i_3] [i_3] [i_3] [(_Bool)1] [i_3] [i_3] |= ((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3] [14ULL]);
                                arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) arr_17 [i_3] [i_3] [i_3] [i_3]);
                                var_20 = ((/* implicit */signed char) ((((var_0) + (2147483647))) >> ((((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14890579895123327506ULL))))) - (18446744073709551596ULL)))));
                            }
                        } 
                    } 
                } 
                arr_23 [i_3] [(signed char)12] |= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_10 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_19 [i_3] [i_3] [i_3] [i_3] [i_3]))) : (arr_14 [i_3] [i_3] [i_3] [i_4 - 1]))) << (((((((/* implicit */_Bool) 7857218526729203144ULL)) ? (arr_15 [i_4 + 1] [i_4 - 2] [i_4 + 1]) : (arr_15 [i_4 + 1] [i_4 - 2] [i_4 - 1]))) - (14145136806068623391ULL))));
                var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4 + 1] [i_4] [i_4])) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) var_7)))), (max((arr_14 [i_4 - 2] [i_4 - 1] [i_4 + 1] [i_4 - 2]), (arr_14 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1])))));
            }
        } 
    } 
    var_22 &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) max((var_1), (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (max((((/* implicit */long long int) var_0)), (var_6)))))));
}
