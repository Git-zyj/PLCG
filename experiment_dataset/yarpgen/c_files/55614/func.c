/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55614
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((var_2), (((/* implicit */int) (signed char)8))))))) ? (min(((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (arr_2 [i_0] [i_0]))), ((~(arr_2 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
        arr_4 [(signed char)14] = ((/* implicit */unsigned short) (-((-(arr_3 [i_0] [i_0])))));
        var_14 = ((/* implicit */_Bool) min((((((/* implicit */int) ((arr_1 [18]) == (arr_1 [i_0])))) % (((/* implicit */int) min(((short)32767), ((short)-32767)))))), (((/* implicit */int) ((signed char) min((arr_0 [17] [i_0]), (((/* implicit */int) (unsigned char)16))))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */int) min(((short)32756), (((/* implicit */short) (unsigned char)96))))), ((~(var_2)))))) / (min(((+(arr_3 [i_0] [i_0]))), (((/* implicit */long long int) var_8))))));
    }
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min((((/* implicit */signed char) ((7876700389302877721ULL) < (((unsigned long long int) var_1))))), (var_6))))));
    var_17 = var_1;
    /* LoopNest 3 */
    for (long long int i_1 = 2; i_1 < 11; i_1 += 1) 
    {
        for (long long int i_2 = 1; i_2 < 11; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) 2087572342U);
                        var_19 = ((/* implicit */unsigned short) -1720573776);
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) arr_12 [i_4])))))))));
                    }
                    arr_15 [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-17539))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            {
                                arr_21 [i_5] [(unsigned char)2] [7U] [i_5] [i_5] [(short)8] [i_2] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 13189645742163987670ULL)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47427)))))))) ? (min((arr_18 [i_1] [i_1] [(_Bool)1] [i_2 - 1] [2] [i_2]), (((/* implicit */unsigned long long int) 133419317)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)147))))));
                                arr_22 [6] [i_2] [5U] [i_5] [i_6] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 8070450532247928832ULL))))))), ((((+(5257098331545563945ULL))) * (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */unsigned short) var_2);
}
