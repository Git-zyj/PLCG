/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72783
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
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((3961367753088912607ULL) | (((/* implicit */unsigned long long int) max((1448893478689781801LL), (((/* implicit */long long int) 3583146617U)))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 20; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (signed char)-82))));
                                arr_17 [i_0] [2ULL] [i_2 - 2] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned short) 3961367753088912626ULL))), (((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0 + 2])))))));
                                var_14 = ((/* implicit */_Bool) (+((-(((/* implicit */int) ((unsigned short) arr_14 [5] [(signed char)22] [22] [i_4])))))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_7 [i_1] [i_0] [i_0])), (max((arr_0 [i_1]), (((long long int) arr_3 [22U] [i_0]))))));
                var_15 &= ((/* implicit */int) max((3961367753088912607ULL), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_1] [i_1]))));
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    for (short i_6 = 1; i_6 < 22; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (+(min((2015740656243859229ULL), (arr_5 [i_0 - 3] [i_0 + 3]))))))));
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((min((arr_22 [i_1] [i_5]), (((/* implicit */unsigned int) (short)-32767)))) >> ((((~(14485376320620639022ULL))) - (3961367753088912567ULL))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3181601091U)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (unsigned char)242))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_1);
    var_19 = ((/* implicit */long long int) min((((((var_4) | (var_4))) | (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)70), (var_3))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) (unsigned char)6))))) && (((/* implicit */_Bool) min((var_5), ((unsigned char)249)))))))));
    var_20 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 1 */
    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
    {
        arr_29 [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_25 [3ULL])) - (((/* implicit */int) (unsigned char)198))))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((2147481600) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((arr_27 [i_8] [i_8]), (arr_27 [i_8] [i_8])))) : (((/* implicit */int) max((arr_27 [i_8] [i_8]), (((/* implicit */short) (_Bool)1)))))));
        var_22 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) ((((/* implicit */int) arr_15 [2] [(signed char)16] [18ULL] [i_8] [(signed char)6])) <= (((/* implicit */int) arr_6 [(unsigned char)1]))))), (((((/* implicit */_Bool) (short)-17612)) ? (arr_20 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_8])))))))));
    }
}
