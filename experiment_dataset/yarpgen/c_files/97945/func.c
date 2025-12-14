/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97945
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) ((_Bool) 201326592))) : (((/* implicit */int) var_0)))) ^ (((/* implicit */int) ((((/* implicit */int) var_12)) > (((var_12) ? (((/* implicit */int) (unsigned short)29729)) : (201326592)))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (short)-18917))))))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (arr_5 [i_0] [14LL] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)177))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)29729))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) & (min((arr_3 [i_0]), (((/* implicit */long long int) (short)18893))))));
                                var_19 ^= (+(((/* implicit */int) (short)-18917)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) ((17317747013858326857ULL) < (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [(signed char)11] [i_0])), (var_11))) + (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)166))))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((var_5), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) < (arr_14 [i_2 + 2])))))))));
                        var_22 = ((/* implicit */short) ((arr_0 [i_0]) % (((/* implicit */int) arr_10 [i_0] [i_2] [i_1] [i_1] [i_0] [i_0] [i_0]))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        for (short i_7 = 1; i_7 < 14; i_7 += 2) 
                        {
                            {
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)29729)) * (((/* implicit */int) (unsigned short)35806))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1] [i_1])) < (((/* implicit */int) (short)18917)))))) : (max((((/* implicit */unsigned int) arr_22 [i_0] [(_Bool)1] [12ULL] [i_6] [i_7])), (var_6))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)35807)) ^ (var_5))))))));
                                arr_25 [i_7] [i_1] [i_2] [i_1] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)18936)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)35817))))) ? (((/* implicit */unsigned long long int) var_1)) : (min((((/* implicit */unsigned long long int) (unsigned short)35810)), (arr_8 [i_1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
