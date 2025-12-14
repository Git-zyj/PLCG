/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63591
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_3 [(signed char)0] [i_0])), (((long long int) arr_3 [i_0] [i_0]))))), ((~(((((/* implicit */_Bool) arr_2 [(unsigned char)7] [i_1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (var_5)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) 0)), (-5265812404191946503LL))) + (((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) var_0)))))))) ? (min((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2 + 2] [i_1])) == (((/* implicit */int) var_7))))), (min((((/* implicit */long long int) var_11)), (var_1))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1])) ? (((/* implicit */int) var_6)) : (arr_6 [i_1] [i_1] [i_2])))), (((((/* implicit */_Bool) var_1)) ? (var_4) : (arr_10 [i_0] [i_1])))))));
                            arr_13 [i_1] = ((/* implicit */int) arr_1 [i_0] [i_0]);
                        }
                    } 
                } 
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (203671956980432150LL) : (-2085935206291388443LL))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) var_11))))), (var_3))) : (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) arr_7 [i_1])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) var_12);
    /* LoopNest 2 */
    for (short i_4 = 3; i_4 < 6; i_4 += 4) 
    {
        for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            {
                var_15 -= ((/* implicit */short) var_5);
                arr_20 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4 + 1] [i_4 + 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4 - 3] [i_4 + 1]))) : (var_5)))) ? (max((((((/* implicit */unsigned long long int) var_4)) & (var_5))), (((/* implicit */unsigned long long int) min((arr_17 [(unsigned char)5] [i_4] [(unsigned char)5]), (((/* implicit */short) arr_9 [i_4 - 3] [i_5] [i_4] [(signed char)10] [i_4]))))))) : (max((((unsigned long long int) -2085935206291388443LL)), (((/* implicit */unsigned long long int) arr_3 [i_4] [i_5]))))));
                var_16 = ((/* implicit */short) arr_8 [8ULL] [(signed char)18] [i_4 + 4] [i_5]);
                /* LoopNest 3 */
                for (short i_6 = 2; i_6 < 9; i_6 += 4) 
                {
                    for (int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 7; i_8 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((((long long int) 4294967282U)), (((/* implicit */long long int) (-((+(arr_30 [i_6] [i_8 + 2])))))))))));
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_5] [i_6] [i_7] [i_8 + 3]))) ^ (var_3))), (((/* implicit */unsigned long long int) arr_27 [i_6 - 1])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) var_6)))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
