/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70656
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
    for (short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 8; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_2] [i_2] [i_3 - 2] [i_4] [0] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 1474973401)) ? (arr_7 [i_4 + 2] [i_0 + 1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) arr_8 [i_4 + 2] [i_0 + 1])) ? (var_5) : (((/* implicit */long long int) arr_7 [i_4 + 2] [i_0 + 1] [i_3]))))));
                                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_12 [i_4] [i_4] [i_4 + 1] [(unsigned char)9] [i_4]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) && (var_8))))))) ? (min((((/* implicit */int) ((signed char) 1474973427))), ((~(((/* implicit */int) var_2)))))) : (((/* implicit */int) arr_9 [i_1] [i_1]))));
                                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_8 [8] [i_0 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_7) : (((/* implicit */unsigned int) var_10))))) : (((((/* implicit */_Bool) -209751504907356995LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_5))))) : ((~(min((var_4), (-209751504907356995LL)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 2; i_5 < 9; i_5 += 4) 
                    {
                        var_13 *= ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_8)), (0))))))), (min((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_14 [i_0] [i_2] [i_5 - 1])))), (arr_3 [i_0 - 2] [i_0 + 2])))));
                        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) 209751504907356995LL))));
                    }
                    for (int i_6 = 3; i_6 < 9; i_6 += 2) 
                    {
                        var_15 = ((/* implicit */_Bool) ((min(((+(((/* implicit */int) var_6)))), (((var_3) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_18 [i_0] [i_0] [(_Bool)1] [i_0])))))) / (arr_4 [i_0])));
                        arr_21 [i_0] [i_1] [i_2] [i_2] [i_6 - 3] = ((/* implicit */_Bool) ((short) ((_Bool) min((var_4), (((/* implicit */long long int) (_Bool)1))))));
                        arr_22 [i_0 - 2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0 + 2] [i_6]))))), (min((arr_12 [i_6] [i_6] [i_6 - 1] [i_6 - 3] [i_6 - 3]), (arr_12 [i_2] [i_6 + 1] [i_6] [i_6 - 1] [i_6])))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (int i_8 = 2; i_8 < 6; i_8 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) min((((/* implicit */int) ((signed char) min((var_0), (((/* implicit */short) var_6)))))), (min((min((((/* implicit */int) var_8)), (arr_23 [i_0 - 1] [i_0] [i_0 - 2] [i_0 - 2]))), (((/* implicit */int) var_9))))));
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_3))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_5);
    var_19 += ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 1269360718)) : (var_5)))))));
}
