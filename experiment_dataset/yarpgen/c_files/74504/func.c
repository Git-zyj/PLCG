/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74504
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
    var_11 = ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26420)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-125))) : (-8309254437778165051LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148))) : (var_8)));
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) -7293002817068355565LL)) ? (arr_8 [i_0] [(unsigned short)11] [i_1 - 1]) : (((/* implicit */int) (unsigned char)152))));
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_0])) : (((/* implicit */int) arr_0 [i_1 + 1])))))));
                }
                arr_9 [(unsigned char)3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)103)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)152)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0]))))) : (((((/* implicit */_Bool) var_6)) ? (-7293002817068355565LL) : (3119235554938995497LL)))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 1; i_3 < 12; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 - 2] [i_1 + 1] [i_3 - 1])) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 2])) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) (unsigned char)144)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (var_9)))));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */int) arr_14 [i_0] [i_1 - 2] [i_3])) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_1] [i_3])) ? (7624330667769162727LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)136)))))));
                            arr_15 [(signed char)6] [i_1] [i_1 + 1] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)116)) ? (var_9) : (((/* implicit */int) (unsigned char)107))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 1] [i_4])) ? (1033441185015174656LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-41)) ? (-804231512) : (((/* implicit */int) (signed char)-1)))))));
                            arr_16 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19175)) ? (((/* implicit */int) (unsigned char)144)) : (((/* implicit */int) (unsigned char)139))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14887)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_3] [i_3]))))) ? (5857201047913680875LL) : (((/* implicit */long long int) var_9))))) : (((((/* implicit */_Bool) 617350677903487650LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172))) : (18446744073709551610ULL)))));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_3 + 1] [i_1 - 2] [i_3])) ? (((/* implicit */int) arr_10 [i_3] [i_3 + 1] [i_1 - 2] [i_3])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_10 [i_3] [i_3 + 1] [i_1 + 1] [i_3])) : (((/* implicit */int) arr_10 [i_3] [i_3 + 1] [i_1 - 1] [i_3]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_2);
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)7))))))) : (var_2)));
}
