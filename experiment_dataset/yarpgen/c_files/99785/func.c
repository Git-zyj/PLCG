/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99785
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
    var_16 = ((/* implicit */short) (((+(-5721678124530283290LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((20U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) >= (((/* implicit */int) var_10))))))));
    var_17 = ((/* implicit */long long int) var_2);
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (+(((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((_Bool) -5721678124530283303LL)) ? (((/* implicit */long long int) 15U)) : (((((/* implicit */_Bool) min(((signed char)(-127 - 1)), ((signed char)109)))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (arr_10 [i_4] [i_3] [9U] [(signed char)4]) : (((/* implicit */long long int) -2103122507)))) : (-5721678124530283270LL)))));
                                arr_13 [i_4] [i_4] [i_1] [i_2 + 2] [i_1] [i_1] [i_0] = ((134217728) + (((/* implicit */int) (unsigned char)58)));
                                arr_14 [i_0] [i_1] [i_3] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)121)) & (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_3] [i_3] [i_2] [i_1] [i_3] [i_3]))))) : (((((/* implicit */_Bool) arr_7 [i_0] [7ULL])) ? (9U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) (signed char)127)), ((short)19441))))))) : (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4816339193858466530ULL))))), ((unsigned char)83))))));
                                arr_15 [i_0] [(signed char)1] [i_2] [(short)14] [i_1] = ((/* implicit */signed char) min((-2103122524), (((/* implicit */int) (unsigned char)110))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((arr_8 [i_0] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [19] [i_0]))))) >= (((((/* implicit */_Bool) (unsigned char)121)) ? (4816339193858466530ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned int) (~((~(((/* implicit */int) (signed char)109))))));
                                arr_21 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(arr_2 [i_1])));
                                arr_22 [i_1] [i_1] [i_1] [i_0] [14U] [i_1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [5ULL] [i_1] [i_2 + 2] [i_2 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) min((arr_2 [11ULL]), (((/* implicit */long long int) arr_11 [i_0] [i_1] [i_2] [i_5] [i_6]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3752277417U))))))) : (((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((var_14) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))));
}
