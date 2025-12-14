/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84395
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
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0 - 1] [18] [18] [i_1] = ((/* implicit */_Bool) max((min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)201))))), (((((/* implicit */_Bool) 16796554172608423578ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_1 [i_1 + 1]))))), (((/* implicit */long long int) ((unsigned char) 16796554172608423554ULL)))));
                                var_12 += ((/* implicit */long long int) arr_0 [i_1]);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */short) min((16796554172608423560ULL), (16796554172608423576ULL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 1) 
                    {
                        for (int i_6 = 2; i_6 < 21; i_6 += 4) 
                        {
                            {
                                arr_20 [i_6 + 1] [i_0 - 1] [i_6 + 1] [i_5 - 2] [i_6] [i_1] [i_1] = ((/* implicit */long long int) var_10);
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_13 [i_2] [i_2] [i_0 - 4] [i_2]), (arr_13 [i_0] [i_0 + 1] [i_0 - 4] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_13 [i_0] [i_0 - 3] [i_0 - 1] [i_1 + 1]) != (arr_13 [i_0] [i_0] [i_0 + 1] [i_1]))))) : ((~(1650189901101128056ULL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 11; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) min((arr_2 [(signed char)5] [(signed char)5]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */int) (short)-15371)) : (((/* implicit */int) (unsigned char)75))))))))));
                arr_26 [i_8] = ((/* implicit */long long int) max((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)205))) / (16796554172608423574ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)26)) && (((/* implicit */_Bool) 1650189901101128061ULL))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_7])) ? (-516935763) : (((/* implicit */int) arr_3 [i_8])))))));
                arr_27 [i_8] = ((/* implicit */unsigned long long int) ((unsigned char) 16796554172608423565ULL));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(-1796518026084347334LL)))) ? (((((/* implicit */_Bool) var_0)) ? (var_6) : (var_6))) : (((/* implicit */unsigned long long int) var_7)))) * (((/* implicit */unsigned long long int) var_0))));
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) min((var_6), (((((/* implicit */_Bool) 16796554172608423551ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174))) : (1650189901101128038ULL))))))));
}
