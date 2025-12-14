/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86969
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0))) < (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_10)), (var_6))))))) < (((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_0)))) ? (((/* implicit */int) arr_1 [i_0])) : ((-(((/* implicit */int) arr_5 [i_2] [i_1] [i_0] [i_0]))))))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) min(((signed char)83), (((/* implicit */signed char) (_Bool)1))))) / (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) (_Bool)1)))))))) : (var_4)));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) var_6)) : (var_9)))) ? (((/* implicit */int) ((var_4) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [(unsigned short)14] [i_2] [i_3])))))) : (((/* implicit */int) arr_5 [i_3] [i_0] [i_0] [i_0]))));
                        arr_12 [i_0] [i_0] = ((/* implicit */signed char) var_7);
                        var_11 = ((((/* implicit */_Bool) (+(arr_4 [i_0] [(signed char)9] [i_2])))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */int) (!(var_5)))) ^ ((-(((/* implicit */int) arr_2 [i_2])))))));
                        var_12 = ((/* implicit */signed char) (_Bool)1);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        for (signed char i_5 = 1; i_5 < 11; i_5 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_1] [(unsigned char)11] [i_0] [i_5] = ((/* implicit */unsigned short) arr_10 [i_4]);
                                arr_18 [i_0] [(_Bool)1] [i_2] [i_4] [i_0] = var_2;
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) < (556124153)));
                                arr_19 [i_0] [i_1] [8U] [(signed char)4] [i_5] [i_1] &= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) max((((/* implicit */short) var_2)), (arr_10 [i_2])))))) + (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)67))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                {
                    var_14 = ((/* implicit */signed char) min((arr_26 [i_8] [i_8]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3474351089U)))))));
                    var_15 = ((/* implicit */short) (((_Bool)1) ? (((((/* implicit */_Bool) arr_22 [i_6])) ? (min((arr_25 [i_6] [i_7] [i_8]), (1234810428U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((unsigned int) arr_26 [i_7] [i_6]))));
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_26 [i_6] [i_8]))));
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)-62)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) : (((unsigned int) var_8))));
}
