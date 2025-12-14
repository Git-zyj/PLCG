/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90525
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~((+(arr_0 [i_0] [i_3])))))))))));
                            var_17 += ((/* implicit */signed char) (~((+(((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_9 [i_0] [i_1] [i_2] [i_3]) : (((/* implicit */int) (signed char)-28))))))));
                            var_18 += ((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]);
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-118)) ^ (((/* implicit */int) ((arr_2 [i_0]) == (arr_2 [i_1]))))))) : (10545158711768291012ULL)));
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) min((arr_5 [i_1] [i_1] [i_0] [i_0]), ((signed char)127)));
                var_21 = (~(min((min((((/* implicit */unsigned long long int) arr_4 [i_1] [i_0] [i_1])), (arr_1 [(signed char)2]))), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_1])))));
                var_22 = ((/* implicit */unsigned long long int) max((((arr_9 [i_0] [i_0] [8ULL] [i_1]) / (((/* implicit */int) (signed char)(-127 - 1))))), (((((/* implicit */int) (signed char)10)) - (arr_9 [i_0] [i_1] [i_0] [i_0])))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        {
                            arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_0] [i_0])) != (((/* implicit */int) arr_13 [i_1] [i_4]))))), (min((13163398899549429742ULL), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1]))))));
                            arr_16 [i_4] [i_4] [i_1] [i_4] = ((/* implicit */int) min(((-(max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_1])), (9ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_0])) ^ (((/* implicit */int) arr_12 [i_0] [i_1] [i_4])))))));
                            arr_17 [i_1] [i_1] [i_1] = ((/* implicit */int) (signed char)-51);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_0)), (max(((-(var_11))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-117)))))))));
    /* LoopSeq 1 */
    for (int i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-123)))))));
        var_25 = ((/* implicit */int) arr_19 [i_6] [i_6]);
    }
    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (var_4))), (((/* implicit */unsigned long long int) max((-1291840285), (1138057767))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (var_7)))) ? (((/* implicit */int) var_0)) : (1576655149))))));
}
