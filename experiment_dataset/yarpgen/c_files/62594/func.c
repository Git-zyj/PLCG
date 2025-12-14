/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62594
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [(signed char)4] [9U] [i_2] = ((/* implicit */_Bool) (-(min((arr_7 [i_0]), (((/* implicit */unsigned int) ((int) var_10)))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_5 [i_2]) : (arr_5 [i_0]))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (!(((((/* implicit */_Bool) ((int) var_4))) || (((/* implicit */_Bool) 9180704404660875422ULL)))))))));
                                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_11 [i_0] [(unsigned char)5] [i_4] [i_3])))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (-(10892379738160552633ULL))))))))))));
                                arr_16 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) var_9);
                                arr_17 [i_1] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((((long long int) 0ULL)) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > (arr_14 [i_0] [i_1] [i_4] [i_0] [i_4] [i_4])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (short i_6 = 4; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((arr_7 [i_0]) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_2] [i_2])) * (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max((min(((-(9223372036854775807LL))), (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_0])))), ((((!(var_5))) ? (max((((/* implicit */long long int) 5)), (arr_14 [i_0] [i_0] [0LL] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((9266039669048676207ULL) >= (0ULL))))))))))));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) (unsigned short)12962)), (1153498509676988479ULL)))))) ? (((((/* implicit */_Bool) ((arr_3 [i_5] [i_2] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (arr_14 [i_0] [i_0] [i_0] [i_0] [0] [i_0])))) ? (((/* implicit */int) arr_3 [i_2] [i_2] [i_2])) : (max((((/* implicit */int) (signed char)-83)), (arr_12 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) (signed char)-25))));
                                var_17 = ((((var_8) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_7 [i_0])) : (18446744073709551614ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-25)))))))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)52588))))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_2) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4222124650659840ULL)))))) : (((((/* implicit */_Bool) var_9)) ? (9266039669048676205ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) ((unsigned char) var_10)))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) & (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42545))))))) : (((var_8) ? (((/* implicit */unsigned long long int) -82789848)) : (arr_21 [i_0])))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (var_7))))))) >= (var_11)));
}
