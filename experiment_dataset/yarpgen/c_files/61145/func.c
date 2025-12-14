/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61145
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
    var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -1165510608)) + (2982130529606573924ULL)));
    var_13 |= ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? ((+(1165510608))) : (((/* implicit */int) max((arr_3 [i_0 + 3] [i_0 + 1]), (arr_3 [i_0 + 3] [i_0 + 1]))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((arr_2 [i_0 + 1]) >> (((arr_2 [i_0 + 3]) - (232900173U))))) & (((arr_2 [i_0 + 2]) << (((((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))) - (5630)))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 1; i_2 < 9; i_2 += 2) /* same iter space */
                {
                    arr_10 [i_2] = ((/* implicit */unsigned short) var_0);
                    var_14 = ((/* implicit */unsigned long long int) ((unsigned char) var_9));
                    arr_11 [i_2] [i_2] [i_0] [i_2] = ((/* implicit */short) arr_2 [i_0 + 2]);
                    var_15 = ((/* implicit */unsigned short) arr_5 [i_0 - 2]);
                }
                for (unsigned char i_3 = 1; i_3 < 9; i_3 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)255))))) : (var_10)))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15464613544102977691ULL)) ? (((/* implicit */long long int) -237503004)) : (2305842992033824768LL)));
                    var_18 += ((/* implicit */short) (+(((arr_8 [i_3] [i_3] [i_3 - 1]) >> (((arr_8 [i_0] [i_1] [i_3 - 1]) - (1000735322730799904LL)))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])) ? ((-(((/* implicit */int) arr_3 [i_3] [i_3 + 1])))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_3 + 2] [i_1])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_3]))))));
                }
                for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max(((-(((/* implicit */int) arr_12 [i_0 + 2])))), ((+(((/* implicit */int) arr_1 [i_0 - 1])))))))));
                                var_21 ^= var_2;
                                arr_23 [i_0] [i_1] [i_4] [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) + (var_10)))) ? (((((/* implicit */_Bool) (unsigned short)39946)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (var_0)))) ? (arr_21 [i_0] [i_5]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_1] [i_1] [i_6])) - (1165510614)))) : (((((/* implicit */_Bool) arr_2 [i_6])) ? (var_11) : (((/* implicit */unsigned int) 237502997)))))))));
                                var_22 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) * (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_10))) / (var_1)))));
                            }
                        } 
                    } 
                    var_23 = ((arr_18 [i_0] [i_0] [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_5 [i_1])))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_7))))) : (((long long int) arr_15 [i_0] [i_1] [i_4]))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_7))));
}
