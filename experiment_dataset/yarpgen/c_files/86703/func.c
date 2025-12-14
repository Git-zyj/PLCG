/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86703
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
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_11 *= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (arr_1 [i_1 + 2]) : (arr_1 [i_1 + 1]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_8 [i_0] [i_1 - 2] [i_1 - 2] [0ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))))));
                        arr_10 [i_3] = ((/* implicit */long long int) min((-1739155031), (((/* implicit */int) (short)27918))));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 4) 
                    {
                        var_13 += min((((/* implicit */unsigned int) max((-1739155035), (-23)))), (max((((/* implicit */unsigned int) 2097151)), (((unsigned int) var_1)))));
                        arr_13 [i_0] [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) (((-(((long long int) 5U)))) < (var_8)));
                        var_14 = ((/* implicit */int) (((~(max((arr_8 [i_4 - 1] [i_0] [i_1 - 2] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0])))))) * (((/* implicit */unsigned long long int) arr_4 [i_4] [i_0] [i_0] [i_0]))));
                        arr_14 [i_0] [i_2] [i_0] [i_1 - 2] [i_0] |= ((/* implicit */short) min(((!(((/* implicit */_Bool) arr_11 [i_1 + 1] [i_4 + 1] [i_1 + 1] [i_4 + 1])))), (((((/* implicit */_Bool) (short)-27919)) && (((/* implicit */_Bool) 607065902099398882LL))))));
                    }
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) var_7);
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_8)), (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */int) var_5))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        for (signed char i_6 = 2; i_6 < 18; i_6 += 1) 
        {
            {
                arr_19 [i_6] = ((/* implicit */unsigned int) 1311095245);
                var_17 = ((/* implicit */unsigned int) (short)16384);
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (-(((/* implicit */int) (short)16384)))))));
            }
        } 
    } 
}
